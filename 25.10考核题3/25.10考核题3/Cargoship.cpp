#include "Cargoship.h"
Cargoship::Cargoship(int energy, int speed, string model,int cargoCapacity)
{
	this->m_Energy = energy;
	this->m_Speed = speed;
	this->m_Model = model;
	this->m_CargoCapacity = cargoCapacity;
	m_CurrentCargo = 0;
}
void Cargoship::action()
{
	cout << "请输入要装载的货物量" << endl;
	int cargo=0;
	cin >> cargo;
	int remain=this->loadCargo(cargo);
	if (remain == -1)
	{
		cout << "装载货物失败，容量不足" << endl;
	}
	else
	{
		cout << "运输飞船正在装载货物" << endl;

	}
	system("pause");
}
void Cargoship::showStats()
{
	cout << "运输飞船的型号为:" << this->m_Model << endl;
	cout << "运输飞船的速度为:" << this->m_Speed << endl;
	cout << "总货物容量：" << this->m_CargoCapacity << endl;
	cout << "当前已装载：" << this->m_CurrentCargo << endl;
	cout << "运输飞船的剩余容货量为:" << this->m_CargoCapacity-m_CurrentCargo << endl;
	cout << "运输飞船的能量峰值为:" << this->m_Energy << endl;
}
int Cargoship::loadCargo(int cargo)
{
	if ((cargo + m_CurrentCargo) > m_CargoCapacity)
	{
		return -1;
	}
	else
	{
		m_CurrentCargo = cargo + m_CurrentCargo;
	}
	return m_CargoCapacity - m_CurrentCargo;
}