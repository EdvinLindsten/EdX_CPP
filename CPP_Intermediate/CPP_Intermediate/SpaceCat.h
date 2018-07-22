#pragma once
using namespace std;

class SpaceCat
{
private:
	string _name{};

public:
	SpaceCat();
	SpaceCat(string);

	void setName(string);
	string getName();

	~SpaceCat();
};