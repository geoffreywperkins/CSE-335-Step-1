/**
 * \file Animal.h
 *
 * \author Geoffrey Witherington-Perkins
 *
 * Declaration of the animal class
 * Declares two virtual methods to be overwritten by subclasses
 */

#pragma once

 /**
  * Class that describes a single animal
  */
class CAnimal
{
public:
	CAnimal();
	virtual ~CAnimal();

	/** Display an animal. */
	virtual void DisplayAnimal() {}

	/** Display an animal's profession. */
	virtual void DisplayProfession() {}
};

