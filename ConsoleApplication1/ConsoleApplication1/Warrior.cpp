#include "Warrior.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <memory>
#include <list>

using namespace std;

Warrior::Warrior() : maxHealth(), curHealth(), level()
{

}

void Warrior::levelUp() {
	if (getExperience() >= 1000) {
		++level;
		maxHealth += 10;
	} 
	else if(getExperience() >= 2000) {
		++level;
		maxHealth += 10;
	}
	else if (getExperience() >= 3000) {
		++level;
		maxHealth += 10;
	}
	else if (getExperience() >= 4000) {
		++level;
		maxHealth += 10;
	}
	else if (getExperience() >= 5000) {
		++level;
		maxHealth += 10;
	}
}
