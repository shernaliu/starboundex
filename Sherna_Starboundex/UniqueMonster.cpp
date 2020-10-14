/*
************************************************************
Author: Sherna Liew
UniqueMonster.cpp file

Contains the implementation of UniqueMonster
************************************************************
*/

#include "UniqueMonster.h"
#include "Starboundex.h"

//	Function to convert a string to lowercase
string UniqueMonster::toLowercase(const string & str) const
{	//declare a char array of size 30
	char charArr[30];

	//store the string over to the char array
	strcpy(charArr, str.c_str());

	//loop thru the array, and only call tolower ONLY on uppercase letters
	for (std::size_t i = 0; charArr[i]; i++) {
		if (isupper(charArr[i])) {
			charArr[i] = tolower(charArr[i]);
		}
	}
	//return the string
	string newName(charArr);
	return newName;
}

//Overloaded == operator function to compare name w/ userInput
bool UniqueMonster::operator==(const string & userInput) const
{
	//compare monster's name (lowercased) with userInput (lowercased)
	//regardless of full/partial name given
	//!= npos means != -1, which means "Not Found"
	//basically if its not equals to -1, then its found
	return (toLowercase(name).find(toLowercase(userInput)) != string::npos);
}

//Function to overload the operator == to compare UniqueMonster's noOfLegs with searchString (int)
bool UniqueMonster::operator==(const int & userInput) const
{
	return (noOfLegs == userInput);
}

//Function to overload the stream insertion operator to print out each UniqueMonster's name only
ostream & operator<<(ostream & osObject, const vector<UniqueMonster*>& list)
{	//declare a counter
	int counter = 1;

	//declare an iterator to the beginning and end of vector
	vector<UniqueMonster*>::const_iterator itor = list.begin();

	
	vector<UniqueMonster*>::const_iterator theEnd = list.end();

	//loop thru the passed-in list, put the ordering & the monster name in the ostream object
	for (; itor != theEnd; itor++) {

		osObject << counter << ": " << (*itor)->getName()<< endl;

		//increment counter
		counter++;
	}

	return osObject;
}

//	Function to print UniqueMonster details
void UniqueMonster::print() const
{
	cout.width(20); cout << left << "Monster Name: " << name << endl;
	cout.width(20); cout << left << "Description: " << description << endl;
	cout.width(20); cout << left << "No. of Legs: " << noOfLegs << endl;
	cout.width(20); cout << left << "Locomotion: " << Starboundex::getLocType(locomotion) << endl;
	cout.width(20); cout << left << "Capturable: " << capturable << endl;
	cout.width(20); cout << left << "Base Health: " << baseHealth << endl;
}

//	Function to set the description of the Monster
void UniqueMonster::setDescription(string m_description)
{
	description = m_description;
}

//	Function to get the description of the Monster
string UniqueMonster::getDescription() const
{
	return description;
}

//	Function to set the locomotion of the Monster
void UniqueMonster::setLocomotion(int m_locomotion)
{
	locomotion = m_locomotion;
}

//	Function to get the locomotion value of the Monster
int UniqueMonster::getLocomotion() const
{
	return locomotion;
}

//	Function to set the number of legs of the Monster
void UniqueMonster::setNoOfLegs(int m_noOfLegs)
{
	noOfLegs = m_noOfLegs;
}

//	Function to get the number of legs of the monster
int UniqueMonster::getNoOfLegs() const
{
	return noOfLegs;
}

//	Function to toggle the capturable of the monster (for Edit functionality)
void UniqueMonster::toggleCapturable(string m_capturable)
{
	//if original passed in capturable was "Yes", then set it to "No"
	if (m_capturable.compare("Yes") == 0) {
		capturable = "No";
	}
	else {
		capturable = "Yes";
	}
}

//	Function to set the capturable of the monster directly (for Add functionality)
void UniqueMonster::setCapturable(string m_cap)
{
	if (m_cap.compare("y") == 0) {
		capturable = "Yes";
	}
	else {
		capturable = "No";
	}
}

//	Function to get the capturable value of the Monster
string UniqueMonster::getCapturable() const
{
	return capturable;
}

//	Function to set the baseHealth of the monster
void UniqueMonster::setBaseHealth(int m_baseHealth)
{
	baseHealth = m_baseHealth;
}

int UniqueMonster::getBaseHealth() const
{
	return baseHealth;
}

//	Function to set the name of the monster
void UniqueMonster::setName(string m_name)
{
	name = m_name;
}

//	Function to get the name of the monster
string UniqueMonster::getName() const
{
	return name;
}

//	Function to return the UniqueMonster details
void UniqueMonster::getMonsterDetails(string & m_name, int & m_baseHealth, string & m_capturable, int & m_noOfLegs,
									int & m_locomotion, string & m_description) const
{
	m_name = name;
	m_baseHealth = baseHealth;
	m_capturable = capturable;
	m_noOfLegs = m_noOfLegs;
	m_locomotion = locomotion;
	m_description = description;
}


//	Constructor with parameters (default parameters)
UniqueMonster::UniqueMonster(string m_name, int m_baseHealth, string m_capturable, int m_noOfLegs,
							int m_locomotion, string m_description)
{
	name = m_name;
	baseHealth = m_baseHealth;
	capturable = m_capturable;
	noOfLegs = m_noOfLegs;
	locomotion = m_locomotion;
	description = m_description;
}


//	Destructor
UniqueMonster::~UniqueMonster()
{
}


