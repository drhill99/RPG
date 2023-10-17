
#include "Character.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <memory>
#include <list>
#include <algorithm>
#include <cctype>

using namespace std;

Character createCharacter() {
    
    string characterChoice;
    cout << "Will you be a might warrior, sly rogue, or powerful mage?: ";
    getline(cin, characterChoice);
    transform(characterChoice.begin(), characterChoice.end(), characterChoice.begin(), ::tolower);
    if(characterChoice == "warrior") {
        string name;
        // Warrior warrior;
        //character = new Warrior;
        Character character;
        cout << "Your Warrior's name will be: ";
        getline(cin, name);
        character.initCharInfo(name, "Warrior");
        return character;
    }
    else if (characterChoice == "rogue") {
        string name;
        //Rogue rogue;
        //character = new Rogue;
        Character character;
        cout << "Your Rogue's name will be: ";
        getline(cin, name);
        character.initCharInfo(name, "Rogue");
        return character;
    }
    else if (characterChoice == "mage") {
        string name;
        //Mage mage;
        //character = new Mage;
        Character character;
        cout << "Your Mage's name will be: ";
        getline(cin, name);
        character.initCharInfo(name, "Mage");
        return character;
    }

    

    
}

/*
Character loadCharacter() {

}
*/

/*
void saveCharacter() {


}
*/
int main()
{

    Character character = createCharacter();
    
    while (character.getCurHealth() > 0) {
        character.displayCharacterInfo();
        int input;
        cout << "1. take damage\n";
        cout << "2. take healing\n";
        cin >> input;
        if (input == 1) {
            character.takeDamage(2);
        }
        else if (input == 2) {
            character.recvHealing(2);
        }
    }
}


