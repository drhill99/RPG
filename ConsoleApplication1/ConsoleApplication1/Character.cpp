#include "Character.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <memory>
#include <list>

using namespace std;

Character::Character() : 
	charName(""), 
	charClass(""), 
	char_Class(nullptr), 
	maxHealth(20),
	curHealth(20), 
	inventory(nullptr), 
	equippedGear()
{

}

void Character::initCharInfo(string name, string _charClass) {
	charName = name;
	charClass = _charClass;
	char_Class = make_shared<CharClass>(_charClass);
	//char_Class->initClassInfo(_charClass);
}
//getters
void Character::chooseClass(string _charClass) {
	char_Class = make_shared<CharClass>();
	
}

string Character::getName() {
	return charName;
}
string Character::getClass() {
	return charClass;
}
int Character::getCurHealth() {
	return curHealth;
}
int Character::getMaxHealth() {
	return maxHealth;
}

int Character::getLevel() {
	return char_Class->getLevel();
}

int Character::getExperience() {
	return char_Class->getExperience();
}

int Character::getNextLevelExp() {
	return char_Class->getNextLevelExp();
}

void Character::displayCharacterInfo() {
	cout << "Name: " << charName << " Class: " << charClass << "\n";
	cout << "Level: " << char_Class->getLevel() << " Experience: " << char_Class->getExperience() << "/" << char_Class->getNextLevelExp() << "\n";
	cout << "Health: " << curHealth << "/" << maxHealth << "\n";
}


//setters

void Character::takeDamage(int damage) {
	curHealth -= damage;
}

void Character::recvHealing(int healing) {
	curHealth += healing;
}


	
