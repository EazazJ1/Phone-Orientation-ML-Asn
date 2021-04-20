//Eazaz Jakda
//
//PROG71020-W21
//Project/Lab 8-9
//
//Date: April 17, 2021

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

#include "NearestNeighbour.h"


int main()
{
	NNclassifier arrayTraining[200];
	
	string filename = "trainingData.txt";	

	int countTraining = arrayTraining->loadTraining(filename);
		

	//Testing Data

	NNclassifier arrayTesting[250];

	string filenameTesting = "testingData.txt";	

	int countTesting = arrayTesting->loadOther(filenameTesting);


	//Unknown Data

	NNclassifier arrayUnknown[250];

	string filenameUnknown = "unknownData.txt";

	int countUnknown = arrayUnknown->loadOther(filenameUnknown);


	
	//Tests

	cout << "Before checking what orientation:\n" << endl;
	
	//printData(arrayUnknown, countUnknown);

	for (int i = 0; i < countTesting; i++)
	{
		arrayTesting[i].printSingle();
	}


	for (int i = 0; i < countTesting; i++)
	{
		arrayTesting[i].nearestNeighbourSimple(arrayTraining, countTraining);
	}


	cout << "\n\n\n\n\After checking what orientation:\n" << endl;
	
	//printData(arrayUnknown, countUnknown);

	for (int i = 0; i < countTesting; i++)
	{
		arrayTesting[i].printSingle();
	}



	//Self Enter

	//double x;
	//double y;
	//double z;

	//NNclassifier temp;

	//cout << "Please enter the Value for the x coordinate: ";

	//cin >> x;

	//temp.setx(x);

	//cout << "Please enter the Value for the y coordinate: ";

	//cin >> y;

	//temp.sety(y);

	//cout << "Please enter the Value for the z coordinate: ";

	//cin >> z;

	//temp.setz(z);
	//
	//temp.nearestNeighbourSimple(arrayTraining, countTraining);

	//temp.printSingle();

	return 0;
}

