#include "Spaceship.h"
class Battleship :public Spaceship
{
public:
	Battleship(int energy, int speed, string model, int weaponPower);
	virtual void action();
	virtual void showStats();
	int fireLaser(int times);
	int m_WeaponPower;
	int currentEnergy;
};