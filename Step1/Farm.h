/**
 * \file Farm.h
 *
 * \author Geoffrey Witherington-Perkins
 *
 * Class that describes a Farm.
 *
 * This class holds a collection of animals that make
 * up the inventory of a farm.
 */

#pragma once

#include <vector>
#include "Cow.h"

/**
 * Class that decribes a farm.
 *
 * Holds a collection of animals that make up the farm
 * inventory.
 */
class CFarm
{
public:
	CFarm();
	virtual ~CFarm();

	/** Adds animal to inventory */
	void AddAnimal(CAnimal * animal);

	/** Shows animals in inventory */
	void DisplayInventory();

	/** Show professions of cows & bears in inventory */
	void DisplayProfessions();

private:
	/// A list with the inventory of all animals on the farm
	std::vector<CAnimal *> mInventory;
};

