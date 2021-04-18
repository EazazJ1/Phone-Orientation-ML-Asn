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

int loadTraining(string filename, Points array[])
{
	ifstream fin;
	int countTraining = 0;
	fin.open(filename);
	if (fin.is_open())
	{
		int i = 0;

		while (!fin.eof())
		{
			string line;
			getline(fin, line);
			string x;
			istringstream isLine(line);
			getline(isLine, x, ',');

			string y;

			getline(isLine, y, ',');

			string z;

			getline(isLine, z, ',');

			string O;

			getline(isLine, O, ',');


			/*stringstream num(x);
			int xNum = 0;
			num >> xNum;*/

			double xNum = stof(x);
			double yNum = stof(y);
			double zNum = stof(z);
			int ONum = stoi(O);

			array[i].setx(xNum);
			array[i].sety(yNum);
			array[i].setz(zNum);
			array[i].setOrientation(ONum);

			i++;
			countTraining++;
		}


		fin.close();

		return countTraining;
	}
	else
	{
		cout << "Cannot open " << filename << endl;
	}
}

int loadOther(string filenameTesting, Points arrayTesting[])
{
	ifstream fin;


	int countTesting = 0;
	fin.open(filenameTesting);
	if (fin.is_open())
	{
		int i = 0;

		while (!fin.eof())
		{
			string line;
			getline(fin, line);
			string x;
			istringstream isLine(line);
			getline(isLine, x, ',');

			string y;

			getline(isLine, y, ',');

			string z;

			getline(isLine, z, ',');

			string O;

			getline(isLine, O, ',');


			/*stringstream num(x);
			int xNum = 0;
			num >> xNum;*/

			double xNum = stof(x);
			double yNum = stof(y);
			double zNum = stof(z);
			//int ONum = stoi(O);

			arrayTesting[i].setx(xNum);
			arrayTesting[i].sety(yNum);
			arrayTesting[i].setz(zNum);
			arrayTesting[i].setOrientation(-1);

			i++;
			countTesting++;
		}
		fin.close();

		return countTesting;
	}
	else
	{
		cout << "Cannot open " << filenameTesting << endl;
	}
}

int main()
{
	Points array[200];
	
	string filename = "trainingData.txt";
	

	int countTraining = loadTraining(filename, array);
	//ifstream fin;
	//int countTraining = 0;
	//fin.open(filename);
	//if (fin.is_open())
	//{
	//	int i = 0;
	//	
	//	while (!fin.eof())
	//	{
	//		string line;
	//		getline(fin, line);
	//		string x;
	//		istringstream isLine(line);
	//		getline(isLine, x, ',');

	//		string y;

	//		getline(isLine, y, ',');

	//		string z;

	//		getline(isLine, z, ',');

	//		string O;

	//		getline(isLine, O, ',');

	//		
	//		/*stringstream num(x);
	//		int xNum = 0;
	//		num >> xNum;*/

	//		double xNum = stof(x);
	//		double yNum = stof(y);
	//		double zNum = stof(z);
	//		int ONum = stoi(O);

	//		array[i].setx(xNum);
	//		array[i].sety(yNum);
	//		array[i].setz(zNum);
	//		array[i].setOrientation(ONum);

	//		i++;
	//		countTraining++;
	//	}

	//	fin.close();
	//	
	//}
	//else
	//{
	//	cout << "Cannot open " << filename << endl;
	//}

	//for (int i = 0; i < count; i++)
	//{
	//	cout << array[i].getx() << ", " << array[i].gety() << ", " << array[i].getz() << ", " << array[i].getOrientation() << endl;
	//}

	//cout << "\n\n\n\n\n\n\n\n\n\n";



	//Testing Data

	Points arrayTesting[250];

	string filenameTesting = "testingData.txt";
	//ifstream fin;

	int countTesting = loadOther(filenameTesting, arrayTesting);


	//int countTesting = 0;
	//fin.open(filenameTesting);
	//if (fin.is_open())
	//{
	//	int i = 0;

	//	while (!fin.eof())
	//	{
	//		string line;
	//		getline(fin, line);
	//		string x;
	//		istringstream isLine(line);
	//		getline(isLine, x, ',');

	//		string y;

	//		getline(isLine, y, ',');

	//		string z;

	//		getline(isLine, z, ',');

	//		string O;

	//		getline(isLine, O, ',');


	//		/*stringstream num(x);
	//		int xNum = 0;
	//		num >> xNum;*/

	//		double xNum = stof(x);
	//		double yNum = stof(y);
	//		double zNum = stof(z);
	//		//int ONum = stoi(O);

	//		arrayTesting[i].setx(xNum);
	//		arrayTesting[i].sety(yNum);
	//		arrayTesting[i].setz(zNum);
	//		arrayTesting[i].setOrientation(-1);

	//		i++;
	//		countTesting++;
	//	}
	//	fin.close();
	//}
	//else
	//{
	//	cout << "Cannot open " << filenameTesting << endl;
	//}

	/*for (int i = 0; i < count; i++)
	{
		cout << arrayTesting[i].getx() << ", " << arrayTesting[i].gety() << ", " << arrayTesting[i].getz() << ", " << arrayTesting[i].getOrientation() << endl;
	}*/


	//cout << "\n\n\n\n\n\n\n\n\n\n";

	//Unknown Data

	Points arrayUnknown[250];

	string filenameUnknown = "unknownData.txt";

	int countUnknown = loadOther(filenameUnknown, arrayUnknown);

	//ifstream fin;
	//
	//int countUnknown = 0;
	//fin.open(filenameUnknown);
	//if (fin.is_open())
	//{
	//	int i = 0;

	//	while (!fin.eof())
	//	{
	//		string line;
	//		getline(fin, line);
	//		string x;
	//		istringstream isLine(line);
	//		getline(isLine, x, ',');

	//		string y;

	//		getline(isLine, y, ',');

	//		string z;

	//		getline(isLine, z, ',');

	//		string O;

	//		getline(isLine, O, ',');


	//		/*stringstream num(x);
	//		int xNum = 0;
	//		num >> xNum;*/

	//		double xNum = stof(x);
	//		double yNum = stof(y);
	//		double zNum = stof(z);
	//		//int ONum = stoi(O);

	//		arrayUnknown[i].setx(xNum);
	//		arrayUnknown[i].sety(yNum);
	//		arrayUnknown[i].setz(zNum);
	//		arrayUnknown[i].setOrientation(-1);

	//		i++;
	//		countUnknown++;
	//	}

	//}
	//else
	//{
	//	cout << "Cannot open " << filenameUnknown << endl;
	//}

	/*for (int i = 0; i < count; i++)
	{
		cout << arrayUnknown[i].getx() << ", " << arrayUnknown[i].gety() << ", " << arrayUnknown[i].getz() << ", " << arrayUnknown[i].getOrientation() << endl;
	}*/
	

	cout << "Before checking what orientation:" << endl;
	for (int i = 0; i < countUnknown; i++)
	{
		cout << arrayUnknown[i].getx() << ", " << arrayUnknown[i].gety() << ", " << arrayUnknown[i].getz() << ", " << arrayUnknown[i].getOrientation() << endl;
	}


	for (int i = 0; i < countUnknown; i++)
	{
		nearestNeighbour(array, &arrayUnknown[i], 7, countTraining);
	}


	cout << "\n\n\n\n\After checking what orientation:\n" << endl;

	for (int i = 0; i < countUnknown; i++)
	{
		cout << arrayUnknown[i].getx() << ", " << arrayUnknown[i].gety() << ", " << arrayUnknown[i].getz() << ", " << arrayUnknown[i].getOrientation() << endl;
	}

	
	//nearestNeighbour(array, arrayTesting[7], 7);

	return 0;
}

