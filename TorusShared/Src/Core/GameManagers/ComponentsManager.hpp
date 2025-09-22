#pragma once

#include "../EntityId.h"
#include "../Component.h"
#include <unordered_map>
#include <typeindex>
#include <memory>

class ComponentsManager {
private:
	static std::unordered_map<std::type_index, std::unordered_map<EntityId, std::unique_ptr<Component>>> ComponentsMap;

public:
	/// <summary>
	/// checks if an entity has a component
	/// </summary>
	/// <param name="entity">target entity id</param>
	/// <param name="componentIndex">The typeid of the component whose presence you need to check</param>
	/// <returns>true if the entity has a component with the same typeid</returns>
	bool HasComponent(EntityId entity, std::type_index componentIndex);

	/// <summary>
	/// adds a component to the entity
	/// </summary>
	/// <typeparam name="TComp">component type</typeparam>
	/// <param name="entity">target entity id</param>
	/// <returns>returns a pointer to this entity component</returns>
	template<typename TComp = Component>
	TComp* AddComponent(EntityId entity) {
		auto& componentSnapshot = ComponentsMap[typeid(TComp)];

		if (HasComponent(entity, typeid(TComp)))
			return static_cast<TComp*>(componentSnapshot[entity].get());

		auto newComponent = std::make_unique<TComp>();
		TComp* newComp_ptr = newComponent.get();
		componentSnapshot[entity] = std::move(newComponent);
		return newComp_ptr;
	}
	
	/// <summary>
	/// gets the entity component
	/// </summary>
	/// <typeparam name="TComp">component type</typeparam>
	/// <param name="entity">target entity id</param>
	/// <returns>returns a pointer to the entity component or nullptr if the entity does not have this component</returns>
	template<typename TComp = Component>
	TComp* GetComponent(EntityId entity) {
		if (!HasComponent(entity, typeid(TComp)))
			return nullptr;

		auto& componentSnapshot = ComponentsMap[typeid(TComp)];
		return static_cast<TComp*>(componentSnapshot[entity].get());
	}

	/// <summary>
	/// provides an entity component
	/// </summary>
	/// <typeparam name="TComp">component type</typeparam>
	/// <param name="entity">target entity id</param>
	/// <returns>returns a pointer to the entity component</returns>
	template<typename TComp = Component>
	TComp* ForceComponent(EntityId entity) {
		if (!HasComponent(entity, typeid(TComp)))
			return AddComponent<TComp>(entity);

		return GetComponent<TComp>(entity);
	}

	/// <summary>
	/// removes a component from an entity
	/// </summary>
	/// <typeparam name="TComp">component type</typeparam>
	/// <param name="entity">target entity id</param>
	template<typename TComp = Component>
	void DeleteComponent(EntityId entity) {
		if (!HasComponent(entity, typeid(TComp)))
			return;

		auto& componentSnapshot = ComponentsMap[typeid(TComp)];
		componentSnapshot.erase(entity);
	}
};