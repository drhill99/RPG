#pragma once
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <memory>
#include <list>

using namespace std;
class CharClass
{
private:
	int level = 1;
	int experience = 0;
	int nextLevelExp = experience + 1000;
	string charClass;
public:
	CharClass();
	CharClass(string charClass);

	// setters
	//void initClassInfo(string);

	// getters
	int getLevel();
	int getExperience();
	int getNextLevelExp();
	

};

