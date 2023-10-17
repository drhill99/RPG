#pragma once
#include "Character.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <memory>
#include <list>

using namespace std;


class Warrior : public Character 
{
private:
	int maxHealth = 20;
	int curHealth = 20;
	int level = 1;
	
public:
	Warrior();

	void levelUp();

};

