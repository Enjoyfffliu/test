#include "Spaceship.h"
class Cargoship:public Spaceship
{
public:
	Cargoship(int energy,int speed,string model,int cargoCapacity);
	virtual void action();
	virtual void showStats();
	int loadCargo(int cargo);
	int m_CargoCapacity;
	int m_CurrentCargo;
};
