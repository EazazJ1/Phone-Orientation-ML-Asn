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
	Points array[200];
	
	string filename = "trainingData.txt";	

	int countTraining = loadTraining(filename, array);
		

	//Testing Data

	Points arrayTesting[250];

	string filenameTesting = "testingData.txt";	

	int countTesting = loadOther(filenameTesting, arrayTesting);


	//Unknown Data

	Points arrayUnknown[250];

	string filenameUnknown = "unknownData.txt";

	int countUnknown = loadOther(filenameUnknown, arrayUnknown);


	
	//Tests

	cout << "Before checking what orientation:\n" << endl;
	
	printData(arrayUnknown, countUnknown);


	for (int i = 0; i < countUnknown; i++)
	{
		arrayUnknown[i].nearestNeighbourSimple(array, 7, countTraining);
	}


	cout << "\n\n\n\n\After checking what orientation:\n" << endl;
	
	printData(arrayUnknown, countUnknown);



	//Self Enter

	/*double x;
	double y;
	double z;

	Points temp;

	cout << "Please enter the Value for the x coordinate: ";

	cin >> x;

	temp.setx(x);

	cout << "Please enter the Value for the y coordinate: ";

	cin >> y;

	temp.sety(y);

	cout << "Please enter the Value for the z coordinate: ";

	cin >> z;

	temp.setz(z);
	
	nearestNeighbour(array, &temp, 7, countTraining);

	temp.printSingle();*/

	return 0;
}

