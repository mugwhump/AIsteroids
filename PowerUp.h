#pragma once
#include "GameObject.h"
struct Position;

// THIS CLASS SUCKS ASS
class PowerUp : public GameObject {
public:

	enum Type : unsigned short {
		INVINCIBILITY,
		SCORE,
		REVIVE, //last, so we can exclude it more easily
		NumTypes,
		None
	};

	PowerUp(void);
	explicit PowerUp(const GameObject* obj); // Start with motion of given object
	PowerUp(float x, float y, float vx, float vy, float rot, float rad); // Calls base initialize
	~PowerUp(void);

	void init();

	void runFrom(const Position& p);
	void update();
	virtual void render();
	virtual void drawAt(const Position& p) const;

	void setTypeAndValue(Type type, int value);
	void setType(Type type);
	Type getType() const;
	void setValue(int value);
	int getValue() const;
	bool isDisappeared() { return lifeTime <= 0; }

private:
	Type myType;
	int myValue; //for different strengths
	int lifeTime;
};

