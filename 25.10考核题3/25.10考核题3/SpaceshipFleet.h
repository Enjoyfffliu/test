#pragma once
#include <iostream>
using namespace std;
#include<vector>
#include"Spaceship.h"
#include"Cargoship.h"
#include"Battleship.h"
#include"Explorership.h"
class SpaceshipFleet
{
public:
	SpaceshipFleet ();
	void showMenu();
	void showAllShips();
	void Leaseship();
	void Addship();
	~SpaceshipFleet();
	void exitSystem();
	int m_SpaceshipNum;
	vector<Cargoship*>vC;
	vector<Battleship*>vB;
	vector<Explorership*>vE;
};