#include "SpaceshipFleet.h"
SpaceshipFleet::SpaceshipFleet()
{
	m_SpaceshipNum = 0;

}
void SpaceshipFleet::showMenu()
{
	cout << "********************" << endl;
	cout << "*****1.×âÁÞ·É´¬*****" << endl;
	cout << "*****2.Ôö¼Ó·É´¬*****" << endl;
	cout << "*****3.²é¿´ËùÓÐ·É´¬*" << endl;
	cout << "*****0.ÍË³ö²Ëµ¥*****" << endl;
	cout << "********************" << endl;
}
void SpaceshipFleet::Leaseship()
{
	cout << "1.ÔËÊä·É´¬" << endl;
	cout << "2.Õ½¶··É´¬" << endl;
	cout << "3.Ì½Ë÷·É´¬" << endl;
	int choice = 0;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		if (vC.empty()) 
		{
			cout << "ÔÝÎÞÔËÊä·É´¬¿É×âÁÞ£¡" << endl;
			system("pause");
			return;
		}
		else
		{
			int dSelect = 0;
			for (int i = 0; i < vC.size(); i++)
			{
				cout << "±àºÅ" << i << "£º" << endl;
				vC[i]->showStats();
				
			}
			cout << "ÇëÊäÈëÄãÒª×âÁÞµÄ·É´¬±àºÅ" << endl;
			cin >> dSelect;
			if (0<=dSelect &&dSelect<vC.size())
			{
				system("cls");
				cout << "¸Ã·É´¬ÐÅÏ¢ÈçÏÂ" << endl;
				vC[dSelect]->showStats();
				vC[dSelect]->action();
				vC[dSelect]->showStats();
			}
			else
			{
				cout << "ÊäÈë±àºÅÓÐÎó" << endl;
				system("pause");
			}
		}
		break;
	}
	case 2:
	{
		if (vB.empty())
		{
			cout << "ÔÝÎÞÔËÊä·É´¬¿É×âÁÞ£¡" << endl;
			system("pause");
			return;
		}
		int dSelect = 0;
		for (int i = 0; i < vB.size(); i++)
		{
			cout << "±àºÅ" << i << "£º" << endl;
			vB[i]->showStats();
		}
		cout << "ÇëÊäÈëÄãÒª×âÁÞµÄ·É´¬±àºÅ" << endl;
		cin >> dSelect;
		if (0 <= dSelect && dSelect < vB.size())
		{
			cout << "¸Ã·É´¬ÐÅÏ¢ÈçÏÂ" << endl;
			vB[dSelect]->showStats();
			vB[dSelect]->action();
			vB[dSelect]->showStats();
			system("cls");
		}
		else
		{
			cout << "ÊäÈë±àºÅÓÐÎó" << endl;
			system("pause");
		}
		break;
	}
	case 3:
	{
		if (vE.empty())
		{
			cout << "ÔÝÎÞÔËÊä·É´¬¿É×âÁÞ£¡" << endl;
			system("pause");
			return;
		}
		int dSelect = 0;
		for (int i = 0; i < vE.size(); i++)
		{
			cout << "±àºÅ" << i << "£º" << endl;
			vE[i]->showStats();
		}
		cout << "ÇëÊäÈëÄãÒª×âÁÞµÄ·É´¬±àºÅ" << endl;
		cin >> dSelect;
		if (0 <= dSelect && dSelect < vE.size())
		{
			system("cls");
			cout << "¸Ã·É´¬ÐÅÏ¢ÈçÏÂ" << endl;
			vE[dSelect]->showStats();
			vE[dSelect]->action();
			vE[dSelect]->showStats();
		}
		else
		{
			cout << "ÊäÈë±àºÅÓÐÎó" << endl;
			system("pause");
		}
		break;
	}
	default:
		cout << "ÇëÖØÐÂÊäÈë" << endl;
		system("pause");
		system("cls");
		break;
	}
}
void SpaceshipFleet::Addship()
{
	cout << "ÇëÊäÈëÄãÒªÌí¼ÓµÄ·É´¬" << endl;
	cout << "1.ÔËÊä·É´¬" << endl;
	cout << "2.Õ½¶··É´¬" << endl;
	cout << "3.Ì½Ë÷·É´¬" << endl;
	int choice = 0;
	cin >> choice;
	cout << "ÇëÊäÈëÄÜÁ¿·åÖµ";
	int energy;
	cin >> energy;
	cout << "ÇëÊäÈëËÙ¶È·åÖµ";
	int speed;
	cin >> speed;
	cout << "ÇëÊäÈëÐÍºÅ";
	string model;
	cin >> model;
	switch (choice)
	{
	case 1:
	{
		cout << "ÇëÊäÈë»õÔËÈÝÁ¿";
		int capacity = 0;
		cin >> capacity;
		Cargoship* cargo = new Cargoship(energy, speed, model, capacity);
		vC.push_back(cargo); 
		m_SpaceshipNum++;
		cout << "ÔËÊä·É´¬Ìí¼Ó³É¹¦£¡" << endl;
		system("pause");
		break;
	}
	case 2:
	{
		cout << "ÇëÊäÈëÎäÆ÷ÍþÁ¦";
		int weaponPower = 0;
		cin >> weaponPower;
		Battleship* battle = new Battleship(energy, speed, model, weaponPower);
		vB.push_back(battle);
		m_SpaceshipNum++;
		cout << "Õ½¶··É´¬Ìí¼Ó³É¹¦£¡" << endl;
		system("pause");
		break;
	}
	case 3:
	{
		cout << "ÇëÊäÈëÌ½²â¾àÀë";
		int scanRange = 0;
		cin >> scanRange;
		Explorership* explorer = new Explorership(energy, speed, model, scanRange);
		vE.push_back(explorer);
		m_SpaceshipNum++;
		cout << "Ì½Ë÷·É´¬Ìí¼Ó³É¹¦£¡" << endl;
		system("pause");
		break;
	}
	case 4:
		break;
	default:
		cout << "ÊäÈëÓÐÎó" << endl;
		break;
	}
}
void SpaceshipFleet::showAllShips() {
	cout << "·É´¬Í³¼Æ" << endl;
	cout << "1. ÔËÊä·É´¬£º" << vC.size() << "ËÒ" << endl;
	cout << "2. Õ½¶··É´¬£º" << vB.size() << "ËÒ" << endl;
	cout << "3. Ì½Ë÷·É´¬£º" << vE.size() << "ËÒ" << endl;
	cout << "×ÜÊýÁ¿£º" << m_SpaceshipNum << "ËÒ" << endl;
	system("pause");
}
void SpaceshipFleet::exitSystem()
{
	cout << "»¶Ó­ÏÂ´ÎÊ¹ÓÃ" << endl;
	system("pause");
	exit(0);
}
SpaceshipFleet::~SpaceshipFleet()
{

}
