#ifndef Starboundex_H
#define Starboundex_H
#include "BiomeMonster.h"
#include "FarmAnimal.h"

#include <iomanip> //for the setw
#include <fstream> //for file
#include <sstream>
#include <algorithm>    // std::find
#include <regex>

class Starboundex
{

public:
	//Declare a vector of UniqueMonster pointers
	vector<UniqueMonster*> uniqueMonsterList;

	//Declare a vector of BiomeMonster pointers
	vector<BiomeMonster*> biomeMonsterList;

	//Declare a vector of FarmAnimal pointers
	vector<FarmAnimal*> farmAnimalList;

	int toInt(const string& str) const;
	/*
	Function to convert a string to an integer

	Pre-condition:	supply a string into the parameter
	Post-condition: return -1 if its not a valid number
	OR
	return its parsed int if its a valid number
	*/

	int validateNoOfLegs(const string& str, const string& monsterName) const;
	/*
	Function to validate if the input string is a valid no of legs [0-4].
	This function encompasses the validation of integer number.
	Param 1: the string to be validated
	Param 2: name of the monster we are talking about
	*/

	int validateLocomotion(const string& str, const string& monsterName) const;
	/*
	Function to validate if the input string is a valid locomotion int.
	Param 1: the string to be validated
	Param 2: name of the monster we are talking about
	*/

	int validateInteger(const string& str, const string& errorMsg) const;
	/*
	Function to validate if the input is an integer.
	Param 1: the string to be validated
	Param 2: the error message to be printed out if its empty string
	*/

	string validateEmptyString(string& str, const string& errorMsg) const;
	/*
	Function to validate if the input string is empty.
	Param 1: the string to be validated
	Param 2: the error message to be printed out if its empty string
	*/

	string validateValidName(string& newName) const;
	/*
	Function that makes use of Regular Exressions to check if the name is deemed acceptable.
	A legit name is either 1 word eg.(Lilodon) or 2 words (King Lilodon).
	No special characters, numbers or more than 1 space is allowed.
	*/

	string validateSameName(string& newName) const;
	/*
	Function to check if the new name is an existing monster or farm animal
	*/

	void saveFarmAnimalData();
	/*
	Function that saves the FarmAnimal data to the text file before the program shuts down.*/

	void saveBiomeMonsterData();
	/*
	Function that saves the BiomeMonster data to the text file before the program shuts down.*/

	void deletePointerFromVectors(const UniqueMonster *ptrToBeDeleted);
	/*
	Function to erase the selected pointer from the main list and subset list.
	Then delete the pointer off.
	*/

	static bool sortByName(const UniqueMonster *lhs, const UniqueMonster *rhs);
	/*
	Function to sort the UniqueMonster pointers alphabetically by name
	This function is used by the sort algorithm, in the 3rd param.

	Notes: Back in CA1, I used vector of object. The sort algorithm took in 2 param
	just use the custom operator < overloaded function to compare.
	However, now I am using a vector of pointers, therefore, I need to
	create this custom compare function to take in pointers.

	Pre-condition:	UniqueMonster pointers must be loaded into the vector in question
	Post-condition: Sorts the pointers by their name in alphabetical order
	*/

	vector<UniqueMonster*> searchMonsterByNoOfLegs(const int& numInput) const;
	/*
	Function to do Search By Number of legs for UniqueMonster

	Pre-conditions: A user input, numInput must be cin-ed from the console
	AND already parsed as a valid int.
	It is passed into the parameter as a pass-by reference, read only variable.

	The uniqueMonsterList must be loaded with UniqueMonster pointers.
	The biomeMonsterList must be loaded with BiomeMonster pointers.

	Post-condition: The function searches for the monster that matches the number of legs as specified,
	adds the UniqueMonster pointer into a vector of BiomeMonster OBJECTS called resultList
	and returns it.
	*/

	vector<UniqueMonster*> searchMonsterByName(const string& searchStr) const;
	/*
	Function to do Search By Name for BiomeMonster

	Pre-conditions: A user input, searchStr must be cin-ed from the console
	and passed into the parameter as a pass-by reference, read only variable.

	The uniqueMonsterList must be loaded with UniqueMonster pointers.
	The biomeMonsterList must be loaded with BiomeMonster pointers.

	Post-condition: The function searches for the matching name,
	adds the UniqueMonster pointer into a vector of UniqueMonster pointers called resultList
	and returns it.
	*/

	void printAllLocType() const;
	/*
	Function that prints all the locomotion types in locomotionTypes array.

	Pre-condition: -
	Post-condition: Print all locomotion types

	*/


	static string getLocType(const int& type);
	/*
	Function that returns the locomotion string based on the int type.

	Pre-condition:  All Monsters must be loaded in their respective vectors.
	A number must be supplied in the parameter.
	Post-condition: Returns the locomotion string based on the int type.

	*/

	void displayAllMonsters() const;
	/*
	Function to print out all the monsters' details in the uniqueMonsterList
	Use of iterators to process elements in the container

	Pre-condition: All the BiomeMonster & FarmAnimal pointers must be loaded into the uniqueMonsterList
	Post-condition: Call the print() function for all UniqueMonster pointers in the list
	*/

	void loadAllFarmAnimals();
	/*
	This is an initialization method that loads all FarmAnimal from
	FarmAnimalsData.txt file, which is a |-delimited file.

	It opens the file, store each data in monsterData vector,
	parse the data into their respective types,
	and create FarmAnimal objects using the read-in data.

	Pre-condition: .txt file must exist in the project directory in order to read data from file
	Post-condition: All FarmAnimal OBJECTS are loaded into the farmAnimalList
	*/


	void loadAllBiomeMonsters();
	/*
	This is an initialization method that loads all BiomeMonster from
	NewBiomeMonsterData.txt file, which is a |-delimited file.

	It opens the file, store each data in monsterData vector,
	parse the data into their respective types,
	and create BiomeMonster objects using the read-in data.

	Pre-condition: .txt file must exist in the project directory in order to read data from file
	Post-condition: All BiomeMonster OBJECTS are loaded into the biomeMonsterList
	*/

	Starboundex();
	//default constructor

	~Starboundex();
	//destructor
};

#endif