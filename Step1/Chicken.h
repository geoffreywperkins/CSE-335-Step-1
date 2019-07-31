/**
 * \file Chicken.h
 *
 * \author Geoffrey Witherington-Perkins
 *
 * Declaration of the CChicken class.
 */

#pragma once

#include <string>
#include "Animal.h"

 /** Class that describes a chicken.
 */
class CChicken : public CAnimal
{
public:
	CChicken();
	virtual ~CChicken();

	/** Get the chicken ID */
	void ObtainChickenInformation();

	/** Show the chicken's ID */
	void DisplayAnimal();

private:
	/// The chicken's ID
	std::string mId;
};