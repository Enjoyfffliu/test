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
	cout << "�����뷢�伤��Ĵ���" << endl;
	int times = 0;
	cin >> times;
	int remain = this->fireLaser(times);

}
int Battleship::fireLaser(int times)
{
	int cost = 15;
	cout << "�ɴ��������伤��" << endl;
	if (currentEnergy < cost * times)
	{
		cout << "��������" << endl;
		return currentEnergy;
	}
	else
	{
		cout << "�����ѷ��䣬����������15" << endl;
		return currentEnergy = currentEnergy - cost;
	}
	system("pause");
}
void Battleship::showStats()
{
	cout << "ս���ɴ����ͺ�Ϊ:" << this->m_Model << endl;
	cout << "ս���ɴ����ٶ�Ϊ:" << this->m_Speed << endl;
	cout << "ս���ɴ���������ֵΪ:" << this->m_Energy << endl;
	cout << "ս���ɴ�������ʣ��Ϊ:" << this->currentEnergy << endl;
	cout << "ս���ɴ�����������Ϊ:" << this->m_Model << endl;
}