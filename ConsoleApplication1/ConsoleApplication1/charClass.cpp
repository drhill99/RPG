#include "CharClass.h"
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <memory>
#include <list>

CharClass::CharClass() : level(1), charClass(""), experience(0)
{

}

CharClass::CharClass(string _charClass) : charClass(_charClass)
{

}

//setters

//getters
int CharClass::getLevel() {
	return level;
}

int CharClass::getExperience() {
	return experience;
}

int CharClass::getNextLevelExp() {
	return nextLevelExp;
}

/*
void CharClass::initClassInfo() {

}
*/