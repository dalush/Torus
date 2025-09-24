#include <iostream>
#include "../Src/Core/GameManagers/ComponentsManager.hpp"
#include "../Src/Core/GameManagers/EntitiesManager.h"

class TransformTest : public Component {
public:
	float x, y, z;
};

ComponentsManager CompMan;
EntitiesManager EntMan;


int main() {
	auto ent = EntMan.SpawnEntity();
	auto transform = CompMan.ForceComponent<TransformTest>(ent);
	CompMan.DeleteComponent<TransformTest>(ent);
	if (CompMan.HasComponent(ent, typeid(TransformTest)))
		std::cout << "Has!";

	char i;
	std::cin >> i;
	return 0;
}