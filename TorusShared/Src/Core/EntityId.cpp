#include "EntityId.h"

EntityId::EntityId(uint32_t entId) :
	EntId(entId)
{ }

bool EntityId::operator==(const EntityId& other) const {
	return EntId == other.EntId;
}

bool EntityId::operator!=(const EntityId& other) const {
	return EntId != other.EntId;
}