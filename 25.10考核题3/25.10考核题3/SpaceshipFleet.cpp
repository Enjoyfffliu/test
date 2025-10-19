#include "SpaceshipFleet.h"
SpaceshipFleet::SpaceshipFleet()
{
	m_SpaceshipNum = 0;

}
void SpaceshipFleet::showMenu()
{
	cout << "********************" << endl;
	cout << "*****1.���޷ɴ�*****" << endl;
	cout << "*****2.���ӷɴ�*****" << endl;
	cout << "*****3.�鿴���зɴ�*" << endl;
	cout << "*****0.�˳��˵�*****" << endl;
	cout << "********************" << endl;
}
void SpaceshipFleet::Leaseship()
{
	cout << "1.����ɴ�" << endl;
	cout << "2.ս���ɴ�" << endl;
	cout << "3.̽���ɴ�" << endl;
	int choice = 0;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		if (vC.empty()) 
		{
			cout << "��������ɴ������ޣ�" << endl;
			system("pause");
			return;
		}
		else
		{
			int dSelect = 0;
			for (int i = 0; i < vC.size(); i++)
			{
				cout << "���" << i << "��" << endl;
				vC[i]->showStats();
				
			}
			cout << "��������Ҫ���޵ķɴ����" << endl;
			cin >> dSelect;
			if (0<=dSelect &&dSelect<vC.size())
			{
				system("cls");
				cout << "�÷ɴ���Ϣ����" << endl;
				vC[dSelect]->showStats();
				vC[dSelect]->action();
				vC[dSelect]->showStats();
			}
			else
			{
				cout << "����������" << endl;
				system("pause");
			}
		}
		break;
	}
	case 2:
	{
		if (vB.empty())
		{
			cout << "��������ɴ������ޣ�" << endl;
			system("pause");
			return;
		}
		int dSelect = 0;
		for (int i = 0; i < vB.size(); i++)
		{
			cout << "���" << i << "��" << endl;
			vB[i]->showStats();
		}
		cout << "��������Ҫ���޵ķɴ����" << endl;
		cin >> dSelect;
		if (0 <= dSelect && dSelect < vB.size())
		{
			cout << "�÷ɴ���Ϣ����" << endl;
			vB[dSelect]->showStats();
			vB[dSelect]->action();
			vB[dSelect]->showStats();
			system("cls");
		}
		else
		{
			cout << "����������" << endl;
			system("pause");
		}
		break;
	}
	case 3:
	{
		if (vE.empty())
		{
			cout << "��������ɴ������ޣ�" << endl;
			system("pause");
			return;
		}
		int dSelect = 0;
		for (int i = 0; i < vE.size(); i++)
		{
			cout << "���" << i << "��" << endl;
			vE[i]->showStats();
		}
		cout << "��������Ҫ���޵ķɴ����" << endl;
		cin >> dSelect;
		if (0 <= dSelect && dSelect < vE.size())
		{
			system("cls");
			cout << "�÷ɴ���Ϣ����" << endl;
			vE[dSelect]->showStats();
			vE[dSelect]->action();
			vE[dSelect]->showStats();
		}
		else
		{
			cout << "����������" << endl;
			system("pause");
		}
		break;
	}
	default:
		cout << "����������" << endl;
		system("pause");
		system("cls");
		break;
	}
}
void SpaceshipFleet::Addship()
{
	cout << "��������Ҫ��ӵķɴ�" << endl;
	cout << "1.����ɴ�" << endl;
	cout << "2.ս���ɴ�" << endl;
	cout << "3.̽���ɴ�" << endl;
	int choice = 0;
	cin >> choice;
	cout << "������������ֵ";
	int energy;
	cin >> energy;
	cout << "�������ٶȷ�ֵ";
	int speed;
	cin >> speed;
	cout << "�������ͺ�";
	string model;
	cin >> model;
	switch (choice)
	{
	case 1:
	{
		cout << "�������������";
		int capacity = 0;
		cin >> capacity;
		Cargoship* cargo = new Cargoship(energy, speed, model, capacity);
		vC.push_back(cargo); 
		m_SpaceshipNum++;
		cout << "����ɴ���ӳɹ���" << endl;
		system("pause");
		break;
	}
	case 2:
	{
		cout << "��������������";
		int weaponPower = 0;
		cin >> weaponPower;
		Battleship* battle = new Battleship(energy, speed, model, weaponPower);
		vB.push_back(battle);
		m_SpaceshipNum++;
		cout << "ս���ɴ���ӳɹ���" << endl;
		system("pause");
		break;
	}
	case 3:
	{
		cout << "������̽�����";
		int scanRange = 0;
		cin >> scanRange;
		Explorership* explorer = new Explorership(energy, speed, model, scanRange);
		vE.push_back(explorer);
		m_SpaceshipNum++;
		cout << "̽���ɴ���ӳɹ���" << endl;
		system("pause");
		break;
	}
	case 4:
		break;
	default:
		cout << "��������" << endl;
		break;
	}
}
void SpaceshipFleet::showAllShips() {
	cout << "�ɴ�ͳ��" << endl;
	cout << "1. ����ɴ���" << vC.size() << "��" << endl;
	cout << "2. ս���ɴ���" << vB.size() << "��" << endl;
	cout << "3. ̽���ɴ���" << vE.size() << "��" << endl;
	cout << "��������" << m_SpaceshipNum << "��" << endl;
	system("pause");
}
void SpaceshipFleet::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}
SpaceshipFleet::~SpaceshipFleet()
{

}
