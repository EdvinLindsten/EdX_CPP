#include "stdafx.h"


SpaceCat::SpaceCat() : _name("Unknown")
{
	std::cout << "A space cat without a name is born!" << std::endl;
}

SpaceCat::SpaceCat(string name) : _name(name)
{
	cout << "A space cat named " << getName() << " is born!" << endl;
};

void SpaceCat::setName(string name)
{
	_name = name;
}

string SpaceCat::getName()
{
	return _name;
}

SpaceCat::~SpaceCat()
{
	cout << "The space cat " << getName() << " is dead." << endl;
}
