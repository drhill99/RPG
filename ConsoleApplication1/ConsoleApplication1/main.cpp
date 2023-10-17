
#include "Character.h"
#include "Warrior.h"
#include "Rogue.h"
#include "Mage.h"
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
    Character* character;
    string characterChoice;
    cout << "Will you be a might warrior, sly rogue, or powerful mage?: ";
    getline(cin, characterChoice);
    transform(characterChoice.begin(), characterChoice.end(), characterChoice.begin(), ::tolower);
    if(characterChoice == "warrior") {
        Warrior warrior;
        character = &warrior;
    }
    else if (characterChoice == "rogue") {
        Rogue rogue;
        character = &rogue;
    }
    else if (characterChoice == "mage") {
        Mage mage;
        character = &mage;
    }

    
}

Character loadCharacter() {

}

void saveCharacter() {


}
int main()
{
    
}


