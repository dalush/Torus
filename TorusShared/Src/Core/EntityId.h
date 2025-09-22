#pragma once

#include <cstdint>

class EntityId {
public:
	uint32_t EntId;

	EntityId(uint32_t entId);

	bool operator==(const EntityId& other) const;
	bool operator!=(const EntityId& other) const;
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