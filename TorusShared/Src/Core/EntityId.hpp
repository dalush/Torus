#pragma once

#include <cstdint>

class EntityId {
public:
	uint32_t EntId;

	EntityId(uint32_t entId) :
		EntId(entId)
	{ }

	bool operator==(const EntityId& other) const {
		return EntId == other.EntId;
	}

	bool operator!=(const EntityId& other) const {
		return EntId != other.EntId;
	}
};

#include <xhash>

namespace std {
	template<>
	struct hash<EntityId> {
		size_t operator()(const EntityId& entity) const {
			return std::hash<uint32_t>()(entity.EntId);
		}
	};
}