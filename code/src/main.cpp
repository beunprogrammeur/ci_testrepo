#include <iostream>
#include "player.h"
#include "ball.h"

void printBallStatus(Player& p1, Player& p2);

int main(int argc, char** argv)
{
	std::cout << "Hello World!" << std::endl;
	Ball b(20, 30);

	Player pa(std::string("player a"), &b);
	Player pb(std::string("player b"));

	printBallStatus(pa, pb);
	pa.KickBall(pb);
	printBallStatus(pa, pb);
	

	return 0;
}


void printBallStatus(Player& p1, Player& p2)
{
	std::cout << p1.name() << " has the ball: " << p1.HasBall() << std::endl;
	std::cout << p2.name() << " has the ball: " << p2.HasBall() << std::endl;
}
