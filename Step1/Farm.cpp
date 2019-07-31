/**
 * \file Farm.cpp
 *
 * \author Geoffrey Witherington-Perkins
 */

#include "pch.h"
#include "Farm.h"


/**
 * Constructor
 */
CFarm::CFarm()
{
}


/**
 * Destructor
 */
CFarm::~CFarm()
{
	// Iterate over all of the animals, destroying 
	// each one.
	for (auto animal : mInventory)
	{
		delete animal;
	}

	// And clear the list
	mInventory.clear();
}

/** Add an animal to the farm inventory.
 *
 * \param animal A cow to add to the inventory
 */
void CFarm::AddAnimal(CAnimal * animal)
{
	mInventory.push_back(animal);
}

/**
 * Display the farm inventory.
 */
void CFarm::DisplayInventory()
{
	for (auto animal : mInventory) {
		animal->DisplayAnimal();
	}
}

/**
 * Display professions of all the animals in the inventory
 */
void CFarm::DisplayProfessions()
{
	for (auto animal : mInventory) {
		animal->DisplayProfession();
	}
}