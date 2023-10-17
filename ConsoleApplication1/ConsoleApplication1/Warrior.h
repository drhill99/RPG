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
	
	
public:
	int level = 1;
	Warrior();

	void levelUp();

};

