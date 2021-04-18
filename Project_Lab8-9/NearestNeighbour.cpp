
#include "NearestNeighbour.h"

Points::Points()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->orientation = 0;
}

Points::Points(double x, double y, double z, int orientation)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->orientation = orientation;
}

double Points:: getx()
{
	return this->x;
}

double Points:: gety()
{
	return this->y;
}

double Points:: getz()
{
	return this->z;
}

double Points::getDistance()
{
	return this->distance;
}

int Points::getOrientation()
{
	return this->orientation;
}

void Points::setx(double x)
{
	this->x = x;
}

void Points::sety(double y)
{
	this->y = y;
}

void Points::setz(double z)
{
	this->z = z;
}

void Points::setDistance(double distance)
{
	this->distance = distance;
}

void Points::setOrientation(int orientation)
{
	this->orientation = orientation;
}

bool comparison(Points a, Points b)
{
	return (a.getDistance() < b.getDistance());	
}

void nearestNeighbour(Points array[], Points* p, int k, int count)
{

	for (int i = 0; i < count; i++)
	{		
		double xDistance = pow((array[i].getx() - p->getx()), 2);

		double yDistance = pow((array[i].gety() - p->gety()), 2);

		double zDistance = pow((array[i].getz() - p->getz()), 2);

		double totalDistance = (xDistance + yDistance + zDistance);

		double distanceCalc = sqrt(totalDistance);

		array[i].setDistance(distanceCalc);
	}

	sort(array, array + count, comparison);

	/*for (int i = 0; i < 175; i++)
	{
		cout << array[i].getx() << ", " << array[i].gety() << ", " << array[i].getz() << ", " << array[i].getOrientation() << endl;
	}*/
	
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	int count5 = 0;
	int count6 = 0;

	for (int i = 0; i < k; i++)
	{
		if (array[i].getOrientation() == 1)
		{
			count1++;
		}
		else if (array[i].getOrientation() == 2)
		{
			count2++;
		}
		else if (array[i].getOrientation() == 3)
		{
			count3++;
		}
		else if (array[i].getOrientation() == 4)
		{
			count4++;
		}
		else if (array[i].getOrientation() == 5)
		{
			count5++;
		}
		else
		{
			count6++;
		}
	}

	int countArray[6] = { count1, count2, count3, count4, count5, count6 };
	
	sort(countArray, countArray + 6);

	if (countArray[5] == count1)
	{
		p->setOrientation(1);
	}
	else if (countArray[5] == count2)
	{
		p->setOrientation(2);
	}
	else if (countArray[5] == count3)
	{
		p->setOrientation(3);
	}
	else if (countArray[5] == count4)
	{
		p->setOrientation(4);
	}
	else if (countArray[5] == count5)
	{
		p->setOrientation(5);
	}
	else
	{
		p->setOrientation(6);
	}


}