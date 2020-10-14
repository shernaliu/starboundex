/*
************************************************************
Author: Sherna Liew
BiomeMonster.h file

BiomeMonster is one of the sub-class of UniqueMonster.

Short description about BiomeMonster in Starbound:
Biome monsters are only found specific planetary biomes.
There are a total of 57 indexed Biome Monsters.
For more info, go to: http://starbounder.org/Monster

BiomeMonster inherits the following 6 properties from UniqueMonster:
-name			-> name of the monster
-baseHealth		-> the base health of the monster
-capturable		-> can the monster be captured
-noOfLegs		-> the number of legs of the monster
-locomotion		-> how the monster moves
-description	-> description of the monster

BiomeMonster has the following additional 2 properties:
-baseDamage		-> the base damage of the monster
-drops			-> the items the monster drops when it is killed

In total, the BiomeMonster has 8 properties.

************************************************************
*/

#ifndef BiomeMonster_H
#define BiomeMonster_H
#include "UniqueMonster.h"

class BiomeMonster : public UniqueMonster
{
private:
	int monsterId;
	int baseDamage;
	string foundIn;
	string drops;

public:
	void setAllMemberVariablesAndPrint(const string& name, const int& bh, const string& cap, const int& legs, 
							   const int& loc, const string& desc, const int& bd, const string& dr);
	/*
	Function to call all the setter function and print method. (Utilized at Add functionality)
	So I can do this in 1 line
	*/
	
	void setDrops(string m_drops);
	/*
	Function to set drops of the Monster
	*/

	string getDrops() const;
	/*
	Function to get drops of the Monster
	*/

	void setBaseDamage(int m_baseDamage);
	/*
	Function to set the base damage of the Monster
	*/

	int getBaseDamage() const;
	/*
	Function to get the base damage of the Monster
	*/

	void print() const;
	/*
	Function to print BiomeMonster details
	This print() method in sub-class "BiomeMonster" overrides
	the print() method in the base-class "UniqueMonster".

	Function Overriding -> Same name, number, and types of parameters.

	This prints the additional properties (baseDamage, drops)
	ontop of the base-class details.
	*/

	void getMonsterDetails(string& m_name, int& m_baseHealth, string& m_capturable, int& m_noOfLegs,
		int& m_locomotion, string& m_description, int& m_baseDamage, string& m_drops) const;
	/*
	Function to return the BiomeMonster details
	This getMonsterDetails() method in sub-class "BiomeMonster" overloads
	the getMonsterDetails() method in base-class "UniqueMonster".

	Function overloading -> Same name, different sets of parameters

	Postconditions:			
	*/

	BiomeMonster(string m_name = "Sample Monster", int m_baseHealth = 0, string m_capturable = "Yes", int m_noOfLegs=0,
				int m_locomotion = 0, string m_description = "Sample Description", int m_baseDamage = 0, string m_drops = "Sample Item");
	/*
	Constructor with parameters (default parameters)
	The BiomeMonster details is set according to the parameters.
	If no value is specified, the default values are assumed.
	Note: This constructor calls the base constructor UniqueMonster() explicitly.
	Postconditions: 	baseDamage = m_baseDamage;
						drops = m_drops;
	*/
	
	~BiomeMonster();
	//destructor
};

#endif
