#include "ComponentsManager.hpp"

std::unordered_map<std::type_index, std::unordered_map<EntityId, std::unique_ptr<Component>>> ComponentsManager::ComponentsMap;

bool ComponentsManager::HasComponent(EntityId entity, std::type_index componentIndex) {
	auto& componentSnapshot = ComponentsMap[componentIndex];
	return componentSnapshot.find(entity) != componentSnapshot.end();
}