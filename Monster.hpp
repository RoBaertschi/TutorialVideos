#ifndef MONSTER_H
#define MONSTER_H
#pragma once
#include <string>

using namespace std;
	
class Monster  
{
private:
	string _name;
public:

	Monster(string name);
	void printName();

};
#endif