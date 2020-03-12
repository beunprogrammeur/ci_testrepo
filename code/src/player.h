#ifndef PLAYER_H
#define PLAYER_H
#include "ball.h"
#include <string>

class Player
{
public:
	Player(std::string name, Ball* b = nullptr);
	bool KickBall(Player& other);
	bool HasBall() const { return _ball != nullptr; }
	const std::string& name() const { return _name; }
private:
	std::string _name;
	Ball* _ball;
};


#endif
