#include"Spaceship.h"
class Explorership :public Spaceship
{
public:
	Explorership(int energy, int speed, string model,int scanRange);
	virtual void action();
	virtual void showStats();
	int scanPlanet(int times);
	int m_ScanRange;
	int currentEnergy;
};