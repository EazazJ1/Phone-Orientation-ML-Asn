#pragma once

#include <iostream>
#include <math.h>
#include <algorithm>
#include <fstream>
#include <sstream>

#define NUM_CHOICES 6

using namespace std;


class NNclassifier
{
	double x;
	double y;
	double z;
	int orientation;
	double distance;

public:
	NNclassifier();	

	NNclassifier(double x, double y, double z, int orientation, int distance);

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

	void nearestNeighbourSimple(NNclassifier array[], int count);

	int loadTraining(string filename);

	int loadOther(string filenameTesting);

	//void printData(int count);

};



bool comparison(NNclassifier a, NNclassifier b);

//void nearestNeighbour(Points array[], Points* p, int k, int count);

//int loadTraining(string filename, NNclassifier array[]);

//int loadOther(string filenameTesting, NNclassifier arrayTesting[]);

void printData(NNclassifier array[], int count);		//dont really need this