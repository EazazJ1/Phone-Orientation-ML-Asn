
#include "NearestNeighbour.h"

Points::Points()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->orientation = 0;
}

Points::Points(int x, int y, int z, int orientation)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->orientation = orientation;
}

int Points:: getx()
{
	return this->x;
}

int Points:: gety()
{
	return this->y;
}

int Points:: getz()
{
	return this->z;
}

int Points:: getOrientation()
{
	return this->orientation;
}

void Points::setx(int x)
{
	this->x = x;
}

void Points::sety(int y)
{
	this->y = y;
}

void Points::setz(int z)
{
	this->z = z;
}

void Points::setOrientation(int orientation)
{
	this->orientation = orientation;
}
