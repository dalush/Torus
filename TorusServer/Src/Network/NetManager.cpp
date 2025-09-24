#include "../../TorusShared/Src/Core/Network/NetManager.h"

bool NetManager::IsClient() {
	return false;
}

bool NetManager::IsServer() {
	return true;
}