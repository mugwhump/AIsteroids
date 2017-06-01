#pragma once
#include "GameObject.h"


struct Position;

class Asteroid : public GameObject {

public:
	Asteroid(void);
	explicit Asteroid(GameObject* obj); // Start with motion of given object
	Asteroid(float x, float y, float vx, float vy, float rot, float rad); // Calls base initialize
	virtual ~Asteroid(void);

	void resetTo(const GameObject& obj); // Resets to match Obj.

	void update();
	virtual void render() const;
	virtual void drawAt(const Position& p) const;

private:
	
};