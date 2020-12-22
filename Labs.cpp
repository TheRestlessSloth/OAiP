#include "planet.h"

int main()
{
	//planet* planet_n		=	new	planet("name",		mass,		radius,		orb_radius,		nos)
	planet* planet_one = new planet("Mercury", 0.33302, 2439, 57909227, 0);
	planet* planet_two = new planet("Venus", 4.8675, 6051, 108208930, 0);
	planet* planet_three = new planet();
	planet* planet_four = new planet("Mars", 0.64171, 3389, 224397, 2);
	planet* planet_five = new planet("Jupiter", 189.86, 69911, 778547200, 79);
	planet* planet_six = new planet("Saturn", 56.846, 58232, 1429394069, 82);
	planet* planet_seven = new planet("Uranus", 0, 0, 0, 27);
	planet* planet_eight = new planet("Neptune", 10.243, 24622, 0, 14);

	planet_one->Print();
	planet_two->Print();
	planet_three->Print();
	planet_four->Print();
	planet_five->Print();
	planet_six->Print();
	planet_seven->Print();
	planet_eight->Print();

	delete planet_one;
	delete planet_two;
	delete planet_three;
	delete planet_four;
	delete planet_five;
	delete planet_six;
	delete planet_seven;
	delete planet_eight;
}