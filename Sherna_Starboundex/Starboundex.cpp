#include "Starboundex.h"

// Declare an enum called Type that maps the number to the respective locomotion type.
enum Type {
	WALKING = 1,
	HOPPING = 2,
	CRAWLING = 3,
	FLYING = 4,
	FLOATING = 5,
	GALLOPING = 6,
	SWIMMING = 7
};

// Declare a string array to store the locomotion string. This array will be used to iterate through in getLocType();
static const string locomotionTypes[] = {
	"Walking",
	"Hopping",
	"Crawling",
	"Flying",
	"Floating",
	"Galloping",
	"Swimming"
};

//	Function to convert a string to an integer
int Starboundex::toInt(const string & str) const
{
	//declare a stringstream object
	stringstream ss(str);

	//declare an int
	int num;

	//if it is not a valid number, it will return -1. otherwise it will return its parsed int
	if ((ss >> num).fail())
	{
		return -1;
	}
	return num;
}

//	Function to validate if the input string is a valid no of legs [0-4].
int Starboundex::validateNoOfLegs(const string & str, const string & monsterName) const
{
	int noOfLegs;
	string tempStr;

	//parse the input first
	noOfLegs = toInt(str);

	while ((noOfLegs < 0) || (noOfLegs > 4)) {
		cout << "\n================ FAIL ================" << endl;
		cout << "Invalid input! Please enter [0-4]" << endl;

		//if no monster name, no need to ask this question (applicable at the SEARCH_BY_NO_OF_LEGS functionality)
		if (monsterName.compare("") != 0) cout << "How many legs should " << monsterName << " have?" << endl;

		cout << "\nYou entered: ";

		//get user input
		cin >> tempStr;

		//parse the input again
		noOfLegs = toInt(tempStr);
	}
	return noOfLegs;
}

//	Function to validate if the input string is a valid locomotion int.
int Starboundex::validateLocomotion(const string & str, const string & monsterName) const
{
	int locomotion;
	string tempStr;

	//parse the input first
	locomotion = toInt(str);

	while ((locomotion < 0) || (locomotion > 7)) {
		cout << "\n================ FAIL ================" << endl;
		cout << "Invalid input! Please enter [0-7]" << endl;

		cout << endl << "How does " << monsterName << " move?" << endl;
		printAllLocType();
		cout << "\nYou entered: ";

		//get user input
		cin >> tempStr;

		//parse the input again
		locomotion = toInt(tempStr);
	}
	//once validated, return the locomotion
	return locomotion;
}

//	Function to validate if the input is an integer.
int Starboundex::validateInteger(const string & str, const string & errorMsg) const
{
	int num = 0;
	string tempStr;

	//parse the input first
	num = toInt(str);

	while (num == -1) {
		cout << "================ FAIL ================" << endl;
		cout << "Invalid input! [Please enter a number]";

		//if no errorMsg, no need to cout anything
		if (errorMsg.compare("") != 0) cout << errorMsg;

		cout << "\nYou entered: ";

		//get user input
		cin >> tempStr;

		//parse the input again
		num = toInt(tempStr);
	}

	//once validated, return the num
	return num;
}

//	Function to validate if the input string is empty.
string Starboundex::validateEmptyString(string & str, const string & errorMsg) const
{
	while (str.compare("") == 0) {
		cout << "\n================ FAIL ================" << endl;
		cout << errorMsg;
		cout << "You entered: ";
		//get user input
		getline(cin, str);
	}

	//once valid, return str
	return str;
}

//	Function that makes use of Regular Exressions to check if the name is deemed acceptable.
string Starboundex::validateValidName(string & newName) const
{
	bool result = false;
	regex regularEx("^[a-zA-Z]+[ ]?[a-zA-Z]+$");

	result = regex_match(newName, regularEx);

	//if the result is false, we want to loop the prompt for new input
	while (result == false) {
		cout << "\n================ FAIL ================" << endl;
		cout << "Name can only have alphabets and/or a single space in-between alphabets.";
		cout << "\nPlease choose a different name.";
		cout << "\nYou entered: ";

		//get the user input
		getline(cin, newName);

		//only if its not empty string, then proceed to validate valid name and same name
		if (newName.compare("") != 0) {
			//1. check for same name
			newName = validateSameName(newName);

			//2. regex match again
			result = regex_match(newName, regularEx);
		}
	}
	return newName;
}

//	Function to check if the new name is an existing monster or farm animal
string Starboundex::validateSameName(string& newName) const
{
	bool isSame = false;

	do {
		//iterate through to find matching name
		//declare an iterator to the beginning and end of vector
		vector<UniqueMonster*>::const_iterator itor = uniqueMonsterList.begin();
		vector<UniqueMonster*>::const_iterator theEnd = uniqueMonsterList.end();

		//for-loop to loop through all pointers to check for same name
		for (; itor != theEnd; itor++) {

			//if its the same exact name, we want to prompt user for input again
			if ((*itor)->getName() == newName) {
				cout << "\n================ FAIL ================" << endl;
				cout << "An existing monster has that name.";
				cout << "\nPlease choose a different name.";
				cout << "\nYou entered: ";

				//set to true
				isSame = true;
				break;
			}
			else {
				isSame = false;
			}
		}

		if (isSame == true) {
			//get the user input
			getline(cin, newName);
		}

	} while (isSame == true);
	return newName;
}

//	Function that saves the FarmAnimal data to the text file before the program shuts down.
void Starboundex::saveFarmAnimalData()
{
	//-----------Part 2 - Save FarmAnimal data----------
	//declare ofstream to open file
	ofstream newFile;
	newFile.open("NewFarmAnimalsData.txt");

	//declare an iterator to the beginning and end of vector
	vector<FarmAnimal*>::const_iterator itor = farmAnimalList.begin();	
	vector<FarmAnimal*>::const_iterator theEnd = farmAnimalList.end();

	//declare a string to build the statement to write to the file
	string statement = "";

	//Note:vector's end Returns an iterator referring to the past-the-end element in the vector container, NOT THE LAST ELEMENT!
	//So, use prev, which gives the predecessor of it
	//to get the last animal's name in the list as a benchmark to determine whether need to append new line
	vector<FarmAnimal*>::const_iterator it = prev(farmAnimalList.end());

	//declare a string to store the name of the last monster in the list
	string lastMonsterName = (*it)->getName();

	//for-loop to loop through all pointers
	for (; itor != theEnd; itor++) {

		//build the statement
		statement = (*itor)->getName() + "|"
			+ to_string((*itor)->getBaseHealth()) + "|"
			+ (*itor)->getCapturable() + "|"
			+ to_string((*itor)->getNoOfLegs()) + "|"
			+ to_string((*itor)->getLocomotion()) + "|"
			+ (*itor)->getDescription() + "|"
			+ to_string((*itor)->getEggPrice()) + "|"
			+ (*itor)->getProduce();

		//write the statement to the textfile
		newFile << statement;

		//if its not the last statement to be written to the file, add a new line at the back
		if ((*itor)->getName() != lastMonsterName) newFile << "\n";
	}
}

//	Function that saves the BiomeMonster data to the text file before the program shuts down.*/
void Starboundex::saveBiomeMonsterData()
{
	//-----------Part 1 - Save BiomeMonster data----------
	//declare ofstream to open file
	ofstream newFile;
	newFile.open("NewBiomeMonsterData.txt");

	//declare an iterator to the beginning and end of vector
	vector<BiomeMonster*>::const_iterator itor = biomeMonsterList.begin();
	vector<BiomeMonster*>::const_iterator theEnd = biomeMonsterList.end();

	//declare a string to build the statement to write to the file
	string statement = "";

	//Note:vector's end Returns an iterator referring to the past-the-end element in the vector container, NOT THE LAST ELEMENT!
	//So, use prev, which gives the predecessor of it
	//to get the last monster's name in the list as a benchmark to determine whether need to append new line
	vector<BiomeMonster*>::const_iterator it = prev(biomeMonsterList.end());

	//declare a string to store the name of the last monster in the list
	string lastMonsterName = (*it)->getName();

	//for-loop to loop through all pointers
	for (; itor != theEnd; itor++) {

		//build the statement
		statement = (*itor)->getName() + "|"
			+ to_string((*itor)->getBaseHealth()) + "|"
			+ (*itor)->getCapturable() + "|"
			+ to_string((*itor)->getNoOfLegs()) + "|"
			+ to_string((*itor)->getLocomotion()) + "|"
			+ (*itor)->getDescription() + "|"
			+ to_string((*itor)->getBaseDamage()) + "|"
			+ (*itor)->getDrops();

		//write the statement to the textfile
		newFile << statement;

		//if its not the last statement to be written to the file, add a new line at the back
		if ((*itor)->getName() != lastMonsterName) newFile << "\n";
	}
}

//	Function to erase the selected pointer from the main list and subset list.
void Starboundex::deletePointerFromVectors(const UniqueMonster *ptrToBeDeleted)
{	//Part 1: Remove element from main list
	//Use find algorithm to find the pointer in the uniqueMonsterList
	vector<UniqueMonster*>::iterator um_position = find(uniqueMonsterList.begin(), uniqueMonsterList.end(), ptrToBeDeleted);

	if (um_position != uniqueMonsterList.end()) {// == myVector.end() means the element was not found
		//remove the element from the vector
		//since it is a shallow copy, i will delete the pointer in the next step and not here
		uniqueMonsterList.erase(um_position);
	}

	//Part 2: Remove element from subset list & finally the delete pointer
	vector<BiomeMonster*>::iterator bm_position = find(biomeMonsterList.begin(), biomeMonsterList.end(), ptrToBeDeleted);

	if (bm_position != biomeMonsterList.end()) {// == myVector.end() means the element was not found											 
		//remove the element from the vector
		biomeMonsterList.erase(bm_position);

		//Finally we can safely delete this pointer and set to NULL
		delete ptrToBeDeleted;
		ptrToBeDeleted = NULL;
	}

	cout << "Monster deleted successfully!" << endl;
	cout << "================= OK =================" << endl;
}

//	Function to sort the UniqueMonster pointers alphabetically by name
bool Starboundex::sortByName(const UniqueMonster * lhs, const UniqueMonster * rhs)
{
	return lhs->getName() < rhs->getName();
}

//	Function to do Search By Number of legs for BiomeMonster
vector<UniqueMonster*> Starboundex::searchMonsterByNoOfLegs(const int & numInput) const
{
	//declare a vector of UniqueMonster pointers, resultList
	vector<UniqueMonster*> resultList;

	//declare int counter = 0 to keep track of the number of records found
	int counter = 0;

	//declare an iterator to the beginning and end of vector
	vector<UniqueMonster*>::const_iterator itor = uniqueMonsterList.begin();
	vector<UniqueMonster*>::const_iterator theEnd = uniqueMonsterList.end();

	//for-loop to loop through all pointers
	for (; itor != theEnd; itor++) {

		//dereference twice (**itor) to get UniqueMonster object
		if (**itor == numInput) {

			//increment counter by 1
			counter++;

			//Add the UniqueMonster pointer to the vector
			resultList.push_back(*itor);
		}
	}


	//print the no. of records found
	cout << "Total matching records found: " << counter << endl;

	//sort them alphabetically by name, using the sortByName
	sort(resultList.begin(), resultList.end(), sortByName);

	//return the resultList vector
	return resultList;
}

//	Function to do Search By Name for BiomeMonster
vector<UniqueMonster*> Starboundex::searchMonsterByName(const string & searchStr) const
{

	//declare a vector of UniqueMonster pointers, resultList
	vector<UniqueMonster*> resultList;

	//declare int counter = 0 to keep track of the number of records found
	int counter = 0;

	//declare an iterator to the beginning and end of vector
	vector<UniqueMonster*>::const_iterator itor = uniqueMonsterList.begin();
	vector<UniqueMonster*>::const_iterator theEnd = uniqueMonsterList.end();

	//for-loop to loop through all pointers
	for (; itor != theEnd; itor++) {

		//dereference twice (**itor) to get UniqueMonster object
		//Use of custom Overloaded == operator function
		if (**itor == searchStr) {

			//increment counter by 1
			counter++;

			//Add the UniqueMonster pointer to the vector
			resultList.push_back(*itor);
		}
	}

	//print the no. of records found
	cout << "======================================\n";
	cout << "Total matching records found: " << counter << endl;

	//sort them alphabetically by name, using the sortByName
	sort(resultList.begin(), resultList.end(), sortByName);

	//return the resultList vector
	return resultList;
}

//	Function that prints all the locomotion types in locomotionTypes array.
void Starboundex::printAllLocType() const
{
	for (int i = 0; i < 8; i++) {
		cout << i << ": " << getLocType(i) << endl;
	}
}

/*
Function that returns the locomotion string based on the int type.
Using a switch statement (neater).
*/
string Starboundex::getLocType(const int & type)
{
	switch (type) {
	case 1:
		return locomotionTypes[0];
		break;
	case 2:
		return locomotionTypes[1];
		break;
	case 3:
		return locomotionTypes[2];
		break;
	case 4:
		return locomotionTypes[3];
		break;
	case 5:
		return locomotionTypes[4];
		break;
	case 6:
		return locomotionTypes[5];
		break;
	case 7:
		return locomotionTypes[6];
		break;
	case 8:
		return locomotionTypes[7];
		break;
	default:
		return "Undefined";
	}
}

//	Function to print out all the monsters' details in the uniqueMonsterList
void Starboundex::displayAllMonsters() const
{	//Note: const_iterator returns a reference to a constant value (const T&) and prevents modification of the referenced value.
	//declare an iterator to the beginning and end of vector
	vector<UniqueMonster*>::const_iterator itor = uniqueMonsterList.begin();
	vector<UniqueMonster*>::const_iterator theEnd = uniqueMonsterList.end();

	//for-loop to loop through all pointers and call print()
	for (; itor != theEnd; itor++) {
		//dereference the iterator, then dereference the UniqueMonster pointer to call print()
		if (*itor != NULL) {//ONLY DEREFERENCE IF ITS NOT A NULL POINTER
			(*itor)->print();
		}
	}

	//print out the size of the vector
	cout << "Total no.: " << uniqueMonsterList.size() << endl;
}

//Function to initialize all the FarmAnimal pointers into farmAnimalList
void Starboundex::loadAllFarmAnimals()
{
	string line;
	string data;

	//declare monsterData to store all 8 properties
	vector<string> monsterData;

	//declare variables for all farm animal properties
	string f_name = "";
	int f_baseHealth = 0;
	string f_capturable = "";
	int f_noOfLegs = 0;
	int f_locomotion = 0;
	string f_description = "";
	int f_eggPrice = 0;
	string f_produce = "";

	//declare input file stream
	ifstream inputFile("NewFarmAnimalsData.txt");

	if (inputFile.is_open()) {
		//read each line in the file
		while (!inputFile.eof()) {

			//read 1 line and store in line
			getline(inputFile, line);

			//store that line in ss
			stringstream ss(line);

			//split by | and add each data into monsterData vector
			while (getline(ss, data, '|')) {

				//add the data to the vector
				monsterData.push_back(data);

			}//end of while

			 //Parsing of data into their respective datatypes
			f_name = monsterData[0];
			f_baseHealth = stoi(monsterData[1]);
			f_capturable = monsterData[2];
			f_noOfLegs = stoi(monsterData[3]);
			f_locomotion = stoi(monsterData[4]);//int
			f_description = monsterData[5];
			f_eggPrice = stoi(monsterData[6]);
			f_produce = monsterData[7];

			//clear the monsterData vector
			monsterData.clear();

			//--------Maintaining 2 vectors to make life easier--------
			//create a FarmAnimal pointer with the data
			FarmAnimal *ptrFarmAnimal = new FarmAnimal(f_name, f_baseHealth, f_capturable, f_noOfLegs,
				f_locomotion, f_description, f_eggPrice, f_produce);

			//store the FarmAnimal pointer in the farmAnimalList
			farmAnimalList.push_back(ptrFarmAnimal);

			//Store the FarmAnimal pointer into UniqueMonster pointer
			UniqueMonster *ptrUM = ptrFarmAnimal;

			//store the uniqueMonster pointer in the uniqueMonsterList
			uniqueMonsterList.push_back(ptrUM);
		}//end of while-loop

		inputFile.close();
		cout << "All Farm Animals are loaded!" << endl;
	}

}

//	initialization method that loads all BiomeMonster
void Starboundex::loadAllBiomeMonsters()
{
	string line;
	string data;

	//declare vector of string called monsterData to store all 8 properties
	vector<string> monsterData;

	//---1st Step: Create BiomeMonster pointers and store in the uniqueMonsterList---

	//create variables for all biome monster properties
	string b_name = "";
	int b_baseHealth = 0;
	string b_capturable = "";
	int b_noOfLegs = 0;
	int b_locomotion = 0;
	string b_description = "";
	int b_baseDamage = 0;
	string b_drops = "";

	//declare input file stream
	ifstream inputFile("NewBiomeMonsterData.txt");

	if (inputFile.is_open()) {
		//read each line in the file
		while (!inputFile.eof()) {

			//read 1 line and store in line
			getline(inputFile, line);

			//create stringstream ss that stores line
			stringstream ss(line);

			//while loop: split by |-delimeter and add each data into monsterData vector
			while (getline(ss, data, '|')) {

				//add the data to the vector
				monsterData.push_back(data);

			}//end of while

			 //Parsing of data into their respective datatypes & storing in their variables
			b_name = monsterData[0];
			b_baseHealth = stoi(monsterData[1]);
			b_capturable = monsterData[2];
			b_noOfLegs = stoi(monsterData[3]);
			b_locomotion = stoi(monsterData[4]);
			b_description = monsterData[5];
			b_baseDamage = stoi(monsterData[6]);
			b_drops = monsterData[7];

			//clear the monsterData vector since we dont need it anymore
			//and also to prepare itself for the next line it reads
			monsterData.clear();

			//--------Maintaining 2 vectors to make life easier--------
			//create a BiomeMonster pointer with the data
			BiomeMonster *ptrBiomeMonster = new BiomeMonster(b_name, b_baseHealth, b_capturable, b_noOfLegs,
				b_locomotion, b_description, b_baseDamage, b_drops);

			//store the BiomeMonster pointer in the biomeMonsterList
			biomeMonsterList.push_back(ptrBiomeMonster);

			//Store the biomeMonster pointer into UniqueMonster pointer
			UniqueMonster *ptrUM = ptrBiomeMonster;

			//store the uniqueMonster pointer in the uniqueMonsterList
			uniqueMonsterList.push_back(ptrUM);
		}//end of while-loop

		inputFile.close();
		cout << "All Biome Monsters are loaded!" << endl;
	}
}

//	Default constructor
Starboundex::Starboundex()
{
}


//	Destructor
Starboundex::~Starboundex()
{
}
