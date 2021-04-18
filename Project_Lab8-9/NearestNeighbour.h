#pragma once

#include <iostream>
#include <math.h>
#include <algorithm>
#include <fstream>
#include <sstream>

#define NUM_CHOICES 6

using namespace std;


class Points
{
	double x;
	double y;
	double z;
	int orientation;
	double distance;

public:
	Points();	

	Points(double x, double y, double z, int orientation, int distance);

	double getx();

	double gety();

	double getz();

	double getDistance();

	int getOrientation();

	void setx(double x);

	void sety(double y);

	void setz(double z);

	void setDistance(double distance);

	void setOrientation(int orientation);

	void printSingle();

	void nearestNeighbourSimple(Points array[], int k, int count);

	//void printData(int count);

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

bool comparison(Points a, Points b);

void nearestNeighbour(Points array[], Points* p, int k, int count);

int loadTraining(string filename, Points array[]);

int loadOther(string filenameTesting, Points arrayTesting[]);

void printData(Points array[], int count);