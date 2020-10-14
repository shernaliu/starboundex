#include "Starboundex.h"

/*
Declare enums for the run state which is
essentially the functionalities of the program
such as Search, Add, Edit and Delete.

The run states enum are assigned a single digit.
*/
enum RunState {

	QUIT_PROGRAM = -99,
	ERROR = -1,

	SAVE_CHANGES = -3,
	DISCARD_CHANGES = -4,

	SEARCH_MONSTER_OR_FARM_ANIMAL = 1,
	ADD_NEW_BIOME_MONSTER = 2,
	ADD_NEW_FARM_ANIMAL = 3,
	EDIT_EXISTING_MONSTER_OR_FARM_ANIMAL = 4,
	SHOW_ALL_MONSTERS = 5
};


/*
Declare an array, runStateStrings of of char in order
to display the functionality text in the console
for user to make a choice.
*/
const char* const runStateStrings[] = {
	"Search for Biome Monster/Farm Animal",

	"Add a new Biome Monster",
	"Add a new Farm Animal",
	"Edit existing Biome Monster/Farm Animal",
	"Show All Monsters"
};

/*
Function to display all the functionalities in the program.
It loops through the runStateStrings and prints it out to
the console for user to make selection based on it.
*/
const void displayAllFunctions()
{
	//Display the Main Menu - Start
	cout << endl << "============= MAIN MENU ==============" << endl;
	cout << "======================================\n";
	cout << "What would you like to do?" << endl;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " ";
		cout << setw(20) << fixed << left;
		cout << runStateStrings[i] << endl;
	}//end of for

	cout << "\n" << "-99 Exit Program" << endl;

	cout << "======================================\n";
	//Display the Main Menu - End
}

//-------------------------------------------------------------------------------
/*
Declare enums for the SearchOptions.
There are 3 types of search options.
By Name, Number of Legs, and ID.

The SearchOptions enum are assigned double digits
in order not to clash with RunState.

*/
enum SearchOptions {
	SEARCH_BY_NAME = 11,
	SEARCH_BY_NO_OF_LEGS = 12
};

/*
Declare an array, searchOptionStrings, of char pointers
to display the Search functionalities to the console
for user to make a choice.

There are 3 types of search options.
By Name, Number of Legs, and ID.
*/
const char* const searchOptionStrings[] = {
	"Search by Name",
	"Search by Number of Legs"
};

/*
Function to display all the Search functionalities.
It loops through the searchOptionStrings array
and displays it to the console.
*/
const void displaySearchFunctions()
{
	//Display the Search Menu - Start
	cout << "======================================\n";
	cout << "How would you like to search?" << endl;

	for (int i = 0; i < 2; i++) {
		cout << "1" << i + 1 << " ";
		cout << setw(20) << fixed << left;
		cout << searchOptionStrings[i] << endl;
	}//end of for

	cout << "\nEnter any number to return to Main Menu" << endl;
	cout << "======================================\n";
	//Display the Search Menu - End
}
//-------------------------------------------------------------------------------
/*
Declare enums for the additionalOptions.
There are 2 types of additionalOptions options.
Edit, Delete

The additionalOptions enum are assigned double digits
in order not to clash with RunState.

*/
enum additionalOptions {
	EDIT_THIS_MONSTER = 21,
	DELETE_THIS_MONSTER = 22
};

/*
Declare an array, additionalOptionsStrings, of char pointers
to display the Additional functionalities to the console
for user to make a choice.

There are 2 types of additionalOptions options.
Edit, Delete
*/
const char* const additionalOptionsStrings[] = {
	"Edit Monster",
	"Delete Monster"
};

/*
Function to display all the Additional functionalities.
It loops through the additionalOptionsStrings array
and displays it to the console.
*/
const void displayAdditionalFunctions()
{
	//Display the Additional Fn Menu - Start
	cout << "======================================\n";
	cout << "What would you like to do with this record?" << endl;

	for (int i = 0; i < 2; i++) {
		cout << "2" << i + 1 << " ";
		cout << setw(20) << fixed << left;
		cout << additionalOptionsStrings[i] << endl;
	}//end of for

	cout << "\nEnter any number to return to Main Menu" << endl;
	cout << "======================================\n";
	//Display the Search Menu - End
}
//-------------------------------------------------------------------------------
/*
Declare enums for the editBiomeMonsterOptions.

The editBiomeMonsterOptions enum are assigned double digits
in order not to clash with RunState.

*/
enum editBiomeMonsterOptions {
	EDIT_MONSTER_NAME = 31,
	EDIT_MONSTER_BASE_HEALTH = 32,
	EDIT_MONSTER_CAPTURABLE = 33,
	EDIT_MONSTER_NO_OF_LEGS = 34,
	EDIT_MONSTER_LOCOMOTION = 35,
	EDIT_MONSTER_DESCRIPTION = 36,
	EDIT_MONSTER_BASE_DAMAGE = 37,
	EDIT_MONSTER_DROPS = 38,

	RETURN_TO_MAIN_MENU = -2
};

/*
Declare an array, editBiomeMonsterOptionsStrings, of char pointers
to display the Edit Monster functionalities to the console
for user to make a choice.
*/
const char* const editBiomeMonsterOptionsStrings[] = {
	"Edit Name",
	"Edit Base Health",
	"Edit Capturable",
	"Edit Number of Legs",
	"Edit Locomotion",
	"Edit Description",
	"Edit Base Damage",
	"Edit Drops"
};

/*
Function to display all the editBiomeMonsterOptionsStrings functionalities.
It loops through the editBiomeMonsterOptionsStrings array
and displays it to the console.
*/
const void displayEditMonsterFunctions()
{
	//Display the Edit Monster Fn Menu - Start
	cout << "======================================\n";
	cout << "What would you like to do with this record?" << endl;

	for (int i = 0; i < 8; i++) {
		cout << "3" << i + 1 << " ";
		cout << setw(20) << fixed << left;
		cout << editBiomeMonsterOptionsStrings[i] << endl;
	}//end of for

	cout << "\n" << "-2 Done" << endl;

	cout << "======================================\n";
	//Display the Search Menu - End
}
//-------------------------------------------------------------------------------
/*
Declare enums for the editFarmAnimalOptions.

The editFarmAnimalOptions enum are assigned double digits
in order not to clash with RunState.

*/
enum editFarmAnimalOptions {
	EDIT_ANIMAL_NAME = 41,
	EDIT_ANIMAL_BASE_HEALTH = 42,
	EDIT_ANIMAL_CAPTURABLE = 43,
	EDIT_ANIMAL_NO_OF_LEGS = 44,
	EDIT_ANIMAL_LOCOMOTION = 45,
	EDIT_ANIMAL_DESCRIPTION = 46,
	EDIT_ANIMAL_EGG_PRICE = 47,
	EDIT_ANIMAL_PRODUCE = 48
};

/*
Declare an array, editFarmAnimalOptionsStrings, of char pointers
to display the Edit Farm Animal functionalities to the console
for user to make a choice.
*/
const char* const editFarmAnimalOptionsStrings[] = {
	"Edit Name",
	"Edit Base Health",
	"Edit Capturable",
	"Edit Number of Legs",
	"Edit Locomotion",
	"Edit Description",
	"Edit Egg Price",
	"Edit Produce"
};

/*
Function to display all the editFarmAnimalOptionsStrings functionalities.
It loops through the editFarmAnimalOptionsStrings array
and displays it to the console.
*/
const void displayEditFarmAnimalFunctions()
{
	//Display the Edit Monster Fn Menu - Start
	cout << "======================================\n";
	cout << "What would you like to do with this record?" << endl;

	for (int i = 0; i < 8; i++) {
		cout << "4" << i + 1 << " ";
		cout << setw(20) << fixed << left;
		cout << editFarmAnimalOptionsStrings[i] << endl;
	}//end of for

	cout << "\n" << "-2 Done" << endl;

	cout << "======================================\n";
	//Display the Search Menu - End
}
//-------------------------------------------------------------------------------
//Fn to be displayed in Add Monster/Farm Animal methods
const void displayConfirmationDialog() {
	//prompt for next course of action
	cout << "======================================\n";
	cout << "What would you like to do next?\n\n";
	cout << "-3 Save         (Returns to Main Menu)" << endl;
	cout << "-4 Cancel       (Returns to Main Menu)" << endl;
	cout << "Any other number to Re-enter information\n" << endl;
	cout << "======================================\n";
}

/*
Main execution point of the program.
*/
void main() {
	//Declare these 2 variables to navigate the console
	int userChoice = 0;
	string str_userChoice = "";

	//Create Starboundex pointer
	Starboundex *sb = new Starboundex();

	//Call loadAllBiomeMonsters() to load all the BiomeMonster in the biomeMonsterList
	sb->loadAllBiomeMonsters();

	//Call loadAllFarmAnimals() to load all the FarmAnimal in the farmAnimalList
	sb->loadAllFarmAnimals();

	cout << "======================================\n";
	cout << "Welcome to Sherna's Awesome Starboundex!" << endl;

	//Display Menu
	displayAllFunctions();

	do {

		//read in user's choice & validate
		cout << "You entered: ";
		cin >> str_userChoice;

		//validate integer input
		userChoice = sb->validateInteger(str_userChoice, "");

		if (userChoice == SEARCH_MONSTER_OR_FARM_ANIMAL) {

			//Display what the user has chosen
			cout << "You chose: " << runStateStrings[SEARCH_MONSTER_OR_FARM_ANIMAL - 1] << endl;
			displaySearchFunctions();

			//read in user's choice
			cout << "You entered: ";
			cin >> str_userChoice;

			//validate integer input
			userChoice = sb->validateInteger(str_userChoice, "");

			//WELCOME TO 2ND LAYER IF-ELSE to determine which search type
			if (userChoice == SEARCH_BY_NAME) {
				//Display what the user has chosen
				cout << "You chose: " << searchOptionStrings[0] << endl;
				cout << "======================================\n";

				cout << "Enter the name of the Monster";
				cout << "\nPress 'Enter' to search ALL Monsters";

				cout << endl << "You entered: ";

				//Need to ignore newline of the previous cin if you use getline()
				cin.ignore();

				//get the user input
				getline(cin, str_userChoice);

				//call the searchMonsterByName() and store it in result
				vector<UniqueMonster*> result = sb->searchMonsterByName(str_userChoice);

				//WELCOME TO 3RD LAYER IF-ELSE
				//if the result vector's length is not 0 (Means there are records found)
				if (result.size() != 0) {
					//print the order no. + names of the monster only (using custom overloaded insertion stream)
					cout << result;

					cout << "\nEnter the record number you wish to view\n";
					cout << "Enter any other number to return to Main Menu\n";
					cout << "You entered: ";
					cin >> str_userChoice;
					cout << "======================================\n";

					//validate integer input
					int recordNum = 0;
					recordNum = sb->validateInteger(str_userChoice, "\nEnter the record number you wish to view\n");

					//Once the validation is done, decrement it by 1, because vector element starts from 0.
					recordNum -= 1;

					//WELCOME TO 4TH LAYER IF-ELSE
					//Validation
					//Check if what user selected exists (num is within the vector's size)
					if (recordNum >= 0 && recordNum < result.size()) {

						//Store that pointer in a new pointer declaration so that it is easier to reference
						UniqueMonster *ptr_selectedMonster = result[recordNum];

						//display the record the user wishes to view
						ptr_selectedMonster->print();

						//Display additional options (edit/delete)
						displayAdditionalFunctions();

						//read in user's choice & validate
						cout << "You entered: ";
						cin >> str_userChoice;

						//validate integer input
						userChoice = sb->validateInteger(str_userChoice, "");

						if (userChoice == EDIT_THIS_MONSTER) {
							//Display what the user has chosen
							cout << "You chose: " << additionalOptionsStrings[0] << endl;

							/*
							Use find algorith to check if selected pointer is found in biomeMonsterList.
							If its found, then its a BiomeMonster pointer.
							Otherwise, it is a FarmAnimal pointer.*/

							vector<BiomeMonster*>::iterator bm_position = find(sb->biomeMonsterList.begin(), sb->biomeMonsterList.end(), ptr_selectedMonster);

							//If found, means its a BiomeMonster
							if (bm_position != sb->biomeMonsterList.end()) {// == myVector.end() means the element was not found

								//first, do a shallow copy of the pointer so we get a name to refer to during the save changes
								BiomeMonster *shallow_ptrBiomeMonster = *bm_position;

								//do a deep copy of the pointer to temp_ptrBiomeMonster
								BiomeMonster *temp_ptrBiomeMonster = new BiomeMonster(**bm_position);

								do {
									//print the Edit functionalities menu
									displayEditMonsterFunctions();

									//read in user's choice
									cout << "You entered: ";
									cin >> str_userChoice;

									//validate integer input
									userChoice = sb->validateInteger(str_userChoice, "");

									if (userChoice == EDIT_MONSTER_NAME) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[0] << endl;
										cout << "======================================\n";

										//declare a string to store user input
										string new_name = "";

										cout << "Give a new name for " << temp_ptrBiomeMonster->getName() << endl;
										cout << "To cancel, press \'Enter\'" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, new_name);

										//if its an empty input, then assume user is not changing name
										if (new_name.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrBiomeMonster->getName() << " is satisfied with its old name!" << endl;
										}
										else {
											//check for duplicate name
											new_name = sb->validateSameName(new_name);

											//validate valid name w/ regular expressions
											new_name = sb->validateValidName(new_name);

											//set the new name on the selected monster pointer
											temp_ptrBiomeMonster->setName(new_name);
											cout << temp_ptrBiomeMonster->getName() << " is happy with its new name!" << endl;
										}

										cout << "================= OK =================" << endl;
									}
									else if (userChoice == EDIT_MONSTER_BASE_HEALTH) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[1] << endl;
										cout << "======================================\n";

										//declare variables to store user input
										string tempString = "";
										int new_baseHealth = 0;

										cout << "Enter the new base health for " << temp_ptrBiomeMonster->getName() << endl;
										cout << "To cancel, press \'Enter\'" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, tempString);

										//if its an empty input, then assume user is not changing name
										if (tempString.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrBiomeMonster->getName() << " is satisfied with just " << temp_ptrBiomeMonster->getBaseHealth() << " HP!" << endl;
										}
										else {
											//validate integer input
											new_baseHealth = sb->validateInteger(tempString, "\nEnter the new base health for " + ptr_selectedMonster->getName());

											//set the baseHealth of the monster now
											temp_ptrBiomeMonster->setBaseHealth(new_baseHealth);

											cout << temp_ptrBiomeMonster->getName() << " is now happy and healthy with " << temp_ptrBiomeMonster->getBaseHealth() << " HP!" << endl;
										}
										cout << "================= OK =================" << endl;
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_MONSTER_CAPTURABLE) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[2] << endl;
										cout << "======================================\n";

										//Call the setCapturable function, passing in the original capturable value of this monster
										temp_ptrBiomeMonster->toggleCapturable(temp_ptrBiomeMonster->getCapturable());

										//Simple if-else statement for printing out which text to display
										if (temp_ptrBiomeMonster->getCapturable().compare("Yes") == 0) {
											cout << temp_ptrBiomeMonster->getName() << " is now capturable! Hooray!" << endl;
										}
										else {
											cout << temp_ptrBiomeMonster->getName() << " is now non-capturable! Boohoo!" << endl;
										}
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_MONSTER_NO_OF_LEGS) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[3] << endl;
										cout << "======================================\n";

										//declare variables to store user input
										string tempString = "";
										int new_noOfLegs = 0;

										cout << "Enter the new number of legs for " << temp_ptrBiomeMonster->getName() << endl;
										cout << "To cancel, press \'Enter\'" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, tempString);

										//if its an empty input, then assume user is not changing name
										if (tempString.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrBiomeMonster->getName() << " is satisfied with just " << temp_ptrBiomeMonster->getNoOfLegs() << " legs!" << endl;
										}
										else {
											//validate number of legs input
											new_noOfLegs = sb->validateNoOfLegs(tempString, temp_ptrBiomeMonster->getName());

											//set the baseHealth of the monster now
											temp_ptrBiomeMonster->setNoOfLegs(new_noOfLegs);

											//simple if-else for varied response hehe
											if (temp_ptrBiomeMonster->getNoOfLegs() == 0) {
												cout << "\"No legs? No problem!\" says " << temp_ptrBiomeMonster->getName() << "." << endl;
											}
											else if (temp_ptrBiomeMonster->getNoOfLegs() == 1) {
												cout << temp_ptrBiomeMonster->getName() << " is now " << temp_ptrBiomeMonster->getNoOfLegs() << "-legged! Oh my!" << endl;
											}
											else
											{
												cout << temp_ptrBiomeMonster->getName() << " now has " << temp_ptrBiomeMonster->getNoOfLegs() << " legs! Wow!" << endl;
											}
										}
										cout << "================= OK =================" << endl;
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_MONSTER_LOCOMOTION) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[4] << endl;
										cout << "======================================\n";

										//declare variables to store user input
										string tempString = "";
										int new_locomotion = 0;

										cout << "\nHow do you want " << temp_ptrBiomeMonster->getName() << " to move?" << endl;

										//Print all locomotion types
										sb->printAllLocType();
										cout << "\nTo cancel, press \'Enter\'" << endl;
										cout << "\nYou entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, tempString);

										//if its empty input, no changes are made
										if (tempString.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrBiomeMonster->getName() << " is satisfied with just " << sb->getLocType(temp_ptrBiomeMonster->getLocomotion()) << "." << endl;
										}
										else {
											//validate locomotion
											new_locomotion = sb->validateLocomotion(tempString, temp_ptrBiomeMonster->getName());

											//set the baseHealth of the monster now
											temp_ptrBiomeMonster->setLocomotion(new_locomotion);

											//print result to console
											cout << temp_ptrBiomeMonster->getName() << " can now move by " << sb->getLocType(temp_ptrBiomeMonster->getLocomotion()) << "!" << endl;
										}
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_MONSTER_DESCRIPTION) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[5] << endl;
										cout << "======================================\n";

										//declare a string to store user input
										string new_desc = "";

										cout << "Give a new description for " << temp_ptrBiomeMonster->getName() << endl;
										cout << "To cancel, press \'Enter\'" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, new_desc);

										//if its an empty input, then assume user is not changing name
										if (new_desc.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrBiomeMonster->getName() << " is satisfied its old description." << endl;
										}
										else {
											//set the new name on the selected monster pointer
											temp_ptrBiomeMonster->setDescription(new_desc);

											cout << temp_ptrBiomeMonster->getName() << "\'s description has been changed to \"" << temp_ptrBiomeMonster->getDescription() << "\"" << endl;
										}
										cout << "================= OK =================" << endl;
									}
									else if (userChoice == EDIT_MONSTER_BASE_DAMAGE) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[6] << endl;
										cout << "======================================\n";

										//declare variables to store user input
										string tempString = "";
										int new_baseDamage = 0;

										cout << "Enter the new base damage for " << temp_ptrBiomeMonster->getName() << endl;
										cout << "To cancel, press \'Enter\'" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, tempString);

										//if its an empty input, then assume user is not changing name
										if (tempString.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrBiomeMonster->getName() << " is satisfied with base damage of " << temp_ptrBiomeMonster->getBaseDamage() << endl;
										}
										else {
											//validate integer input
											new_baseDamage = sb->validateInteger(tempString, "\nEnter the new base damage for " + temp_ptrBiomeMonster->getName());

											//set the baseHealth of the monster now
											temp_ptrBiomeMonster->setBaseDamage(new_baseDamage);

											cout << temp_ptrBiomeMonster->getName() << "\'s base damage is now " << temp_ptrBiomeMonster->getBaseDamage() << "!" << endl;
										}
										cout << "================= OK =================" << endl;
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_MONSTER_DROPS) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[7] << endl;
										cout << "======================================\n";

										//declare a string to store user input
										string new_drops = "";

										cout << "What item does " << temp_ptrBiomeMonster->getName() << " drop when killed?" << endl;
										cout << "To cancel, press \'Enter\'" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, new_drops);

										//if its empty input, assume user is not maknig any changes
										if (new_drops.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrBiomeMonster->getName() << " continues to drop " << temp_ptrBiomeMonster->getDrops() << "." << endl;
										}
										else {
											//set the new name on the selected monster pointer
											temp_ptrBiomeMonster->setDrops(new_drops);

											cout << temp_ptrBiomeMonster->getName() << " now drops " << temp_ptrBiomeMonster->getDrops() << "!" << endl;
										}
										cout << "================= OK =================" << endl;
									}
									else if (userChoice == -2) {

										//User is done editing/exiting edit menu
										//print the updated details now for user to see
										temp_ptrBiomeMonster->print();

										//prompt for next course of action
										displayConfirmationDialog();

										cout << "You entered:";

										cin.clear();
										cin.ignore();

										getline(cin, str_userChoice);

										//if its an empty input, then must prompt for input again
										str_userChoice = sb->validateEmptyString(str_userChoice, "Invalid input! Please try again.");

										//validate integer input
										userChoice = sb->validateInteger(str_userChoice, "");

										if (userChoice == SAVE_CHANGES) {
											//step 1: remove the outdated pointer from the vector
											sb->deletePointerFromVectors(shallow_ptrBiomeMonster);

											//set the pointer to NULL
											shallow_ptrBiomeMonster = NULL;

											//time to deep copy the temp pointer into the actual pointer
											shallow_ptrBiomeMonster = new BiomeMonster(*temp_ptrBiomeMonster);

											//add the new pointer to the subset vector first
											sb->biomeMonsterList.push_back(shallow_ptrBiomeMonster);

											//Create a new UniqueMonster ptr to store
											UniqueMonster *shallow_ptrUniqueMonster = shallow_ptrBiomeMonster;

											//add the new pointer to the subset vector first
											sb->uniqueMonsterList.push_back(shallow_ptrUniqueMonster);

											cout << "============= SAVED! =================\n";

											//set it to -2 to exit out of this loop
											userChoice = -2;
										}
										else if (userChoice == DISCARD_CHANGES) {
											//discard and exit
											//no, do not save changes
											//then just discard the temp_ptrBiomeMonster
											delete temp_ptrBiomeMonster;
											cout << "============ CANCELED! ===============\n";
											userChoice = -2;
										}
										else {
											//redo changes
											userChoice = 1;
										}
									}
									else {
										cout << "Stop playing around! There is no such option!" << endl;
									}

								} while (userChoice != -2);
							}
							else
							{
								//Its a FarmAnimal!

								//Get an iterator pointing to the FarmAnimal pointer
								vector<FarmAnimal*>::iterator fa_position = find(sb->farmAnimalList.begin(), sb->farmAnimalList.end(), ptr_selectedMonster);

								//first: shallow copy of original pointer so we can refer to it
								FarmAnimal *shallow_ptrFarmAnimal = *fa_position;

								//do a deep copy of the pointer to temp_ptrFarmAnimal
								FarmAnimal *temp_ptrFarmAnimal = new FarmAnimal(**fa_position);

								do {
									//print the Edit functionalities menu
									displayEditFarmAnimalFunctions();

									//read in user's choice
									cout << "You entered: ";
									cin >> str_userChoice;
									cout << "======================================\n";

									//validate inter input

									userChoice = sb->validateInteger(str_userChoice, "");

									if (userChoice == EDIT_ANIMAL_NAME) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[0] << endl;
										cout << "======================================\n";

										//declare a string to store user input
										string new_name = "";

										cout << "Give a new name for " << temp_ptrFarmAnimal->getName() << endl;
										cout << "To cancel, press \'Enter\'" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, new_name);

										//if its an empty input, then assume user is not changing name
										if (new_name.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrFarmAnimal->getName() << " is happy with its old name!" << endl;
										}
										else {
											//check for duplicate name
											new_name = sb->validateSameName(new_name);

											//validate valid name w/ regular expressions
											new_name = sb->validateValidName(new_name);

											//set the new name on the selected monster pointer
											temp_ptrFarmAnimal->setName(new_name);
											cout << temp_ptrFarmAnimal->getName() << " is happy with its new name!" << endl;
										}

										cout << "================= OK =================" << endl;
									}
									else if (userChoice == EDIT_ANIMAL_BASE_HEALTH) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[1] << endl;
										cout << "======================================\n";

										//declare variables to store user input
										string tempString = "";
										int new_baseHealth = 0;

										cout << "Enter the new base health for " << temp_ptrFarmAnimal->getName() << endl;
										cout << "To cancel, press \'Enter\'" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, tempString);

										//if its an empty input, then assume user is not changing name
										if (tempString.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrFarmAnimal->getName() << " is satisfied with just " << temp_ptrFarmAnimal->getBaseHealth() << " HP!" << endl;
										}
										else {
											//validate integer input
											new_baseHealth = sb->validateInteger(tempString, "\nEnter the new base health for " + temp_ptrFarmAnimal->getName());

											//set the baseHealth of the monster now
											temp_ptrFarmAnimal->setBaseHealth(new_baseHealth);

											cout << temp_ptrFarmAnimal->getName() << " is now happy and healthy with " << temp_ptrFarmAnimal->getBaseHealth() << " HP!" << endl;
										}
										cout << "================= OK =================" << endl;
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_ANIMAL_CAPTURABLE) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[2] << endl;
										cout << "======================================\n";

										//Call the setCapturable function, passing in the original capturable value of this monster
										temp_ptrFarmAnimal->toggleCapturable(temp_ptrFarmAnimal->getCapturable());

										//Simple if-else statement for printing out which text to display
										if (temp_ptrFarmAnimal->getCapturable().compare("Yes") == 0) {
											cout << temp_ptrFarmAnimal->getName() << " is now capturable! Hooray!" << endl;
										}
										else {
											cout << temp_ptrFarmAnimal->getName() << " is now non-capturable! Boohoo!" << endl;
										}
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_ANIMAL_NO_OF_LEGS) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[3] << endl;
										cout << "======================================\n";

										//declare variables to store user input
										string tempString = "";
										int new_noOfLegs = 0;

										cout << "Enter the new number of legs for " << temp_ptrFarmAnimal->getName() << endl;
										cout << "To cancel, press \'Enter\'" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, tempString);

										//if its an empty input, then assume user is not changing name
										if (tempString.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrFarmAnimal->getName() << " is satisfied with just " << temp_ptrFarmAnimal->getNoOfLegs() << " legs!" << endl;
										}
										else {
											//validate number of legs input
											new_noOfLegs = sb->validateNoOfLegs(tempString, temp_ptrFarmAnimal->getName());

											//set the baseHealth of the monster now
											temp_ptrFarmAnimal->setNoOfLegs(new_noOfLegs);

											//simple if-else for varied response hehe
											if (temp_ptrFarmAnimal->getNoOfLegs() == 0) {
												cout << "\"No legs? No problem!\" says " << temp_ptrFarmAnimal->getName() << "." << endl;
											}
											else if (temp_ptrFarmAnimal->getNoOfLegs() == 1) {
												cout << temp_ptrFarmAnimal->getName() << " is now " << temp_ptrFarmAnimal->getNoOfLegs() << "-legged! Oh my!" << endl;
											}
											else
											{
												cout << temp_ptrFarmAnimal->getName() << " now has " << temp_ptrFarmAnimal->getNoOfLegs() << " legs! Wow!" << endl;
											}
										}

										cout << "================= OK =================" << endl;
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_ANIMAL_LOCOMOTION) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[4] << endl;
										cout << "======================================\n";

										//declare variables to store user input
										string tempString = "";
										int new_locomotion = 0;

										cout << "\nHow does " << temp_ptrFarmAnimal->getName() << " to move?" << endl;

										//Print all locomotion types
										sb->printAllLocType();
										cout << "To cancel, press \'Enter\'" << endl;
										cout << "\nYou entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, tempString);

										//if its empty input, no changes are made
										if (tempString.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrFarmAnimal->getName() << " is satisfied with just " << sb->getLocType(temp_ptrFarmAnimal->getLocomotion()) << "." << endl;
										}
										else {
											//validate locomotion
											new_locomotion = sb->validateLocomotion(tempString, temp_ptrFarmAnimal->getName());

											//set the baseHealth of the monster now
											temp_ptrFarmAnimal->setLocomotion(new_locomotion);

											//print result to console
											cout << temp_ptrFarmAnimal->getName() << " can now move by " << sb->getLocType(temp_ptrFarmAnimal->getLocomotion()) << "!" << endl;
										}
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_ANIMAL_DESCRIPTION) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[5] << endl;
										cout << "======================================\n";

										//declare a string to store user input
										string new_desc = "";

										cout << "Give a new description for " << temp_ptrFarmAnimal->getName() << endl;
										cout << "To cancel, press \'Enter\'" << endl;
										cout << "\nYou entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, new_desc);

										//set the new name on the selected monster pointer
										temp_ptrFarmAnimal->setDescription(new_desc);

										cout << temp_ptrFarmAnimal->getName() << "\'s description has been changed to \"" << temp_ptrFarmAnimal->getDescription() << "\"" << endl;
										cout << "================= OK =================" << endl;
									}
									else if (userChoice == EDIT_ANIMAL_EGG_PRICE) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[6] << endl;
										cout << "======================================\n";

										//declare variables to store user input
										string tempString = "";
										int new_eggPrice = 0;

										cout << "Enter the new egg price for " << temp_ptrFarmAnimal->getName() << endl;
										cout << "To cancel, press \'Enter\'" << endl;
										cout << "\nYou entered: ";

										cin >> tempString;

										//validate integer input
										new_eggPrice = sb->validateInteger(tempString, "\nEnter the new egg price for " + temp_ptrFarmAnimal->getName());

										//set the baseHealth of the monster now
										temp_ptrFarmAnimal->setEggPrice(new_eggPrice);

										cout << temp_ptrFarmAnimal->getName() << "\'s egg price is now $" << temp_ptrFarmAnimal->getEggPrice() << "!" << endl;
										cout << "================= OK =================" << endl;
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_ANIMAL_PRODUCE) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[8] << endl;
										cout << "======================================\n";

										//declare a string to store user input
										string new_produce = "";

										cout << "What item does " << temp_ptrFarmAnimal->getName() << " produce?" << endl;
										cout << "To cancel, press \'Enter\'" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, new_produce);

										//set the new name on the selected monster pointer
										temp_ptrFarmAnimal->setProduce(new_produce);

										cout << temp_ptrFarmAnimal->getName() << " now produces " << temp_ptrFarmAnimal->getProduce() << "!" << endl;
										cout << "================= OK =================" << endl;
									}
									else if (userChoice == -2) {

										//User is done editing/exiting edit menu
										//print the updated details now for user to see
										temp_ptrFarmAnimal->print();

										//prompt for next course of action
										displayConfirmationDialog();

										cout << "You entered:";

										cin.clear();
										cin.ignore();

										getline(cin, str_userChoice);

										//if its an empty input, then must prompt for input again
										str_userChoice = sb->validateEmptyString(str_userChoice, "Invalid input! Please try again.");

										//validate integer input
										userChoice = sb->validateInteger(str_userChoice, "");

										if (userChoice == SAVE_CHANGES) {
											//step 1: remove the outdated pointer from the vector
											sb->deletePointerFromVectors(shallow_ptrFarmAnimal);

											//set the pointer to NULL
											shallow_ptrFarmAnimal = NULL;

											//time to deep copy the temp pointer into the actual pointer
											shallow_ptrFarmAnimal = new FarmAnimal(*temp_ptrFarmAnimal);

											//add the new pointer to the subset vector first
											sb->farmAnimalList.push_back(shallow_ptrFarmAnimal);

											//Create a new UniqueMonster ptr to store
											UniqueMonster *shallow_ptrUniqueMonster = shallow_ptrFarmAnimal;

											//add the new pointer to the subset vector first
											sb->uniqueMonsterList.push_back(shallow_ptrUniqueMonster);

											cout << "============= SAVED! =================\n";

											//set it to -2 to exit out of this loop
											userChoice = -2;
										}
										else if (userChoice == DISCARD_CHANGES) {
											//no, do not save changes
											//then just discard the shallow_ptrFarmAnimal
											delete temp_ptrFarmAnimal;
											cout << "============ CANCELED! ===============\n";
											userChoice = -2;
										}
										else {
											//redo changes
											userChoice = 1;
										}

									}
									else {
										cout << "Stop playing around! There is no such option!" << endl;
									}

								} while (userChoice != -2);
							}
							//set ptr_selectedMonster to NULL and delete ptr
							ptr_selectedMonster = NULL;
							delete ptr_selectedMonster;

						}
						else if (userChoice == DELETE_THIS_MONSTER) {
							//Display what the user has chosen
							cout << "You chose: " << additionalOptionsStrings[1] << endl;

							cout << "Are you sure you want to delete? Enter [y/n]" << endl;

							cin.ignore();
							getline(cin, str_userChoice);

							//if its an empty input, then must prompt for input again
							str_userChoice = sb->validateEmptyString(str_userChoice, "Please confirm again.\n Are you sure you want to delete? Enter [y/n]\n");

							//using the string::compare function to compare string if k are equal (0)
							while ((str_userChoice.compare("y") != 0) && (str_userChoice.compare("n") != 0)) {
								cout << "\n================ FAIL ================" << endl;
								cout << "Invalid input! Please enter [y/n]" << endl;

								cout << "Are you sure you want to delete? Enter [y/n]" << endl;
								cout << "You entered: ";

								cin >> str_userChoice;
							}

							if (str_userChoice.compare("y") == 0) {

								//call deletePointerFromList to remove the elements in both vectors & delete the pointer
								sb->deletePointerFromVectors(ptr_selectedMonster);
							}
							else {
								//do nothing
								cout << "============ CANCELED! ===============\n";
							}
						}


					}

				}
			}
			else if (userChoice == SEARCH_BY_NO_OF_LEGS) {
				//Display what the user has chosen
				cout << "You chose: " << searchOptionStrings[1] << endl;
				cout << "======================================\n";

				cout << "Enter the number of legs [0-4]";
				cout << endl << "You entered: ";

				//Need to ignore newline of the previous cin if you use getline()
				cin.ignore();

				//get the user input
				getline(cin, str_userChoice);

				//if its empty input, get for input again
				str_userChoice = sb->validateEmptyString(str_userChoice, "Number of legs cannot be empty.\nEnter the number of legs\n");

				//validate number of legs input
				int number = 0;
				number = sb->validateNoOfLegs(str_userChoice, "");

				//call the searchMonsterByName() and store it in result
				vector<UniqueMonster*> result = sb->searchMonsterByNoOfLegs(number);

				//WELCOME TO 3RD LAYER IF-ELSE
				//if the result vector's length is not 0 (Means there are records found)
				if (result.size() != 0) {
					//print the order no. + names of the monster only (using custom overloaded insertion stream)
					cout << result;

					cout << "\nEnter the record number you wish to view\n";
					cout << "Enter any other number to return to Main Menu\n";
					cout << "You entered: ";
					cin >> str_userChoice;
					cout << "======================================\n";

					//validate integer input
					int recordNum = 0;
					recordNum = sb->validateInteger(str_userChoice, "Enter the record number you wish to view\n");

					//Once the validation is done, decrement it by 1, because vector element starts from 0.
					recordNum -= 1;

					//WELCOME TO 4TH LAYER IF-ELSE
					//Validation
					//Check if what user selected exists (num is within the vector's size)
					if (recordNum >= 0 && recordNum < result.size()) {

						//Store that pointer in a new pointer declaration so that it is easier to reference
						UniqueMonster *ptr_selectedMonster = result[recordNum];

						//display the record the user wishes to view
						ptr_selectedMonster->print();

						//Display additional options (edit/delete)
						displayAdditionalFunctions();

						//read in user's choice
						cout << "You entered: ";
						cin >> str_userChoice;
						cout << "======================================\n";

						//validate integer input
						userChoice = sb->validateInteger(str_userChoice, "");

						if (userChoice == EDIT_THIS_MONSTER) {
							//Display what the user has chosen
							cout << "You chose: " << additionalOptionsStrings[0] << endl;

							vector<BiomeMonster*>::iterator bm_position = find(sb->biomeMonsterList.begin(), sb->biomeMonsterList.end(), ptr_selectedMonster);

							//If found, means its a BiomeMonster
							if (bm_position != sb->biomeMonsterList.end()) {// == myVector.end() means the element was not found

																			//first, do a shallow copy of the pointer so we get a name to refer to during the save changes
								BiomeMonster *shallow_ptrBiomeMonster = *bm_position;

								//do a deep copy of the pointer to temp_ptrBiomeMonster
								BiomeMonster *temp_ptrBiomeMonster = new BiomeMonster(**bm_position);

								do {
									//print the Edit functionalities menu
									displayEditMonsterFunctions();

									//read in user's choice
									cout << "You entered: ";
									cin >> str_userChoice;
									cout << "======================================\n";

									//validate integer input
									userChoice = sb->validateInteger(str_userChoice, "");

									if (userChoice == EDIT_MONSTER_NAME) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[0] << endl;

										//declare a string to store user input
										string new_name = "";

										cout << "Give a new name for " << temp_ptrBiomeMonster->getName() << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, new_name);

										//if its an empty input, then assume user is not changing name
										if (new_name.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrBiomeMonster->getName() << " is satisfied with its old name!" << endl;
										}
										else {
											//check for duplicate name
											new_name = sb->validateSameName(new_name);

											//validate valid name w/ regular expressions
											new_name = sb->validateValidName(new_name);

											//set the new name on the selected monster pointer
											temp_ptrBiomeMonster->setName(new_name);
											cout << temp_ptrBiomeMonster->getName() << " is happy with its new name!" << endl;
										}

										cout << "================= OK =================" << endl;
									}
									else if (userChoice == EDIT_MONSTER_BASE_HEALTH) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[1] << endl;
										cout << "======================================\n";

										//declare variables to store user input
										string tempString = "";
										int new_baseHealth = 0;

										cout << "Enter the new base health for " << temp_ptrBiomeMonster->getName() << endl;
										cout << "To cancel, press \'Enter\'" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, tempString);

										//if its an empty input, then assume user is not changing name
										if (tempString.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrBiomeMonster->getName() << " is satisfied with just " << temp_ptrBiomeMonster->getBaseHealth() << " HP!" << endl;
										}
										else {
											//validate integer input
											new_baseHealth = sb->validateInteger(tempString, "\nEnter the new base health for " + ptr_selectedMonster->getName());

											//set the baseHealth of the monster now
											temp_ptrBiomeMonster->setBaseHealth(new_baseHealth);

											cout << temp_ptrBiomeMonster->getName() << " is now happy and healthy with " << temp_ptrBiomeMonster->getBaseHealth() << " HP!" << endl;
										}
										cout << "================= OK =================" << endl;
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_MONSTER_CAPTURABLE) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[2] << endl;

										//Call the setCapturable function, passing in the original capturable value of this monster
										temp_ptrBiomeMonster->toggleCapturable(temp_ptrBiomeMonster->getCapturable());

										//Simple if-else statement for printing out which text to display
										if (temp_ptrBiomeMonster->getCapturable().compare("Yes") == 0) {
											cout << temp_ptrBiomeMonster->getName() << " is now capturable! Hooray!" << endl;
										}
										else {
											cout << temp_ptrBiomeMonster->getName() << " is now non-capturable! Boohoo!" << endl;
										}
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_MONSTER_NO_OF_LEGS) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[3] << endl;

										//declare variables to store user input
										string tempString = "";
										int new_noOfLegs = 0;

										cout << "Enter the new number of legs for " << temp_ptrBiomeMonster->getName() << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, tempString);

										//if its an empty input, then assume user is not changing name
										if (tempString.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrBiomeMonster->getName() << " is satisfied with just " << temp_ptrBiomeMonster->getNoOfLegs() << " legs!" << endl;
										}
										else {
											//validate integer input
											new_noOfLegs = sb->validateInteger(tempString, "Enter the new number of legs for " + temp_ptrBiomeMonster->getName());

											//set the baseHealth of the monster now
											temp_ptrBiomeMonster->setNoOfLegs(new_noOfLegs);

											//simple if-else for varied response hehe
											if (temp_ptrBiomeMonster->getNoOfLegs() == 0) {
												cout << "\"No legs? No problem!\" says " << temp_ptrBiomeMonster->getName() << "." << endl;
											}
											else if (temp_ptrBiomeMonster->getNoOfLegs() == 1) {
												cout << temp_ptrBiomeMonster->getName() << " is now " << temp_ptrBiomeMonster->getNoOfLegs() << "-legged! Oh my!" << endl;
											}
											else
											{
												cout << temp_ptrBiomeMonster->getName() << " now has " << temp_ptrBiomeMonster->getNoOfLegs() << " legs! Wow!" << endl;
											}
										}
										cout << "================= OK =================" << endl;
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_MONSTER_LOCOMOTION) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[4] << endl;
										cout << "======================================\n";

										//declare variables to store user input
										string tempString = "";
										int new_locomotion = 0;

										//Print all locomotion types
										sb->printAllLocType();

										cout << "How does " << temp_ptrBiomeMonster->getName() << " to move?" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, tempString);

										//if its empty input, no changes are made
										if (tempString.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrBiomeMonster->getName() << " is satisfied with just " << sb->getLocType(temp_ptrBiomeMonster->getLocomotion()) << "." << endl;
										}
										else {
											//validate locomotion
											new_locomotion = sb->validateLocomotion(tempString, temp_ptrBiomeMonster->getName());

											//set the baseHealth of the monster now
											temp_ptrBiomeMonster->setLocomotion(new_locomotion);

											//print result to console
											cout << temp_ptrBiomeMonster->getName() << " can now move by " << sb->getLocType(temp_ptrBiomeMonster->getLocomotion()) << "!" << endl;
										}
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_MONSTER_DESCRIPTION) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[5] << endl;

										//declare a string to store user input
										string new_desc = "";

										cout << "Give a new description for " << temp_ptrBiomeMonster->getName() << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, new_desc);

										//if its an empty input, then assume user is not changing name
										if (new_desc.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrBiomeMonster->getName() << " is satisfied its old description." << endl;
										}
										else {
											//set the new name on the selected monster pointer
											temp_ptrBiomeMonster->setDescription(new_desc);

											cout << temp_ptrBiomeMonster->getName() << "\'s description has been changed to \"" << temp_ptrBiomeMonster->getDescription() << "\"" << endl;
										}
										cout << "================= OK =================" << endl;
									}
									else if (userChoice == EDIT_MONSTER_BASE_DAMAGE) {

										cout << "You chose: " << editBiomeMonsterOptionsStrings[6] << endl;

										//declare variables to store user input
										string tempString = "";
										int new_baseDamage = 0;

										cout << "Enter the new base damage for " << temp_ptrBiomeMonster->getName() << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, tempString);

										//if its an empty input, then assume user is not changing name
										if (tempString.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrBiomeMonster->getName() << " is satisfied with base damage of " << temp_ptrBiomeMonster->getBaseDamage() << endl;
										}
										else {

											//validate integer input
											new_baseDamage = sb->validateInteger(tempString, "\nEnter the new base damage for " + temp_ptrBiomeMonster->getName());

											//set the baseHealth of the monster now
											temp_ptrBiomeMonster->setBaseDamage(new_baseDamage);

											cout << temp_ptrBiomeMonster->getName() << "\'s base damage is now " << temp_ptrBiomeMonster->getBaseDamage() << "!" << endl;
										}
										cout << "================= OK =================" << endl;
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_MONSTER_DROPS) {
										cout << "You chose: " << editBiomeMonsterOptionsStrings[7] << endl;

										//declare a string to store user input
										string new_drops = "";

										cout << "What item does " << temp_ptrBiomeMonster->getName() << " drop when killed?" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, new_drops);

										//if its empty input, assume user is not maknig any changes
										if (new_drops.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrBiomeMonster->getName() << " continues to drop " << temp_ptrBiomeMonster->getDrops() << "." << endl;
										}
										else {
											//set the new name on the selected monster pointer
											temp_ptrBiomeMonster->setDrops(new_drops);

											cout << temp_ptrBiomeMonster->getName() << " now drops " << temp_ptrBiomeMonster->getDrops() << "!" << endl;
										}
										cout << "================= OK =================" << endl;
									}
									else if (userChoice == -2) {
										//User is done editing/exiting edit menu
										//print the updated details now for user to see
										temp_ptrBiomeMonster->print();

										//prompt for next course of action
										displayConfirmationDialog();

										cout << "You entered:";

										cin.clear();
										cin.ignore();

										getline(cin, str_userChoice);

										//if its an empty input, then must prompt for input again
										str_userChoice = sb->validateEmptyString(str_userChoice, "Invalid input! Please try again.");

										//validate integer input
										userChoice = sb->validateInteger(str_userChoice, "");

										if (userChoice == SAVE_CHANGES) {
											//step 1: remove the outdated pointer from the vector
											sb->deletePointerFromVectors(shallow_ptrBiomeMonster);

											//set the pointer to NULL
											shallow_ptrBiomeMonster = NULL;

											//time to deep copy the temp pointer into the actual pointer
											shallow_ptrBiomeMonster = new BiomeMonster(*temp_ptrBiomeMonster);

											//add the new pointer to the subset vector first
											sb->biomeMonsterList.push_back(shallow_ptrBiomeMonster);

											//Create a new UniqueMonster ptr to store
											UniqueMonster *shallow_ptrUniqueMonster = shallow_ptrBiomeMonster;

											//add the new pointer to the subset vector first
											sb->uniqueMonsterList.push_back(shallow_ptrUniqueMonster);

											cout << "============= SAVED! =================\n";

											//set it to -2 to exit out of this loop
											userChoice = -2;
										}
										else if (userChoice == DISCARD_CHANGES) {
											//no, do not save changes
											//then just discard the shallow_ptrFarmAnimal
											delete temp_ptrBiomeMonster;
											cout << "============ CANCELED! ===============\n";
											userChoice = -2;
										}
										else {
											//redo changes
											userChoice = 1;
										}
									}
									else {
										cout << "Stop playing around! There is no such option!" << endl;
									}

								} while (userChoice != -2);
							}
							else
							{
								//Its a FarmAnimal!

								//Get an iterator pointing to the FarmAnimal pointer
								vector<FarmAnimal*>::iterator fa_position = find(sb->farmAnimalList.begin(), sb->farmAnimalList.end(), ptr_selectedMonster);

								//first: shallow copy of original pointer so we can refer to it
								FarmAnimal *shallow_ptrFarmAnimal = *fa_position;

								//do a deep copy of the pointer to temp_ptrFarmAnimal
								FarmAnimal *temp_ptrFarmAnimal = new FarmAnimal(**fa_position);

								do {
									//print the Edit functionalities menu
									displayEditFarmAnimalFunctions();

									//read in user's choice
									cout << "You entered: ";
									cin >> str_userChoice;
									cout << "======================================\n";

									//validate integer input
									userChoice = sb->validateInteger(str_userChoice, "");

									if (userChoice == EDIT_ANIMAL_NAME) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[0] << endl;

										//declare a string to store user input
										string new_name = "";

										cout << "Give a new name for " << temp_ptrFarmAnimal->getName() << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, new_name);

										//if its an empty input, then assume user is not changing name
										if (new_name.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrFarmAnimal->getName() << " is happy with its old name!" << endl;
										}
										else {
											//check for duplicate name
											new_name = sb->validateSameName(new_name);

											//validate valid name w/ regular expressions
											new_name = sb->validateValidName(new_name);

											//set the new name on the selected monster pointer
											temp_ptrFarmAnimal->setName(new_name);
											cout << temp_ptrFarmAnimal->getName() << " is happy with its new name!" << endl;
										}

										cout << "================= OK =================" << endl;
									}
									else if (userChoice == EDIT_ANIMAL_BASE_HEALTH) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[1] << endl;

										//declare variables to store user input
										string tempString = "";
										int new_baseHealth = 0;

										cout << "Enter the new base health for " << temp_ptrFarmAnimal->getName() << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, tempString);

										//if its an empty input, then assume user is not changing name
										if (tempString.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrFarmAnimal->getName() << " is satisfied with just " << temp_ptrFarmAnimal->getBaseHealth() << " HP!" << endl;
										}
										else {
											//validate integer input
											new_baseHealth = sb->validateInteger(tempString, "\nEnter the new base health for " + temp_ptrFarmAnimal->getName());

											//set the baseHealth of the monster now
											temp_ptrFarmAnimal->setBaseHealth(new_baseHealth);

											cout << temp_ptrFarmAnimal->getName() << " is now happy and healthy with " << temp_ptrFarmAnimal->getBaseHealth() << " HP!" << endl;
										}
										cout << "================= OK =================" << endl;
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_ANIMAL_CAPTURABLE) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[2] << endl;

										//Call the setCapturable function, passing in the original capturable value of this monster
										temp_ptrFarmAnimal->toggleCapturable(temp_ptrFarmAnimal->getCapturable());

										//Simple if-else statement for printing out which text to display
										if (temp_ptrFarmAnimal->getCapturable().compare("Yes") == 0) {
											cout << temp_ptrFarmAnimal->getName() << " is now capturable! Hooray!" << endl;
										}
										else {
											cout << temp_ptrFarmAnimal->getName() << " is now non-capturable! Boohoo!" << endl;
										}
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_ANIMAL_NO_OF_LEGS) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[3] << endl;

										//declare variables to store user input
										string tempString = "";
										int new_noOfLegs = 0;

										cout << "Enter the new number of legs for " << temp_ptrFarmAnimal->getName() << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, tempString);

										//if its an empty input, then assume user is not changing name
										if (tempString.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrFarmAnimal->getName() << " is satisfied with just " << temp_ptrFarmAnimal->getNoOfLegs() << " legs!" << endl;
										}
										else {
											//validate integer input
											new_noOfLegs = sb->validateInteger(tempString, "\nEnter the new number of legs for " + temp_ptrFarmAnimal->getName());

											//set the baseHealth of the monster now
											temp_ptrFarmAnimal->setNoOfLegs(new_noOfLegs);

											//simple if-else for varied response hehe
											if (temp_ptrFarmAnimal->getNoOfLegs() == 0) {
												cout << "\"No legs? No problem!\" says " << temp_ptrFarmAnimal->getName() << "." << endl;
											}
											else if (temp_ptrFarmAnimal->getNoOfLegs() == 1) {
												cout << temp_ptrFarmAnimal->getName() << " is now " << temp_ptrFarmAnimal->getNoOfLegs() << "-legged! Oh my!" << endl;
											}
											else
											{
												cout << temp_ptrFarmAnimal->getName() << " now has " << temp_ptrFarmAnimal->getNoOfLegs() << " legs! Wow!" << endl;
											}
										}

										cout << "================= OK =================" << endl;
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_ANIMAL_LOCOMOTION) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[4] << endl;

										//declare variables to store user input
										string tempString = "";
										int new_locomotion = 0;

										//Print all locomotion types
										sb->printAllLocType();

										cout << "How do you want " << temp_ptrFarmAnimal->getName() << " to move?" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, tempString);

										//if its empty input, no changes are made
										if (tempString.compare("") == 0) {
											cout << "No changes made." << endl;
											cout << temp_ptrFarmAnimal->getName() << " is satisfied with just " << sb->getLocType(temp_ptrFarmAnimal->getLocomotion()) << "." << endl;
										}
										else {
											//validate locomotion
											new_locomotion = sb->validateLocomotion(tempString, temp_ptrFarmAnimal->getName());

											//set the baseHealth of the monster now
											temp_ptrFarmAnimal->setLocomotion(new_locomotion);

											//print result to console
											cout << temp_ptrFarmAnimal->getName() << " can now move by " << sb->getLocType(temp_ptrFarmAnimal->getLocomotion()) << "!" << endl;
										}
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_ANIMAL_DESCRIPTION) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[5] << endl;

										//declare a string to store user input
										string new_desc = "";

										cout << "Give a new description for " << temp_ptrFarmAnimal->getName() << endl;
										cout << "\nYou entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, new_desc);

										//set the new name on the selected monster pointer
										temp_ptrFarmAnimal->setDescription(new_desc);

										cout << temp_ptrFarmAnimal->getName() << "\'s description has been changed to \"" << temp_ptrFarmAnimal->getDescription() << "\"" << endl;
										cout << "================= OK =================" << endl;
									}
									else if (userChoice == EDIT_ANIMAL_EGG_PRICE) {

										cout << "You chose: " << editFarmAnimalOptionsStrings[6] << endl;

										//declare variables to store user input
										string tempString = "";
										int new_eggPrice = 0;

										cout << "Enter the new egg price for " << temp_ptrFarmAnimal->getName() << endl;
										cout << "\nYou entered: ";

										cin >> tempString;

										//validate integer input
										new_eggPrice = sb->validateInteger(tempString, "Enter the new egg price for " + temp_ptrFarmAnimal->getName());

										//set the baseHealth of the monster now
										temp_ptrFarmAnimal->setEggPrice(new_eggPrice);

										cout << temp_ptrFarmAnimal->getName() << "\'s egg price is now $" << temp_ptrFarmAnimal->getEggPrice() << "!" << endl;
										cout << "================= OK =================" << endl;
										//--------------------------------------------------------------------
									}
									else if (userChoice == EDIT_ANIMAL_PRODUCE) {
										cout << "You chose: " << editFarmAnimalOptionsStrings[7] << endl;

										//declare a string to store user input
										string new_produce = "";

										cout << "What item does " << temp_ptrFarmAnimal->getName() << " produce?" << endl;
										cout << "You entered: ";

										//get the input from console
										cin.ignore();
										getline(cin, new_produce);

										//set the new name on the selected monster pointer
										temp_ptrFarmAnimal->setProduce(new_produce);

										cout << temp_ptrFarmAnimal->getName() << " now produces " << temp_ptrFarmAnimal->getProduce() << "!" << endl;
										cout << "================= OK =================" << endl;
									}
									else if (userChoice == -2) {

										//User is done editing/exiting edit menu, print the updated details now for user to see
										temp_ptrFarmAnimal->print();

										//prompt for next course of action
										displayConfirmationDialog();

										cout << "You entered:";

										cin.clear();
										cin.ignore();

										getline(cin, str_userChoice);

										//if its an empty input, then must prompt for input again
										str_userChoice = sb->validateEmptyString(str_userChoice, "Invalid input! Please try again.");

										//validate integer input
										userChoice = sb->validateInteger(str_userChoice, "");

										if (userChoice == SAVE_CHANGES) {
											//step 1: remove the outdated pointer from the vector
											sb->deletePointerFromVectors(shallow_ptrFarmAnimal);

											//set the pointer to NULL
											shallow_ptrFarmAnimal = NULL;

											//time to deep copy the temp pointer into the actual pointer
											shallow_ptrFarmAnimal = new FarmAnimal(*temp_ptrFarmAnimal);

											//add the new pointer to the subset vector first
											sb->farmAnimalList.push_back(shallow_ptrFarmAnimal);

											//Create a new UniqueMonster ptr to store
											UniqueMonster *shallow_ptrUniqueMonster = shallow_ptrFarmAnimal;

											//add the new pointer to the subset vector first
											sb->uniqueMonsterList.push_back(shallow_ptrUniqueMonster);

											cout << "============= SAVED! =================\n";

											//set it to -2 to exit out of this loop
											userChoice = -2;
										}
										else if (userChoice == DISCARD_CHANGES) {
											//no, do not save changes
											//then just discard the shallow_ptrFarmAnimal
											delete temp_ptrFarmAnimal;
											cout << "============ CANCELED! ===============\n";
											userChoice = -2;
										}
										else {
											//redo changes
											userChoice = 1;
										}
									}
									else {
										cout << "Stop playing around! There is no such option!" << endl;
									}

								} while (userChoice != -2);
							}

							//set ptr_selectedMonster to NULL and delete ptr
							ptr_selectedMonster = NULL;
							delete ptr_selectedMonster;

						}
						else if (userChoice == DELETE_THIS_MONSTER) {
							//Display what the user has chosen
							cout << "You chose: " << additionalOptionsStrings[1] << endl;

							//call deletePointerFromList to remove the elements in both vectors & delete the pointer
							sb->deletePointerFromVectors(ptr_selectedMonster);
						}


					}

				}
				//result vector's size is 0 (No records found)
				else {
					cout << "There is no Monster with " << number << " legs." << endl;

				}
			}
			else {
				cout << "Back to main menu." << endl;
			}

		}

		else if (userChoice == ADD_NEW_BIOME_MONSTER) {
			//Display what the user has chosen
			cout << "You chose: " << runStateStrings[ADD_NEW_BIOME_MONSTER - 1] << endl;
			cout << "======================================\n";

			//Create a default pointer first
			BiomeMonster *new_ptrBiomeMonster = new BiomeMonster();

			//--------------INITIALIZATION STEP - START----------------
			string tempString = "";

			string name = "";
			int baseHealth = 0;
			string capturable = "";
			int noOfLegs = 0;
			int locomotion = 0;
			string description = "";

			int baseDamage = 0;
			string drops = "";
			//--------------------------------------------------------------------
			//Get name input. If its empty, keep prompting until no longer empty
			cout << "Please enter name of Biome Monster" << endl;
			cout << "You entered: ";

			cin.ignore();
			//get the user input
			getline(cin, name);

			//check for duplicate name
			name = sb->validateSameName(name);

			//validate valid name w/ regular expressions
			name = sb->validateValidName(name);

			cout << "\n================= OK =================" << endl;
			//--------------------------------------------------------------------
			cout << "Please enter base health of " << name << endl;
			cout << "You entered: ";

			//get the input from console
			getline(cin, tempString);

			//if its an empty input, then must prompt for input again
			tempString = sb->validateEmptyString(tempString, "Base health cannot be empty.\nPlease enter base health of " + name + "\n");

			//validate integer input
			baseHealth = sb->validateInteger(tempString, "Please enter baseHealth of " + name);

			cout << "\n================= OK =================" << endl;
			//--------------------------------------------------------------------
			cout << "Can " << name << " be captured? Enter [y/n]" << endl;
			cout << "You entered: ";

			getline(cin, tempString);

			//if its an empty input, then must prompt for input again
			tempString = sb->validateEmptyString(tempString, "Capturable cannot be empty.\nCan " + name + " be captured? Enter [y/n]" + "\n");

			//using the string::compare function to compare string if k are equal (0)
			while ((tempString.compare("y") != 0) && (tempString.compare("n") != 0)) {
				cout << "\n================ FAIL ================" << endl;
				cout << "Invalid input! Please enter [y/n]" << endl;

				cout << "Can " << name << " be captured? Enter [y/n]" << endl;
				cout << "You entered: ";

				cin >> tempString;
			}

			//just store tempString directly into capturable
			capturable = tempString;

			cout << "\n================= OK =================" << endl;
			//--------------------------------------------------------------------

			cout << "How many legs does " << name << " have? Enter [0-4]" << endl;
			cout << "You entered: ";

			getline(cin, tempString);

			//if its an empty input, then must prompt for input again
			tempString = sb->validateEmptyString(tempString, "Number of legs cannot be empty.\nHow many legs does " + name + " have? Enter [0-4]" + "\n");

			//validate number of legs
			noOfLegs = sb->validateNoOfLegs(tempString, name);
			cout << "\n================= OK =================" << endl;
			//--------------------------------------------------------------------
			cout << "How does " << name << " move?" << endl;

			//Print all locomotion types
			sb->printAllLocType();
			cout << endl << "You entered: ";
			getline(cin, tempString);

			//if its an empty input, then must prompt for input again
			tempString = sb->validateEmptyString(tempString, "Locomotion cannot be empty.\nHow does " + name + " move? " + "\n");

			//validate locomotion
			locomotion = sb->validateLocomotion(tempString, name);
			cout << "\n================= OK =================" << endl;
			//--------------------------------------------------------------------
			cout << "Please give a description for " << name << endl;
			cout << "You entered: ";

			//get the user input
			getline(cin, description);

			//if its an empty input, then must prompt for input again
			description = sb->validateEmptyString(description, "Description cannot be empty.\nPlease give a description for " + name + "\n");

			cout << "\n================= OK =================" << endl;
			//--------------------------------------------------------------------
			cout << "Please enter base damage for " << name << endl;
			cout << "You entered: ";

			//get the user input
			getline(cin, tempString);

			//if its an empty input, then must prompt for input again
			tempString = sb->validateEmptyString(tempString, "Base Damage cannot be empty.\nPlease enter base damage for " + name + "\n");

			//validate integer input
			baseDamage = sb->validateInteger(tempString, "Please enter base damage for  " + name);

			cout << "\n================= OK =================" << endl;
			//--------------------------------------------------------------------
			cout << endl << "What item does " << name << " drop when killed?" << endl;
			cout << "You entered: ";

			//get the user input
			getline(cin, drops);

			//if its an empty input, then must prompt for input again
			drops = sb->validateEmptyString(drops, "Drops cannot be empty.\nWhat item does " + name + " drop when killed?" + "\n");

			cout << "\n================= OK =================" << endl;
			//--------------INITIALIZATION STEP - end----------------

			//set all the member variables and print it
			new_ptrBiomeMonster->setAllMemberVariablesAndPrint(name, baseHealth, capturable, noOfLegs, locomotion, description, baseDamage, drops);

			//-------------------------------------------------------------------------------------HEY
			do {
				//print the Edit functionalities menu
				displayEditMonsterFunctions();

				//read in user's choice
				cout << "You entered: ";
				cin >> str_userChoice;

				//validate integer input
				userChoice = sb->validateInteger(str_userChoice, "");

				if (userChoice == EDIT_MONSTER_NAME) {
					cout << "You chose: " << editBiomeMonsterOptionsStrings[0] << endl;
					cout << "======================================\n";

					//declare a string to store user input
					string new_name = "";

					cout << "Give a new name for " << new_ptrBiomeMonster->getName() << endl;
					cout << "To cancel, press \'Enter\'" << endl;
					cout << "You entered: ";

					//get the input from console
					cin.ignore();
					getline(cin, new_name);

					//if its an empty input, then assume user is not changing name
					if (new_name.compare("") == 0) {
						cout << "No changes made." << endl;
						cout << new_ptrBiomeMonster->getName() << " is satisfied with its old name!" << endl;
					}
					else {
						//check for duplicate name
						new_name = sb->validateSameName(new_name);

						//validate valid name w/ regular expressions
						new_name = sb->validateValidName(new_name);

						//set the new name on the selected monster pointer
						new_ptrBiomeMonster->setName(new_name);
						cout << new_ptrBiomeMonster->getName() << " is happy with its new name!" << endl;
					}

					cout << "================= OK =================" << endl;
				}
				else if (userChoice == EDIT_MONSTER_BASE_HEALTH) {
					cout << "You chose: " << editBiomeMonsterOptionsStrings[1] << endl;
					cout << "======================================\n";

					//declare variables to store user input
					string tempString = "";
					int new_baseHealth = 0;

					cout << "Enter the new base health for " << new_ptrBiomeMonster->getName() << endl;
					cout << "To cancel, press \'Enter\'" << endl;
					cout << "You entered: ";

					//get the input from console
					cin.ignore();
					getline(cin, tempString);

					//if its an empty input, then assume user is not changing name
					if (tempString.compare("") == 0) {
						cout << "No changes made." << endl;
						cout << new_ptrBiomeMonster->getName() << " is satisfied with just " << new_ptrBiomeMonster->getBaseHealth() << " HP!" << endl;
					}
					else {
						//validate integer input
						new_baseHealth = sb->validateInteger(tempString, "\nEnter the new base health for " + new_ptrBiomeMonster->getName());

						//set the baseHealth of the monster now
						new_ptrBiomeMonster->setBaseHealth(new_baseHealth);

						cout << new_ptrBiomeMonster->getName() << " is now happy and healthy with " << new_ptrBiomeMonster->getBaseHealth() << " HP!" << endl;
					}
					cout << "================= OK =================" << endl;
					//--------------------------------------------------------------------
				}
				else if (userChoice == EDIT_MONSTER_CAPTURABLE) {
					cout << "You chose: " << editBiomeMonsterOptionsStrings[2] << endl;
					cout << "======================================\n";

					//Call the setCapturable function, passing in the original capturable value of this monster
					new_ptrBiomeMonster->toggleCapturable(new_ptrBiomeMonster->getCapturable());

					//Simple if-else statement for printing out which text to display
					if (new_ptrBiomeMonster->getCapturable().compare("Yes") == 0) {
						cout << new_ptrBiomeMonster->getName() << " is now capturable! Hooray!" << endl;
					}
					else {
						cout << new_ptrBiomeMonster->getName() << " is now non-capturable! Boohoo!" << endl;
					}
					//--------------------------------------------------------------------
				}
				else if (userChoice == EDIT_MONSTER_NO_OF_LEGS) {
					cout << "You chose: " << editBiomeMonsterOptionsStrings[3] << endl;
					cout << "======================================\n";

					//declare variables to store user input
					string tempString = "";
					int new_noOfLegs = 0;

					cout << "Enter the new number of legs for " << new_ptrBiomeMonster->getName() << endl;
					cout << "To cancel, press \'Enter\'" << endl;
					cout << "You entered: ";

					//get the input from console
					cin.ignore();
					getline(cin, tempString);

					//if its an empty input, then assume user is not changing name
					if (tempString.compare("") == 0) {
						cout << "No changes made." << endl;
						cout << new_ptrBiomeMonster->getName() << " is satisfied with just " << new_ptrBiomeMonster->getNoOfLegs() << " legs!" << endl;
					}
					else {
						//validate number of legs input
						new_noOfLegs = sb->validateNoOfLegs(tempString, new_ptrBiomeMonster->getName());

						//set the baseHealth of the monster now
						new_ptrBiomeMonster->setNoOfLegs(new_noOfLegs);

						//simple if-else for varied response hehe
						if (new_ptrBiomeMonster->getNoOfLegs() == 0) {
							cout << "\"No legs? No problem!\" says " << new_ptrBiomeMonster->getName() << "." << endl;
						}
						else if (new_ptrBiomeMonster->getNoOfLegs() == 1) {
							cout << new_ptrBiomeMonster->getName() << " is now " << new_ptrBiomeMonster->getNoOfLegs() << "-legged! Oh my!" << endl;
						}
						else
						{
							cout << new_ptrBiomeMonster->getName() << " now has " << new_ptrBiomeMonster->getNoOfLegs() << " legs! Wow!" << endl;
						}
					}
					cout << "================= OK =================" << endl;
					//--------------------------------------------------------------------
				}
				else if (userChoice == EDIT_MONSTER_LOCOMOTION) {
					cout << "You chose: " << editBiomeMonsterOptionsStrings[4] << endl;
					cout << "======================================\n";

					//declare variables to store user input
					string tempString = "";
					int new_locomotion = 0;

					cout << "\nHow do you want " << new_ptrBiomeMonster->getName() << " to move?" << endl;

					//Print all locomotion types
					sb->printAllLocType();
					cout << "\nTo cancel, press \'Enter\'" << endl;
					cout << "\nYou entered: ";

					//get the input from console
					cin.ignore();
					getline(cin, tempString);

					//if its empty input, no changes are made
					if (tempString.compare("") == 0) {
						cout << "No changes made." << endl;
						cout << new_ptrBiomeMonster->getName() << " is satisfied with just " << sb->getLocType(new_ptrBiomeMonster->getLocomotion()) << "." << endl;
					}
					else {
						//validate locomotion
						new_locomotion = sb->validateLocomotion(tempString, new_ptrBiomeMonster->getName());

						//set the baseHealth of the monster now
						new_ptrBiomeMonster->setLocomotion(new_locomotion);

						//print result to console
						cout << new_ptrBiomeMonster->getName() << " can now move by " << sb->getLocType(new_ptrBiomeMonster->getLocomotion()) << "!" << endl;
					}
					//--------------------------------------------------------------------
				}
				else if (userChoice == EDIT_MONSTER_DESCRIPTION) {
					cout << "You chose: " << editBiomeMonsterOptionsStrings[5] << endl;
					cout << "======================================\n";

					//declare a string to store user input
					string new_desc = "";

					cout << "Give a new description for " << new_ptrBiomeMonster->getName() << endl;
					cout << "To cancel, press \'Enter\'" << endl;
					cout << "You entered: ";

					//get the input from console
					cin.ignore();
					getline(cin, new_desc);

					//if its an empty input, then assume user is not changing name
					if (new_desc.compare("") == 0) {
						cout << "No changes made." << endl;
						cout << new_ptrBiomeMonster->getName() << " is satisfied its old description." << endl;
					}
					else {
						//set the new name on the selected monster pointer
						new_ptrBiomeMonster->setDescription(new_desc);

						cout << new_ptrBiomeMonster->getName() << "\'s description has been changed to \"" << new_ptrBiomeMonster->getDescription() << "\"" << endl;
					}
					cout << "================= OK =================" << endl;
				}
				else if (userChoice == EDIT_MONSTER_BASE_DAMAGE) {
					cout << "You chose: " << editBiomeMonsterOptionsStrings[6] << endl;
					cout << "======================================\n";

					//declare variables to store user input
					string tempString = "";
					int new_baseDamage = 0;

					cout << "Enter the new base damage for " << new_ptrBiomeMonster->getName() << endl;
					cout << "To cancel, press \'Enter\'" << endl;
					cout << "You entered: ";

					//get the input from console
					cin.ignore();
					getline(cin, tempString);

					//if its an empty input, then assume user is not changing name
					if (tempString.compare("") == 0) {
						cout << "No changes made." << endl;
						cout << new_ptrBiomeMonster->getName() << " is satisfied with base damage of " << new_ptrBiomeMonster->getBaseDamage() << endl;
					}
					else {
						//validate integer input
						new_baseDamage = sb->validateInteger(tempString, "\nEnter the new base damage for " + new_ptrBiomeMonster->getName());

						//set the baseHealth of the monster now
						new_ptrBiomeMonster->setBaseDamage(new_baseDamage);

						cout << new_ptrBiomeMonster->getName() << "\'s base damage is now " << new_ptrBiomeMonster->getBaseDamage() << "!" << endl;
					}
					cout << "================= OK =================" << endl;
					//--------------------------------------------------------------------
				}
				else if (userChoice == EDIT_MONSTER_DROPS) {
					cout << "You chose: " << editBiomeMonsterOptionsStrings[7] << endl;
					cout << "======================================\n";

					//declare a string to store user input
					string new_drops = "";

					cout << "What item does " << new_ptrBiomeMonster->getName() << " drop when killed?" << endl;
					cout << "To cancel, press \'Enter\'" << endl;
					cout << "You entered: ";

					//get the input from console
					cin.ignore();
					getline(cin, new_drops);

					//if its empty input, assume user is not maknig any changes
					if (new_drops.compare("") == 0) {
						cout << "No changes made." << endl;
						cout << new_ptrBiomeMonster->getName() << " continues to drop " << new_ptrBiomeMonster->getDrops() << "." << endl;
					}
					else {
						//set the new name on the selected monster pointer
						new_ptrBiomeMonster->setDrops(new_drops);

						cout << new_ptrBiomeMonster->getName() << " now drops " << new_ptrBiomeMonster->getDrops() << "!" << endl;
					}
					cout << "================= OK =================" << endl;
				}
				else if (userChoice == -2) {

					//User is done editing/exiting edit menu
					//print the updated details now for user to see
					new_ptrBiomeMonster->print();

					//prompt for next course of action
					displayConfirmationDialog();

					cout << "You entered:";

					cin.clear();
					cin.ignore();

					getline(cin, str_userChoice);

					//if its an empty input, then must prompt for input again
					str_userChoice = sb->validateEmptyString(str_userChoice, "Invalid input! Please try again.");

					//validate integer input
					userChoice = sb->validateInteger(str_userChoice, "");

					if (userChoice == SAVE_CHANGES) {
						//add the pointer into the vector, biomeMonsterList
						sb->biomeMonsterList.push_back(new_ptrBiomeMonster);

						//Store the biomeMonster pointer into UniqueMonster pointer
						UniqueMonster *new_ptrUM = new_ptrBiomeMonster;

						//store the uniqueMonster pointer in the uniqueMonsterList
						sb->uniqueMonsterList.push_back(new_ptrUM);

						cout << "============= SAVED! =================\n";

						//set it to -2 to exit out of this loop
						userChoice = -2;
					}
					else if (userChoice == DISCARD_CHANGES) {
						//delete the pointer and set to null
						delete new_ptrBiomeMonster;
						new_ptrBiomeMonster = NULL;
						cout << "============ CANCELED! ===============\n";

						//set to -2 to return to main menu
						userChoice = -2;
					}
					else {
						//redo changes
						userChoice = 1;
					}
				}
				else {
					cout << "Stop playing around! There is no such option!" << endl;
				}

			} while (userChoice != -2);
		}
		else if (userChoice == ADD_NEW_FARM_ANIMAL) {
			//Display what the user has chosen
			cout << "You chose: " << runStateStrings[ADD_NEW_FARM_ANIMAL - 1] << endl;
			cout << "======================================\n";

			//Create a default pointer first
			FarmAnimal *new_ptrFarmAnimal = new FarmAnimal();

			//--------------INITIALIZATION STEP - START----------------
			string tempString = "";

			string name = "";
			int baseHealth = 0;
			string capturable = "";
			int noOfLegs = 0;
			int locomotion = 0;
			string description = "";

			int eggPrice = 0;
			string produce = "";
			//--------------------------------------------------------------------
			//Get name input. If its empty, keep prompting until no longer empty
			cout << "Please enter name of Farm Animal" << endl;
			cout << "You entered: ";

			cin.ignore();
			//get the user input
			getline(cin, name);

			//check for duplicate name
			name = sb->validateSameName(name);

			//validate valid name w/ regular expressions
			name = sb->validateValidName(name);

			cout << "\n================= OK =================" << endl;
			//--------------------------------------------------------------------
			cout << "Please enter base health of " << name << endl;
			cout << "You entered: ";

			//get the input from console
			getline(cin, tempString);

			//if its an empty input, then must prompt for input again
			tempString = sb->validateEmptyString(tempString, "Base health cannot be empty.\nPlease enter base health of " + name + "\n");

			//validate integer input
			baseHealth = sb->validateInteger(tempString, "Please enter baseHealth of " + name);

			cout << "\n================= OK =================" << endl;
			//--------------------------------------------------------------------
			cout << "Can " << name << " be captured? Enter [y/n]" << endl;
			cout << "You entered: ";

			getline(cin, tempString);

			//if its an empty input, then must prompt for input again
			tempString = sb->validateEmptyString(tempString, "Capturable cannot be empty.\nCan " + name + " be captured? Enter [y/n]" + "\n");

			//using the string::compare function to compare string if k are equal (0)
			while ((tempString.compare("y") != 0) && (tempString.compare("n") != 0)) {
				cout << "\n================ FAIL ================" << endl;
				cout << "Invalid input! Please enter [y/n]" << endl;

				cout << "Can " << name << " be captured? Enter [y/n]" << endl;
				cout << "You entered: ";

				cin >> tempString;
			}

			//just store tempString directly into capturable
			capturable = tempString;

			cout << "\n================= OK =================" << endl;
			//--------------------------------------------------------------------

			cout << "How many legs does " << name << " have? Enter [0-4]" << endl;
			cout << "You entered: ";

			getline(cin, tempString);

			//if its an empty input, then must prompt for input again
			tempString = sb->validateEmptyString(tempString, "Number of legs cannot be empty.\nHow many legs does " + name + " have? Enter [0-4]" + "\n");

			//validate number of legs
			noOfLegs = sb->validateNoOfLegs(tempString, name);
			cout << "\n================= OK =================" << endl;
			//--------------------------------------------------------------------
			cout << "How does " << name << " move?" << endl;

			//Print all locomotion types
			sb->printAllLocType();
			cout << endl << "You entered: ";
			getline(cin, tempString);

			//if its an empty input, then must prompt for input again
			tempString = sb->validateEmptyString(tempString, "Locomotion cannot be empty.\nHow does " + name + " move? " + "\n");

			//validate locomotion
			locomotion = sb->validateLocomotion(tempString, name);
			cout << "\n================= OK =================" << endl;
			//--------------------------------------------------------------------
			cout << "Please give a description for " << name << endl;
			cout << "You entered: ";

			//get the user input
			getline(cin, description);

			//if its an empty input, then must prompt for input again
			description = sb->validateEmptyString(description, "Description cannot be empty.\nPlease give a description for " + name + "\n");

			cout << "\n================= OK =================" << endl;
			//--------------------------------------------------------------------
			cout << "Please enter egg price for " << name << endl;
			cout << "You entered: ";

			//get the user input
			getline(cin, tempString);

			//if its an empty input, then must prompt for input again
			tempString = sb->validateEmptyString(tempString, "Egg price cannot be empty.\nPlease enter egg price for " + name + "\n");

			//validate integer input
			eggPrice = sb->validateInteger(tempString, "Please enter egg price for  " + name);

			cout << "\n================= OK =================" << endl;
			//--------------------------------------------------------------------
			cout << endl << "What item does " << name << " produce?" << endl;
			cout << "You entered: ";

			//get the user input
			getline(cin, produce);

			//if its an empty input, then must prompt for input again
			produce = sb->validateEmptyString(produce, "Produce cannot be empty.\nWhat item does " + name + " produce?" + "\n");

			cout << "\n================= OK =================" << endl;
			//--------------INITIALIZATION STEP - end----------------

			//set all the member variables and print it
			new_ptrFarmAnimal->setAllMemberVariablesAndPrint(name, baseHealth, capturable, noOfLegs, locomotion, description, eggPrice, produce);

			//-------------------------------------------------------------------------------------HEY
			do {
				//print the Edit functionalities menu
				displayEditFarmAnimalFunctions();

				//read in user's choice
				cout << "You entered: ";
				cin >> str_userChoice;

				//validate integer input
				userChoice = sb->validateInteger(str_userChoice, "");

				if (userChoice == EDIT_ANIMAL_NAME) {
					cout << "You chose: " << editFarmAnimalOptionsStrings[0] << endl;
					cout << "======================================\n";

					//declare a string to store user input
					string new_name = "";

					cout << "Give a new name for " << new_ptrFarmAnimal->getName() << endl;
					cout << "To cancel, press \'Enter\'" << endl;
					cout << "You entered: ";

					//get the input from console
					cin.ignore();
					getline(cin, new_name);

					//if its an empty input, then assume user is not changing name
					if (new_name.compare("") == 0) {
						cout << "No changes made." << endl;
						cout << new_ptrFarmAnimal->getName() << " is satisfied with its old name!" << endl;
					}
					else {
						//check for duplicate name
						new_name = sb->validateSameName(new_name);

						//validate valid name w/ regular expressions
						new_name = sb->validateValidName(new_name);

						//set the new name on the selected monster pointer
						new_ptrFarmAnimal->setName(new_name);
						cout << new_ptrFarmAnimal->getName() << " is happy with its new name!" << endl;
					}

					cout << "================= OK =================" << endl;
				}
				else if (userChoice == EDIT_ANIMAL_BASE_HEALTH) {
					cout << "You chose: " << editFarmAnimalOptionsStrings[1] << endl;
					cout << "======================================\n";

					//declare variables to store user input
					string tempString = "";
					int new_baseHealth = 0;

					cout << "Enter the new base health for " << new_ptrFarmAnimal->getName() << endl;
					cout << "To cancel, press \'Enter\'" << endl;
					cout << "You entered: ";

					//get the input from console
					cin.ignore();
					getline(cin, tempString);

					//if its an empty input, then assume user is not changing name
					if (tempString.compare("") == 0) {
						cout << "No changes made." << endl;
						cout << new_ptrFarmAnimal->getName() << " is satisfied with just " << new_ptrFarmAnimal->getBaseHealth() << " HP!" << endl;
					}
					else {
						//validate integer input
						new_baseHealth = sb->validateInteger(tempString, "\nEnter the new base health for " + new_ptrFarmAnimal->getName());

						//set the baseHealth of the monster now
						new_ptrFarmAnimal->setBaseHealth(new_baseHealth);

						cout << new_ptrFarmAnimal->getName() << " is now happy and healthy with " << new_ptrFarmAnimal->getBaseHealth() << " HP!" << endl;
					}
					cout << "================= OK =================" << endl;
					//--------------------------------------------------------------------
				}
				else if (userChoice == EDIT_ANIMAL_CAPTURABLE) {
					cout << "You chose: " << editFarmAnimalOptionsStrings[2] << endl;
					cout << "======================================\n";

					//Call the setCapturable function, passing in the original capturable value of this monster
					new_ptrFarmAnimal->setCapturable(new_ptrFarmAnimal->getCapturable());

					//Simple if-else statement for printing out which text to display
					if (new_ptrFarmAnimal->getCapturable().compare("Yes") == 0) {
						cout << new_ptrFarmAnimal->getName() << " is now capturable! Hooray!" << endl;
					}
					else {
						cout << new_ptrFarmAnimal->getName() << " is now non-capturable! Boohoo!" << endl;
					}
					//--------------------------------------------------------------------
				}
				else if (userChoice == EDIT_ANIMAL_NO_OF_LEGS) {
					cout << "You chose: " << editFarmAnimalOptionsStrings[3] << endl;
					cout << "======================================\n";

					//declare variables to store user input
					string tempString = "";
					int new_noOfLegs = 0;

					cout << "Enter the new number of legs for " << new_ptrFarmAnimal->getName() << endl;
					cout << "To cancel, press \'Enter\'" << endl;
					cout << "You entered: ";

					//get the input from console
					cin.ignore();
					getline(cin, tempString);

					//if its an empty input, then assume user is not changing name
					if (tempString.compare("") == 0) {
						cout << "No changes made." << endl;
						cout << new_ptrFarmAnimal->getName() << " is satisfied with just " << new_ptrFarmAnimal->getNoOfLegs() << " legs!" << endl;
					}
					else {
						//validate number of legs input
						new_noOfLegs = sb->validateNoOfLegs(tempString, new_ptrFarmAnimal->getName());

						//set the baseHealth of the monster now
						new_ptrFarmAnimal->setNoOfLegs(new_noOfLegs);

						//simple if-else for varied response hehe
						if (new_ptrFarmAnimal->getNoOfLegs() == 0) {
							cout << "\"No legs? No problem!\" says " << new_ptrFarmAnimal->getName() << "." << endl;
						}
						else if (new_ptrFarmAnimal->getNoOfLegs() == 1) {
							cout << new_ptrFarmAnimal->getName() << " is now " << new_ptrFarmAnimal->getNoOfLegs() << "-legged! Oh my!" << endl;
						}
						else
						{
							cout << new_ptrFarmAnimal->getName() << " now has " << new_ptrFarmAnimal->getNoOfLegs() << " legs! Wow!" << endl;
						}
					}
					cout << "================= OK =================" << endl;
					//--------------------------------------------------------------------
				}
				else if (userChoice == EDIT_ANIMAL_LOCOMOTION) {
					cout << "You chose: " << editFarmAnimalOptionsStrings[4] << endl;
					cout << "======================================\n";

					//declare variables to store user input
					string tempString = "";
					int new_locomotion = 0;

					cout << "\nHow do you want " << new_ptrFarmAnimal->getName() << " to move?" << endl;

					//Print all locomotion types
					sb->printAllLocType();
					cout << "\nTo cancel, press \'Enter\'" << endl;
					cout << "\nYou entered: ";

					//get the input from console
					cin.ignore();
					getline(cin, tempString);

					//if its empty input, no changes are made
					if (tempString.compare("") == 0) {
						cout << "No changes made." << endl;
						cout << new_ptrFarmAnimal->getName() << " is satisfied with just " << sb->getLocType(new_ptrFarmAnimal->getLocomotion()) << "." << endl;
					}
					else {
						//validate locomotion
						new_locomotion = sb->validateLocomotion(tempString, new_ptrFarmAnimal->getName());

						//set the baseHealth of the monster now
						new_ptrFarmAnimal->setLocomotion(new_locomotion);

						//print result to console
						cout << new_ptrFarmAnimal->getName() << " can now move by " << sb->getLocType(new_ptrFarmAnimal->getLocomotion()) << "!" << endl;
					}
					//--------------------------------------------------------------------
				}
				else if (userChoice == EDIT_ANIMAL_DESCRIPTION) {
					cout << "You chose: " << editFarmAnimalOptionsStrings[5] << endl;
					cout << "======================================\n";

					//declare a string to store user input
					string new_desc = "";

					cout << "Give a new description for " << new_ptrFarmAnimal->getName() << endl;
					cout << "To cancel, press \'Enter\'" << endl;
					cout << "You entered: ";

					//get the input from console
					cin.ignore();
					getline(cin, new_desc);

					//if its an empty input, then assume user is not changing name
					if (new_desc.compare("") == 0) {
						cout << "No changes made." << endl;
						cout << new_ptrFarmAnimal->getName() << " is satisfied its old description." << endl;
					}
					else {
						//set the new name on the selected monster pointer
						new_ptrFarmAnimal->setDescription(new_desc);

						cout << new_ptrFarmAnimal->getName() << "\'s description has been changed to \"" << new_ptrFarmAnimal->getDescription() << "\"" << endl;
					}
					cout << "================= OK =================" << endl;
				}
				else if (userChoice == EDIT_ANIMAL_EGG_PRICE) {
					cout << "You chose: " << editFarmAnimalOptionsStrings[6] << endl;
					cout << "======================================\n";

					//declare variables to store user input
					string tempString = "";
					int new_eggPrice = 0;

					cout << "Enter the new egg price for " << new_ptrFarmAnimal->getName() << endl;
					cout << "To cancel, press \'Enter\'" << endl;
					cout << "You entered: ";

					//get the input from console
					cin.ignore();
					getline(cin, tempString);

					//if its an empty input, then assume user is not changing name
					if (tempString.compare("") == 0) {
						cout << "No changes made." << endl;
						cout << new_ptrFarmAnimal->getName() << " \'s egg price is now $" << new_ptrFarmAnimal->getEggPrice() << endl;
					}
					else {
						//validate integer input
						new_eggPrice = sb->validateInteger(tempString, "\nEnter the new egg price for " + new_ptrFarmAnimal->getName());

						//set the baseHealth of the monster now
						new_ptrFarmAnimal->setEggPrice(new_eggPrice);

						cout << new_ptrFarmAnimal->getName() << "\'s egg price is now $" << new_ptrFarmAnimal->getEggPrice() << "!" << endl;
					}
					cout << "================= OK =================" << endl;
					//--------------------------------------------------------------------
				}
				else if (userChoice == EDIT_ANIMAL_PRODUCE) {
					cout << "You chose: " << editFarmAnimalOptionsStrings[7] << endl;
					cout << "======================================\n";

					//declare a string to store user input
					string new_produce = "";

					cout << "What item does " << new_ptrFarmAnimal->getName() << " produce?" << endl;
					cout << "To cancel, press \'Enter\'" << endl;
					cout << "You entered: ";

					//get the input from console
					cin.ignore();
					getline(cin, new_produce);

					//if its empty input, assume user is not maknig any changes
					if (new_produce.compare("") == 0) {
						cout << "No changes made." << endl;
						cout << new_ptrFarmAnimal->getName() << " continues to produce " << new_ptrFarmAnimal->getProduce() << "." << endl;
					}
					else {
						//set the new produce on the selected monster pointer
						new_ptrFarmAnimal->setProduce(new_produce);

						cout << new_ptrFarmAnimal->getName() << " now produces " << new_ptrFarmAnimal->getProduce() << "!" << endl;
					}
					cout << "================= OK =================" << endl;
				}
				else if (userChoice == -2) {

					//User is done editing/exiting edit menu, print the updated details now for user to see
					new_ptrFarmAnimal->print();

					//prompt for next course of action
					displayConfirmationDialog();

					cout << "You entered:";

					cin.clear();
					cin.ignore();

					getline(cin, str_userChoice);

					//if its an empty input, then must prompt for input again
					str_userChoice = sb->validateEmptyString(str_userChoice, "Invalid input! Please try again.");

					//validate integer input
					userChoice = sb->validateInteger(str_userChoice, "");

					if (userChoice == SAVE_CHANGES) {
						//add the pointer into the vector, farmAnimalList
						sb->farmAnimalList.push_back(new_ptrFarmAnimal);

						//Store the biomeMonster pointer into UniqueMonster pointer
						UniqueMonster *new_ptrUM = new_ptrFarmAnimal;

						//store the uniqueMonster pointer in the uniqueMonsterList
						sb->uniqueMonsterList.push_back(new_ptrUM);

						cout << "============= SAVED! =================\n";

						//set it to -2 to exit out of this loop
						userChoice = -2;
					}
					else if (userChoice == DISCARD_CHANGES) {
						//delete the pointer and set to null
						delete new_ptrFarmAnimal;
						new_ptrFarmAnimal = NULL;
						cout << "============ CANCELED! ===============\n";

						//set to -2 to return to main menu
						userChoice = -2;
					}
					else {
						//redo changes
						userChoice = 1;
					}
				}
				else {
					cout << "Stop playing around! There is no such option!" << endl;
				}

			} while (userChoice != -2);
		}
		else if (userChoice == EDIT_EXISTING_MONSTER_OR_FARM_ANIMAL) {
			cout << "Please choose 1 Search for Biome Monster/Farm Animal to search first!";
		}
		else if (userChoice == SHOW_ALL_MONSTERS) {
			//Display what the user has chosen
			cout << "You chose: " << runStateStrings[SHOW_ALL_MONSTERS - 1] << endl;

			sb->displayAllMonsters();
		}
		else if (userChoice == QUIT_PROGRAM) {
			//ask for confirmation before exiting Starboundex
			cout << "Are you sure you want to exit Starboundex? Enter [y/n]" << endl;

			cin.ignore();
			getline(cin, str_userChoice);

			//if its an empty input, then must prompt for input again
			str_userChoice = sb->validateEmptyString(str_userChoice, "Please confirm again.\n Are you sure you want to exit Starboundex? Enter [y/n]\n");

			//using the string::compare function to compare string if k are equal (0)
			while ((str_userChoice.compare("y") != 0) && (str_userChoice.compare("n") != 0)) {
				cout << "\n================ FAIL ================" << endl;
				cout << "Invalid input! Please enter [y/n]" << endl;

				cout << "Are you sure you want to exit Starboundex? Enter [y/n]" << endl;
				cout << "You entered: ";

				cin >> str_userChoice;
			}

			if (str_userChoice.compare("y") == 0) {
				//do nothing rmb userChoice is still ==2
			}
			else {
				//set it to a non -99 number then
				userChoice = 500;
			}
		}
		else {
			//any number outside [1-4]
			cout << "No such option. Please choose from [1-4]" << endl;
		}

		//display main menu if it any number other than -99 Exit Program
		if (userChoice != -99) displayAllFunctions();

	} while (userChoice != QUIT_PROGRAM);

	cout << "Good bye!" << endl;

	//Saving data to text file before the program shuts down
	sb->saveBiomeMonsterData();
	sb->saveFarmAnimalData();

	//When we new an pointer obj, remember to delete & set to NULL
	delete sb;
	sb = NULL;
}