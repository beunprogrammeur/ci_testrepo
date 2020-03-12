#include "player.h"
#include "ball.h"
#include <string>
Player::Player(std::string name, Ball* ball)
	: _name(name), _ball(ball)
{
}

bool Player::KickBall(Player& other)
{
	if(_ball == nullptr)
	{
		return false;
	}

	other._ball = _ball;
	_ball = nullptr;
	return true;
}
