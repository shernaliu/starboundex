/*
************************************************************
Author: Sherna Liew
BiomeMonster.cpp file

Contains the implementation of BiomeMonster
************************************************************
*/

#include "BiomeMonster.h"

//	Function to call all the setter function and print method.
void BiomeMonster::setAllMemberVariablesAndPrint(const string & name, const int & bh, const string & cap, const int & legs,
												const int & loc, const string & desc, const int & bd, const string & dr)
{
	setName(name);
	setBaseHealth(bh);
	setCapturable(cap);
	setNoOfLegs(legs);
	setLocomotion(loc);
	setDescription(desc);
	setBaseDamage(bd);
	setDrops(dr);

	cout << "Add New Biome Monster - Monster Details";
	print();
}

//	Function to set drops of the Monster
void BiomeMonster::setDrops(string m_drops)
{
	drops = m_drops;
}

//	Function to get drops of the Monster
string BiomeMonster::getDrops() const
{
	return drops;
}

//	Function to set the base damage of the Monster
void BiomeMonster::setBaseDamage(int m_baseDamage)
{
	baseDamage = m_baseDamage;
}
//	Function to get the base damage of the Monster
int BiomeMonster::getBaseDamage() const
{
	return baseDamage;
}

//	Function to print BiomeMonster details
void BiomeMonster::print() const
{
	cout << endl;
	cout << "======================================\n";

	//Print the base class UniqueMonster details
	UniqueMonster::print();

	cout.width(20); cout << left << "Base Damage: " << baseDamage << endl;
	cout.width(20); cout << left << "Drops: " << drops << endl;

	cout << "======================================\n";
	cout << endl;

}

//	Function to return the BiomeMonster details
void BiomeMonster::getMonsterDetails(string& m_name, int& m_baseHealth, string& m_capturable, int& m_noOfLegs,
									int& m_locomotion, string& m_description, int& m_baseDamage, string& m_drops) const
{
	m_name = name;
	m_baseHealth = baseHealth;
	m_baseDamage = baseDamage;
	m_drops = drops;
	m_capturable = capturable;
	m_noOfLegs = noOfLegs;
	m_locomotion = locomotion;
	m_description = description;
}

//	Constructor with parameters (default parameters)
BiomeMonster::BiomeMonster(string m_name, int m_baseHealth, string m_capturable, int m_noOfLegs,
						int m_locomotion, string m_description, int m_baseDamage, string m_drops)
			: UniqueMonster(m_name, m_baseHealth, m_capturable, m_noOfLegs, m_locomotion, m_description)
{
	baseDamage = m_baseDamage;
	drops = m_drops;
}


//	Destructor
BiomeMonster::~BiomeMonster()
{
}


