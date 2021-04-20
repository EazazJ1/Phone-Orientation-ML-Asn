#pragma once

#include <iostream>

///@file AnotherClassifier.h
/// @brief This is the header file for a AnotherClassifier Class.
/// 
/// This file has the derived class called AnotherClassifier. 
/// @author Eazaz Jakda
/// @author Anthony Sasso
/// @date April 19, 2021

#include "NearestNeighbour.h"

using namespace std;

/// @brief This is the AnotherClassifier class.
/// 
/// This is the derived class which has inherited from the NNclassifier.
/// @author Eazaz Jakda
/// @author Anthony Sasso
/// @date April 19, 2021

class AnotherClassifier :public NNclassifier
{


public:

	/// @brief This is the findNearestNeighbour function.
	/// 
	/// This function prints a line to the screen.
	/// @param This function does not have any input.
	/// @return This function does not have any output.
	/// @author Eazaz Jakda
	/// @author Anthony Sasso
	/// @date April 19, 2021

	void findNearestNeighbour();

	/// @brief This is the loadTraining function.
	/// 
	/// This function prints a line to the screen.
	/// @param This function does not have any input.
	/// @return This function outputs an int.
	/// @author Eazaz Jakda
	/// @author Anthony Sasso
	/// @date April 19, 2021

	int loadTraining();

	/// @brief This is the loadOther function.
	/// 
	/// This function prints a line to the screen.
	/// @param This function does not have any input.
	/// @return This function outputs an int.
	/// @author Eazaz Jakda
	/// @author Anthony Sasso
	/// @date April 19, 2021

	int loadOther();
};