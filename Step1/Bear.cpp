/**
 * \file Bear.cpp
 *
 * \author Geoffrey Witherington-Perkins
 *
 * Implementation of CBear
 */

#include "pch.h"
#include <iostream>
#include "Bear.h"

using namespace std;


/**
 * Constructor
 */
CBear::CBear()
{
}


/**
 * Destructor
 */
CBear::~CBear()
{
}

/**
 * Obtain the name and profession of this bear
 */
void CBear::ObtainBearInformation() 
{
	cout << endl;
	cout << "Input information about the bear" << endl;

	// Obtain the Name and Profession
	cout << "Name: ";
	cin >> mName;

	cout << "Profession: ";
	cin >> mProfession;
}

/**
 * Display the information about this bear
 */
void CBear::DisplayAnimal()
{
	cout << "Bear: " << mName << endl;
	cout << "Profession: " << mProfession << endl;
}

/**
 * Display the profession of this bear
 */
void CBear::DisplayProfession()
{
	cout << mName << " the Bear is a " << mProfession << endl;
}