#include"Battleship.h"
Battleship::Battleship(int energy, int speed, string model, int weaponPower)
{
	this->m_Energy = energy;
	this->m_Speed = speed;
	this->m_Model = model;
	this->m_WeaponPower = weaponPower;
	currentEnergy = this->m_Energy;
}
void Battleship::action()
{
	cout << "请输入发射激光的次数" << endl;
	int times = 0;
	cin >> times;
	int remain = this->fireLaser(times);

}
int Battleship::fireLaser(int times)
{
	int cost = 15;
	cout << "飞船即将发射激光" << endl;
	if (currentEnergy < cost * times)
	{
		cout << "能量不足" << endl;
		return currentEnergy;
	}
	else
	{
		cout << "激光已发射，能量被消耗15" << endl;
		return currentEnergy = currentEnergy - cost;
	}
	system("pause");
}
void Battleship::showStats()
{
	cout << "战斗飞船的型号为:" << this->m_Model << endl;
	cout << "战斗飞船的速度为:" << this->m_Speed << endl;
	cout << "战斗飞船的能量峰值为:" << this->m_Energy << endl;
	cout << "战斗飞船的能量剩余为:" << this->currentEnergy << endl;
	cout << "战斗飞船的武器威力为:" << this->m_Model << endl;
}