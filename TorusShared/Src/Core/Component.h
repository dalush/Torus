#pragma once

class Component {
private:
	bool Inizialize = false;

public:
	const bool IsInizialize() const;

	virtual ~Component();
};