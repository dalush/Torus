#pragma once

#include "../EntityId.h"
#include <unordered_set>

class EntitiesManager {
private:
	static std::unordered_set<EntityId> EntitiesSet;

	static uint32_t NextFreeEntityId;

public:
	/// <summary>
	/// checks the entity for suitability
	/// </summary>
	/// <param name="entity">target entity id</param>
	/// <returns>true if the entity is usable</returns>
	bool IsValidEntity(EntityId entity);

	/// <summary>
	/// creates an entity
	/// </summary>
	/// <returns>id of the entity created by this method</returns>
	EntityId SpawnEntity();

	/// <summary>
	/// removes the entity
	/// </summary>
	/// <param name="entity">target entity id</param>
	void DeleteEntity(EntityId entity);
};