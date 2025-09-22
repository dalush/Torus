#include "EntitiesManager.h"

std::unordered_set<EntityId> EntitiesManager::EntitiesSet;

uint32_t EntitiesManager::NextFreeEntityId = 1;

bool EntitiesManager::IsValidEntity(EntityId entity) {
	return EntitiesSet.find(entity) != EntitiesSet.end();
}

EntityId EntitiesManager::SpawnEntity() {
	EntityId entity(NextFreeEntityId++);
	EntitiesSet.insert(entity);
	return entity;
}

void EntitiesManager::DeleteEntity(EntityId entity) {
	EntitiesSet.erase(entity);
}