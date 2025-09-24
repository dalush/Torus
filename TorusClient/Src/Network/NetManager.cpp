#include "../../TorusShared/Src/Core/Network/NetManager.h"

bool NetManager::IsClient() {
	return true;
}

bool NetManager::IsServer() {
	return false;
}