/*
************************************************************
Author: Sherna Liew
FarmAnimal.h file

FarmAnimal is one of the sub-class of UniqueMonster
according to the Starbound game.

Short description about Farm Animals in Starbound:
Farm Animals are a type of unique monster hatched from eggs purchased at Terramart.
They allow players to harvest monster drop materials without killing any creatures.
Each egg type hatches into a different animal, each with unique resources for harvest.
For more info, go to: http://starbounder.org/Monster

FarmAnimal inherits the following 6 properties from UniqueMonster:
-name			-> name of the monster
-baseHealth		-> the base health of the monster
-capturable		-> can the monster be captured
-noOfLegs		-> the number of legs of the monster
-locomotion		-> how the monster moves
-description	-> description of the monster

FarmAnimal has the following 2 additional properties:
-eggPrice		-> the price of the egg at Terramart
-produce		-> the resource the monster produces

In total, the BiomeMonster has 8 properties.

************************************************************
*/

#ifndef FarmAnimal_H
#define FarmAnimal_H

#include "UniqueMonster.h"

class FarmAnimal : public UniqueMonster
{
private:
	int eggPrice;
	string produce;

public:

	void setAllMemberVariablesAndPrint(const string& name, const int& bh, const string& cap, const int& legs,
		const int& loc, const string& desc, const int& ep, const string& pr);
	/*
	Function to call all the setter function and print method. (Utilized at Add functionality)
	So I can do this in 1 line
	*/

	void setProduce(string f_produce);
	/*
	Function to set the produce of the FarmAnimal
	*/

	string getProduce() const;
	/*
	Function to get the produce of the FarmAnimal
	*/

	void setEggPrice(int f_eggPrice);
	/*
	Function to set the eggPrice of the FarmAnimal
	*/

	int getEggPrice() const;
	/*
	Function to get the eggPrice of the FarmAnimal
	*/

	void print() const;
	/*
	Function to print FarmAnimal details
	This print() method in sub-class "FarmAnimal" overrides
	the print() method in the base-class "UniqueMonster".

	Function Overriding -> Same name, number, and types of parameters.

	This prints the additional properties (eggPrice, produce)
	ontop of the base-class details.
	*/

	void getMonsterDetails(string& f_name, int& f_baseHealth, string& f_capturable, int& f_noOfLegs,
		int& f_locomotion, string& f_description, int& f_eggPrice, string& f_produce) const;
	/*
	Function to return the FarmAnimal details
	This getMonsterDetails() method in sub-class "FarmAnimal" overloads
	the getMonsterDetails() method in base-class "UniqueMonster".

	Function overloading -> Same name, different sets of parameters

	Postconditions:		f_name = name;
						f_baseHealth = baseHealth;
						f_capturable = capturable;
						f_noOfLegs = noOfLegs;
						f_locomotion = locomotion;
						f_description = description;
						f_eggPrice = eggPrice;
						f_produce = produce;
	*/

	FarmAnimal(string f_name=" ", int f_baseHealth=0, string f_capturable=" ", int f_noOfLegs=0,
				int f_locomotion=0, string f_description=" ", int f_eggPrice=0, string f_produce=" ");
	/*
	Constructor with parameters (default parameters)
	The FarmAnimal details is set according to the parameters.
	If no value is specified, the default values are assumed.
	Postconditions: 	eggPrice = f_eggPrice;
						produce = f_produce;
	*/


	~FarmAnimal();
	//destructor
};

#endif