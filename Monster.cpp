#include "Monster.hpp"
#include <iostream>

using namespace std;

Monster::Monster(string name)
{
	_name = name;
}

void Monster::printName(){
	cout << _name << endl;
}