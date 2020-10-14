/*
************************************************************
Author: Sherna Liew
UniqueMonster.h file

UniqueMonster is the base-class. It's sub-classes are:
BiomeMonster & FarmAnimal

Short description about Unique Monsters in Starbound:
Unique monsters are those that are pre-designed by the game.
They can be found on planets, specific to biomes.
They can be captured.
They can found in more than one biome.
For more info, go to: http://starbounder.org/Monster

UniqueMonster has the following 6 properties:
-name			-> name of the monster
-baseHealth		-> the base health of the monster
-capturable		-> can the monster be captured
-noOfLegs		-> the number of legs of the monster
-locomotion		-> how the monster moves
-description	-> description of the monster
************************************************************
*/

#ifndef UniqueMonster_H
#define UniqueMonster_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class UniqueMonster
{
protected:
	string name;
	int baseHealth;
	string capturable;
	int noOfLegs;
	int locomotion;
	string description;

public:
	string toLowercase(const string& str) const;
	/*
	Function to convert a string to lowercase

	Pre-condition: supply a string to the parameter
	Post-condition: retuns the lowercased string
	*/

	bool UniqueMonster::operator==(const string&) const;
	/*
	Function to overload the operator == to compare UniqueMonster's name with searchString (int)
	Post-condition: return (name.find(userInput) != string::npos);
	No const keyword because I want to toLowerCase() the name and userInput....
	*/

	bool UniqueMonster::operator==(const int&) const;
	/*
	Function to overload the operator == to compare UniqueMonster's noOfLegs with searchString (int)
	Post-condition: return (noOfLegs == userInput);
	*/


	friend ostream& operator << (ostream&, const vector<UniqueMonster*>&);
	/*
	Overload the stream insertion operator to take in vector of UniqueMonster objects
	to print out every single UniqueMonster object's name only.
	*/

	virtual void print() const = 0;
	/*
	Function to print UniqueMonster details
	Details to be printed: name, description, noOfLegs, locomotion, capturable, baseHealth
	*/

	void setDescription(string m_description);
	/*
	Function to set the description of the Monster
	*/

	string getDescription() const;
	/*
	Function to get the description of the Monster
	*/
	
	void setLocomotion(int m_locomotion);
	/*
	Function to set the locomotion of the Monster
	*/

	int getLocomotion() const;
	/*
	Function to get the locomotion value of the Monster
	Post-condition: return locomotion;
	*/

	void setNoOfLegs(int m_noOfLegs);
	/*
	Function to set the number of legs of the Monster
	*/

	int getNoOfLegs() const;
	/*
	Function to get the number of legs of the monster
	Post-condition: return noOfLegs;
	*/

	void toggleCapturable(string m_capturable);
	/*
	Function to toggle the capturable of the monster (for Edit functionality)
	If the passed-in value is "Yes", then it will toggle the capturable to "No".
	Likewise for the opposite.
	*/

	void setCapturable(string m_cap);
	/*
	Function to set the capturable of the monster directly (for Add functionality)
	If 'y', then set 'Yes'. If 'n', then set 'No'
	*/
	
	string getCapturable() const;
	/*
	Function to get the capturable value of the Monster
	Post-condition: return capturable;
	*/

	void setBaseHealth(int m_baseHealth);
	/*
	Function to set the baseHealth of the monster
	Postcondition: baseHealth = m_baseHealth;
	*/

	int getBaseHealth() const;
	/*
	Function to get the base health of the monster
	Post-condition: return baseHealth;
	*/

	void setName(string m_name);
	/*
	Function to set the name of the monster
	Postcondition: name = m_name;
	*/

	string getName() const;
	/*
	Function to get the name of the monster
	Post-condition: return name;
	*/

	void getMonsterDetails(string& m_name, int& m_baseHealth, string& m_capturable, int& m_noOfLegs,
							int& m_locomotion, string& m_description) const;
	/*
	Function to return the UniqueMonster details
	The parameters are pass-by reference.
	Use of reference parameters in multiple return parameters.
	Postconditions:		m_name = name;
						m_baseHealth = baseHealth;
						m_capturable = capturable;
						m_noOfLegs = m_noOfLegs;
						m_locomotion = locomotion;
						m_description = description;
	*/


	UniqueMonster(string m_name="Default", int m_baseHealth=0, string m_capturable="No", int m_noOfLegs=0,
				int m_locomotion=0, string m_description="This is a default description.");
	/*
	Constructor with parameters (default parameters)
	The UniqueMonster details is set according to the parameters.
	If no value is specified, the default values are assumed.
	Postconditions: 	name = m_name;
						baseHealth = m_baseHealth;
						capturable = m_capturable;
						noOfLegs = m_noOfLegs;
						locomotion = m_locomotion;
						description = m_description;
	*/

	~UniqueMonster();
	//destructor
};

#endif