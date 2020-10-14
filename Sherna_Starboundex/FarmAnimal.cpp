/*
************************************************************
Author: Sherna Liew
FarmAnimal.cpp file

Contains the implementation of FarmAnimal
************************************************************
*/
#include "FarmAnimal.h"

//	Function to call all the setter function and print method.
void FarmAnimal::setAllMemberVariablesAndPrint(const string & name, const int & bh, const string & cap, const int & legs, const int & loc, const string & desc, const int & ep, const string & pr)
{
	setName(name);
	setBaseHealth(bh);
	setCapturable(cap);
	setNoOfLegs(legs);
	setLocomotion(loc);
	setDescription(desc);
	setEggPrice(ep);
	setProduce(pr);

	cout << "Add New Farm Animal - Animal Details";
	print();
}

//	Function to set the produce of the FarmAnimal
void FarmAnimal::setProduce(string f_produce)
{
	produce = f_produce;
}

//Function to get the eggPrice of the FarmAnimal
string FarmAnimal::getProduce() const
{
	return produce;
}

//	Function to set the eggPrice of the FarmAnimal
void FarmAnimal::setEggPrice(int f_eggPrice)
{
	eggPrice = f_eggPrice;
}

//	Function to get the eggPrice of the FarmAnimal
int FarmAnimal::getEggPrice() const
{
	return eggPrice;
}

//Function to print FarmAnimal details
void FarmAnimal::print() const
{
	cout << endl;
	cout << "======================================\n";

	//Print the base class UniqueMonster details
	UniqueMonster::print();

	cout.width(20); cout << left << "Egg Price: " << eggPrice << endl;
	cout.width(20); cout << left << "Produce: " << produce << endl;

	cout << "======================================\n";
	cout << endl;

}

//	Function to return the FarmAnimal details
void FarmAnimal::getMonsterDetails(string & f_name, int & f_baseHealth, string & f_capturable, int & f_noOfLegs,
									int & f_locomotion, string & f_description, int & f_eggPrice, string & f_produce) const
{
	f_name = name;
	f_baseHealth = baseHealth;
	f_capturable = capturable;
	f_noOfLegs = noOfLegs;
	f_locomotion = locomotion;
	f_description = description;
	f_eggPrice = eggPrice;
	f_produce = produce;
}

//	Constructor with parameters (default parameters)
FarmAnimal::FarmAnimal(string f_name, int f_baseHealth, string f_capturable, int f_noOfLegs,
					int f_locomotion, string f_description, int f_eggPrice, string f_produce)
	: UniqueMonster(f_name,f_baseHealth,f_capturable,f_noOfLegs,f_locomotion,f_description)
{
	eggPrice = f_eggPrice;
	produce = f_produce;
}

//	Destructor
FarmAnimal::~FarmAnimal()
{
}


