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
	

	//for (int i = 0; i < count; i++)
	//{
	//	cout << array[i].getx() << ", " << array[i].gety() << ", " << array[i].getz() << ", " << array[i].getOrientation() << endl;
	//}

	//cout << "\n\n\n\n\n\n\n\n\n\n";



	//Testing Data

	Points arrayTesting[250];

	string filenameTesting = "testingData.txt";	

	int countTesting = loadOther(filenameTesting, arrayTesting);


	/*for (int i = 0; i < count; i++)
	{
		cout << arrayTesting[i].getx() << ", " << arrayTesting[i].gety() << ", " << arrayTesting[i].getz() << ", " << arrayTesting[i].getOrientation() << endl;
	}*/


	//cout << "\n\n\n\n\n\n\n\n\n\n";

	//Unknown Data

	Points arrayUnknown[250];

	string filenameUnknown = "unknownData.txt";

	int countUnknown = loadOther(filenameUnknown, arrayUnknown);


	/*for (int i = 0; i < count; i++)
	{
		cout << arrayUnknown[i].getx() << ", " << arrayUnknown[i].gety() << ", " << arrayUnknown[i].getz() << ", " << arrayUnknown[i].getOrientation() << endl;
	}*/
	

	cout << "Before checking what orientation:" << endl;
	/*for (int i = 0; i < countUnknown; i++)
	{
		cout << arrayUnknown[i].getx() << ", " << arrayUnknown[i].gety() << ", " << arrayUnknown[i].getz() << ", " << arrayUnknown[i].getOrientation() << endl;
	}*/
	printData(arrayUnknown, countUnknown);


	for (int i = 0; i < countUnknown; i++)
	{
		nearestNeighbour(array, &arrayUnknown[i], 7, countTraining);
	}


	cout << "\n\n\n\n\After checking what orientation:\n" << endl;
	
	printData(arrayUnknown, countUnknown);

	/*for (int i = 0; i < countUnknown; i++)
	{
		cout << arrayUnknown[i].getx() << ", " << arrayUnknown[i].gety() << ", " << arrayUnknown[i].getz() << ", " << arrayUnknown[i].getOrientation() << endl;
	}*/

	
	//nearestNeighbour(array, arrayTesting[7], 7);

	return 0;
}

