#include"Explorership.h"
Explorership::Explorership(int energy, int speed, string model,int scanRange)
{
	this->m_Energy = energy;
	this->m_Speed = speed;
	this->m_Model = model;
	this->m_ScanRange = scanRange;
}
void Explorership::action()
{
	cout << "������ɨ������Ĵ���" << endl;
	int times = 0;
	cin >> times;
	int remain = this->scanPlanet(times);
}
int Explorership::scanPlanet(int times)
{
	int cost = 10;
	cout << "̽���ɴ�����ɨ������" << endl;
	if (currentEnergy < cost * times)
	{
		cout << "��������" << endl;
		return currentEnergy;
	}
	else
	{
		cout << "��ɨ����������������10" << endl;
		return currentEnergy = currentEnergy - cost;
	}
	system("pause");
}
void Explorership::showStats()
{
	cout << "̽���ɴ����ͺ�Ϊ:" << this->m_Model << endl;
	cout << "̽���ɴ����ٶ�Ϊ:" << this->m_Speed << endl;
	cout << "̽���ɴ�������Ϊ:" << this->currentEnergy << endl;
	cout << "̽���ɴ���������ֵΪ" <<this->m_Energy<< endl;
	cout << "̽���ɴ���̽�����Ϊ" << this->m_ScanRange<< endl;
}