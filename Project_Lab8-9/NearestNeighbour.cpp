
#include "NearestNeighbour.h"

NNclassifier::NNclassifier()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->orientation = 0;
	this->distance = 0;
}

NNclassifier::NNclassifier(double x, double y, double z, int orientation, int distance)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->orientation = orientation;
	this->distance = distance;
}

double NNclassifier::getx()
{
	return this->x;
}

double NNclassifier::gety()
{
	return this->y;
}

double NNclassifier::getz()
{
	return this->z;
}

double NNclassifier::getDistance()
{
	return this->distance;
}

int NNclassifier::getOrientation()
{
	return this->orientation;
}

void NNclassifier::setx(double x)
{
	this->x = x;
}

void NNclassifier::sety(double y)
{
	this->y = y;
}

void NNclassifier::setz(double z)
{
	this->z = z;
}

void NNclassifier::setDistance(double distance)
{
	this->distance = distance;
}

void NNclassifier::setOrientation(int orientation)
{
	this->orientation = orientation;
}

void NNclassifier::printSingle()
{
	cout << this->getx() << ", " << this->gety() << ", " << this->getz() << ", " << this->getOrientation() << endl;
}

bool comparison(NNclassifier a, NNclassifier b)
{
	return (a.getDistance() < b.getDistance());
}

//void nearestNeighbour(Points array[], Points* p, int k, int count)
//{
//
//	for (int i = 0; i < count; i++)
//	{
//		double xDistance = pow((array[i].getx() - p->getx()), 2);
//
//		double yDistance = pow((array[i].gety() - p->gety()), 2);
//
//		double zDistance = pow((array[i].getz() - p->getz()), 2);
//
//		double totalDistance = (xDistance + yDistance + zDistance);
//
//		double distanceCalc = sqrt(totalDistance);
//
//		array[i].setDistance(distanceCalc);
//	}
//
//	sort(array, array + count, comparison);
//
//
//	int count1 = 0;
//	int count2 = 0;
//	int count3 = 0;
//	int count4 = 0;
//	int count5 = 0;
//	int count6 = 0;
//
//	for (int i = 0; i < k; i++)
//	{
//		if (array[i].getOrientation() == 1)
//		{
//			count1++;
//		}
//		else if (array[i].getOrientation() == 2)
//		{
//			count2++;
//		}
//		else if (array[i].getOrientation() == 3)
//		{
//			count3++;
//		}
//		else if (array[i].getOrientation() == 4)
//		{
//			count4++;
//		}
//		else if (array[i].getOrientation() == 5)
//		{
//			count5++;
//		}
//		else
//		{
//			count6++;
//		}
//	}
//
//	int countArray[NUM_CHOICES] = { count1, count2, count3, count4, count5, count6 };
//
//	sort(countArray, countArray + NUM_CHOICES);
//
//	if (countArray[5] == count1)
//	{
//		p->setOrientation(1);
//	}
//	else if (countArray[5] == count2)
//	{
//		p->setOrientation(2);
//	}
//	else if (countArray[5] == count3)
//	{
//		p->setOrientation(3);
//	}
//	else if (countArray[5] == count4)
//	{
//		p->setOrientation(4);
//	}
//	else if (countArray[5] == count5)
//	{
//		p->setOrientation(5);
//	}
//	else
//	{
//		p->setOrientation(6);
//	}
//
//
//}

//int loadTraining(string filename, NNclassifier array[])
//{
//	ifstream fin;
//	int countTraining = 0;
//	fin.open(filename);
//	if (fin.is_open())
//	{
//		int i = 0;
//
//		while (!fin.eof())
//		{
//			string line;
//			getline(fin, line);
//			string x;
//			istringstream isLine(line);
//			getline(isLine, x, ',');
//
//			string y;
//
//			getline(isLine, y, ',');
//
//			string z;
//
//			getline(isLine, z, ',');
//
//			string O;
//
//			getline(isLine, O, ',');
//
//
//			/*stringstream num(x);
//			int xNum = 0;
//			num >> xNum;*/
//
//			double xNum = stof(x);
//			double yNum = stof(y);
//			double zNum = stof(z);
//			int ONum = stoi(O);
//
//			array[i].setx(xNum);
//			array[i].sety(yNum);
//			array[i].setz(zNum);
//			array[i].setOrientation(ONum);
//
//			i++;
//			countTraining++;
//		}
//
//
//		fin.close();
//
//		return countTraining;
//	}
//	else
//	{
//		cout << "Cannot open " << filename << endl;
//	}
//}

//int loadOther(string filenameTesting, NNclassifier arrayTesting[])
//{
//	ifstream fin;
//
//
//	int countTesting = 0;
//	fin.open(filenameTesting);
//	if (fin.is_open())
//	{
//		int i = 0;
//
//		while (!fin.eof())
//		{
//			string line;
//			getline(fin, line);
//			string x;
//			istringstream isLine(line);
//			getline(isLine, x, ',');
//
//			string y;
//
//			getline(isLine, y, ',');
//
//			string z;
//
//			getline(isLine, z, ',');
//
//			string O;
//
//			getline(isLine, O, ',');
//
//
//			/*stringstream num(x);
//			int xNum = 0;
//			num >> xNum;*/
//
//			double xNum = stof(x);
//			double yNum = stof(y);
//			double zNum = stof(z);
//			//int ONum = stoi(O);
//
//			arrayTesting[i].setx(xNum);
//			arrayTesting[i].sety(yNum);
//			arrayTesting[i].setz(zNum);
//			arrayTesting[i].setOrientation(-1);
//
//			i++;
//			countTesting++;
//		}
//		fin.close();
//
//		return countTesting;
//	}
//	else
//	{
//		cout << "Cannot open " << filenameTesting << endl;
//	}
//}

void printData(NNclassifier array[], int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << array[i].getx() << ", " << array[i].gety() << ", " << array[i].getz() << ", " << array[i].getOrientation() << endl;
	}
}


void NNclassifier::nearestNeighbourSimple(NNclassifier array[], int count)
{

	for (int i = 0; i < count; i++)
	{
		double xDistance = pow((array[i].getx() - this->getx()), 2);

		double yDistance = pow((array[i].gety() - this->gety()), 2);

		double zDistance = pow((array[i].getz() - this->getz()), 2);

		double totalDistance = (xDistance + yDistance + zDistance);

		double distanceCalc = sqrt(totalDistance);

		array[i].setDistance(distanceCalc);
	}

	sort(array, array + count, comparison);


	if (array[0].getOrientation() == 1)
	{
		this->setOrientation(1);
	}
	else if (array[0].getOrientation() == 2)
	{
		this->setOrientation(2);
	}
	else if (array[0].getOrientation() == 3)
	{
		this->setOrientation(3);
	}
	else if (array[0].getOrientation() == 4)
	{
		this->setOrientation(4);
	}
	else if (array[0].getOrientation() == 5)
	{
		this->setOrientation(5);
	}
	else
	{
		this->setOrientation(6);
	}


}


int NNclassifier::loadTraining(string filename)
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

			this[i].setx(xNum);
			this[i].sety(yNum);
			this[i].setz(zNum);
			this[i].setOrientation(ONum);

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


int NNclassifier::loadOther(string filenameTesting)
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

			this[i].setx(xNum);
			this[i].sety(yNum);
			this[i].setz(zNum);
			this[i].setOrientation(-1);

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