#pragma once
#include <iostream>
using namespace std;
class Spaceship
{
public:
	virtual void action() = 0;
	virtual void showStats() = 0;
	int m_Energy;
	int m_Speed;
	string m_Model;
};