#pragma once

#include <iostream>

using namespace std;


class Points
{
	float x;
	float y;
	float z;
	int orientation;

public:
	Points();	

	Points(float x, float y, float z, int orientation);

	float getx();

	float gety();

	float getz();

	int getOrientation();

	void setx(float x);

	void sety(float y);

	void setz(float z);

	void setOrientation(int orientation);

	//friend ifstream& operator >>(ifstream& fin, Points p);
};

//ifstream& operator >>(ifstream& fin, Points p)
//{
//	fin >> p.x;
//	fin >> p.y;
//	fin >> p.z;
//	fin >> p.orientation;
//
//	return fin;
//}