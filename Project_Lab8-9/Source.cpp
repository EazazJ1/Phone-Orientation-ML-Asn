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
	Points array[250];
	
	string filename = "trainingdata.txt";

	ifstream fin;
	int count = 0;
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

			float xNum = stof(x);
			double yNum = stof(y);
			double zNum = stof(z);
			int ONum = stoi(O);

			array[i].setx(xNum);
			array[i].sety(yNum);
			array[i].setz(zNum);
			array[i].setOrientation(ONum);

			i++;
			count++;
		}
		
	}
	else
	{
		cout << "Cannot open " << filename << endl;
	}

	for (int i = 0; i < count; i++)
	{
		cout << array[i].getx() << ", " << array[i].gety() << ", " << array[i].getz() << ", " << array[i].getOrientation() << endl;
	}

	return 0;
}