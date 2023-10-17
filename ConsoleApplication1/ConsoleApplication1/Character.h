#pragma once
#include "charClass.h"
#include "Inventory.h"
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <memory>
#include <list>

#ifndef CHARACTER_H
#define CHARACTER_H
using namespace std;

class Character
{
private:
	string charName;
	string charClass;
	shared_ptr<CharClass> char_Class;
	int maxHealth = 20;
	int curHealth = 20;
	shared_ptr<Inventory> inventory;
	list<string> equippedGear;
public:
	Character();

	void initCharInfo(string name, string charClass);

	// getters

	string getName();
	string getClass();
	int getCurHealth();
	int getMaxHealth();
	int getLevel();
	int getExperience();
	int getNextLevelExp();
	void displayCharacterInfo();

	
	
	// setters
	void chooseClass(string _charClass);
	void takeDamage(int damage);
	
	void recvHealing(int healing);
	

	


};
#endif
