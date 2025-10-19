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
	cout << "请输入扫描星球的次数" << endl;
	int times = 0;
	cin >> times;
	int remain = this->scanPlanet(times);
}
int Explorership::scanPlanet(int times)
{
	int cost = 10;
	cout << "探索飞船正在扫描星球" << endl;
	if (currentEnergy < cost * times)
	{
		cout << "能量不足" << endl;
		return currentEnergy;
	}
	else
	{
		cout << "已扫描星球，能量被消耗10" << endl;
		return currentEnergy = currentEnergy - cost;
	}
	system("pause");
}
void Explorership::showStats()
{
	cout << "探索飞船的型号为:" << this->m_Model << endl;
	cout << "探索飞船的速度为:" << this->m_Speed << endl;
	cout << "探索飞船的能量为:" << this->currentEnergy << endl;
	cout << "探索飞船的能量峰值为" <<this->m_Energy<< endl;
	cout << "探索飞船的探测距离为" << this->m_ScanRange<< endl;
}