/**
 * \file Bear.h
 *
 * \author Geoffrey Witherington-Perkins
 *
 * Declaration of the CBear class.
 */

#pragma once

#include <string>
#include "Animal.h"

 /** Class that describes a bear.
 */
class CBear : public CAnimal
{
public:
	CBear();
	virtual ~CBear();

	/** Get the name and profession of the bear */
	void ObtainBearInformation();

	/** Show the information about the bear */
	void DisplayAnimal();

	/** Show the bear's profession */
	void DisplayProfession();

private:
	/// The bear's name
	std::string mName;

	/// The bear's profession
	std::string mProfession;
};

