/**
 * \file Cow.cpp
 *
 * \author Geoffrey Witherington-Perkins
 *
 * Implementation of CCow
 */

#include "pch.h"
#include "Cow.h"
#include <iostream>

using namespace std;


/**
 * Constructor
 */
CCow::CCow()
{
}


/**
 * Destructor
 */
CCow::~CCow()
{
}

/**
 * Obtain information from the user about this cow.
 *
 * Asks the user for the information that describes a cow.
 */
void CCow::ObtainCowInformation()
{
	cout << endl;
	cout << "Input information about the cow" << endl;

	// Obtain the name. This is easy, since it's just a
	// string.
	cout << "Name: ";
	cin >> mName;

	// Obtain the type using a menu. We have a loop so
	// we can handle errors.
	bool valid = false;
	while (!valid)
	{
		cout << "1: Bull" << endl;
		cout << "2: Beef Cow" << endl;
		cout << "3: Milk Cow" << endl;
		cout << "Enter selection and return: ";
		int option;
		cin >> option;
		if (!cin)
		{
			// We have an error. Clear the input and try again
			cin.clear();
			cin.ignore();
			continue;
		}

		switch (option)
		{
		case 1:
			mType = Bull;
			valid = true;
			break;

		case 2:
			mType = BeefCow;
			valid = true;
			break;

		case 3:
			mType = MilkCow;
			valid = true;
			break;
		}

	}

	if (mType == MilkCow)
	{
		valid = false;
		while (!valid)
		{
			cout << "Enter milk production in gallons per day: ";

			cin.clear();
			cin.ignore();
			cin >> mMilkProduction;
			if (cin)
			{
				valid = true;
			}
		}
	}
	else
	{
		// If not a milk cow, we have no milk production
		mMilkProduction = 0;
	}
}

/**
 * Display information about this cow.
 */
void CCow::DisplayAnimal()
{
	cout << mName << ": ";
	switch (mType)
	{
	case Bull:
		cout << "Bull" << endl;
		break;

	case BeefCow:
		cout << "Beef Cow" << endl;
		break;

	case MilkCow:
		cout << "Milk Cow/" << mMilkProduction << " GPD" << endl;
		break;
	}
}

/**
 * Display the profession of this cow
 */
void CCow::DisplayProfession()
{
	cout << mName << " the Cow is a ";
	switch (mType)
	{
	case Bull:
		cout << "China Shop Destroyer" << endl;
		break;

	case BeefCow:
		cout << "Hamburger on the Hoof" << endl;
		break;

	case MilkCow:
		cout << "Milk Factory" << endl;
		break;
	}
}
