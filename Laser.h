#pragma once
#include "GameObject.h"
#include <string>

struct Position;

class Laser : public GameObject {
public:
	Laser(void);
	explicit Laser( GameObject* obj);
	Laser(float x, float y, float vx, float vy, float rot, float rad); // Calls base initialize
	virtual ~Laser(void);

	void update();
//	virtual void render(); // add once this render is actually different
	virtual void drawAt(const Position& p) const;

	bool checkIfDeadAndDecrementTimer(); // Decreases lifetime, returns true if time's up

	static std::string attributeString(); // Gameobject attributes then "@attribute lifetime numeric\n"
	virtual std::string dataString() const; // Outputs Gameobject string then ", lifetime"

private:
	void init();

	int lifetime;
};

