#pragma once
#include "Enemy.h"
#include "../Entities/GameActor.h"
#include "../GameAITypes.h"

class PrototypeNewEnemy :public Enemy
{


protected:
	string prototype_name_;
	float prototype_field_;
	

public:
	//constructor Enemy
	PrototypeNewEnemy() {};



	PrototypeNewEnemy(std::shared_ptr<SDL_Texture> texture, SDL_Renderer* renderer);
	virtual PrototypeNewEnemy* clone() = 0;
	void moveTo(const int x, const int y);
	void moveToCell(std::pair<int, int> pathToCell);
	bool isMovingToCell() const;
	bool canAttack() const;
	int getAttackRadius() const;
	void setAIType(AIType type);
	virtual void update(const unsigned int delta) override;
	void generateNewPath();

};

