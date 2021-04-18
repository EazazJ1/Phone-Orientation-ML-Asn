#pragma once

#include <iostream>

using namespace std;


class Points
{
	int x;
	int y;
	int z;
	int orientation;

public:
	Points();	

	Points(int x, int y, int z, int orientation);	

	int getx();	

	int gety();	

	int getz();	

	int getOrientation();	

	void setx(int x);

	void sety(int y);

	void setz(int z);

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