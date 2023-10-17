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

using namespace std;

class Character
{
private:
	string name;
	string _charClass;
	int experience;
	shared_ptr<Inventory> inventory;
	list<string> equippedGear;
public:
	Character();

	void setClass();
	int getExperience();



};

