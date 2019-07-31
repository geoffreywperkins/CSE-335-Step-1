/**
 * \file Cow.h
 *
 * \author Geoffrey Witherington-Perkins
 *
 * Class that describes a cow
 */

#pragma once
#include <string>
#include "Animal.h"

/**
 * Describes a single cow
 */
class CCow : public CAnimal
{
public:
	CCow();
	virtual ~CCow();

	/// The types of cow we can have on our farm
	enum Type { Bull, BeefCow, MilkCow };

	/** Obtain name and type of cow */
	void ObtainCowInformation();

	/** Display the name and type of cow */
	void DisplayAnimal();

	/** Show the profession of the cow */
	void DisplayProfession();

private:
	/// The cow's name
	std::string mName;

	/// The type of code: Bull, BeefCow, or MilkCow
	Type mType = MilkCow;

	/// The milk production for a cow in gallons per day
	double mMilkProduction = 0;
};

