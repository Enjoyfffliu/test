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
	cout << "������Ҫװ�صĻ�����" << endl;
	int cargo=0;
	cin >> cargo;
	int remain=this->loadCargo(cargo);
	if (remain == -1)
	{
		cout << "װ�ػ���ʧ�ܣ���������" << endl;
	}
	else
	{
		cout << "����ɴ�����װ�ػ���" << endl;

	}
	system("pause");
}
void Cargoship::showStats()
{
	cout << "����ɴ����ͺ�Ϊ:" << this->m_Model << endl;
	cout << "����ɴ����ٶ�Ϊ:" << this->m_Speed << endl;
	cout << "�ܻ���������" << this->m_CargoCapacity << endl;
	cout << "��ǰ��װ�أ�" << this->m_CurrentCargo << endl;
	cout << "����ɴ���ʣ���ݻ���Ϊ:" << this->m_CargoCapacity-m_CurrentCargo << endl;
	cout << "����ɴ���������ֵΪ:" << this->m_Energy << endl;
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