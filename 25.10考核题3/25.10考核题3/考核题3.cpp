//## 题目 3： 星际飞船管理系统
//
//### 题目描述
//在未来的某个星际时代，各个星系中的星际飞船至关重要。你被委派设计一个系统，用于管理不同类型的星际飞船。这些飞船有不同的用途：有的用于运输货物，有的用于进行战斗，还有一些用于探索未知星域。<br / >
//
//每艘飞船有自己的能量、速度、型号等属性。不同类型的飞船拥有不同的特性，比如运输飞船可以装载货物，战斗飞船可以发射激光攻击，探索飞船可以扫描行星。你需要设计一个管理这些飞船的系统。<br / >
//
//### 功能要求
//
//#### 基类 Spaceship：
//
//成员变量：model（型号），speed（速度），energy（能量）。 <br / >
//虚成员函数：<br / >
//showStats()：展示飞船的基本信息。<br / >
//action()：执行飞船的特定功能（纯虚函数）。<br / >
//
//#### 派生类 CargoShip（运输飞船）：
//
//新增成员变量：cargoCapacity（货物容量）。<br / >
//重写函数 action()：显示运输飞船正在装载货物。<br / >
//新增函数 loadCargo(int cargo)：根据给定的货物数量进行装载，显示剩余货物容量。<br / >
//
//#### 派生类 BattleShip（战斗飞船）：
//
//新增成员变量：weaponPower（武器威力）。<br / >
//重写函数 action()：显示战斗飞船即将发射激光。<br / >
//新增函数 fireLaser()：发射一次激光，减少一定能量。 <br / >
//
//#### 派生类 ExplorerShip（探索飞船）：
//
//新增成员变量：scanRange（扫描范围）。<br / >
//重写函数 action()：显示探索飞船正在扫描星球。<br / >
//新增函数 scanPlanet()：每隔一段时间消耗一定扫描星球消耗的能量, 显示剩余能量。<br / >
//
//#### 普通的类SpaceshipFleet（飞船库）：
//
//自由发挥部分 : D
//
//你需要： < br / >
//1.写一个菜单，在菜单内能够选择租赁飞船，增加飞船与查看所有飞船。 < br / >
//2.在租赁飞船后调用对应飞船的 action() 函数和对应的特色函数（请注意运输飞船的特色函数需要输入货物数量），展示每种飞船的特定功能。 < br / >
//3.增加飞船时可以设定飞船的成员变量们的数值。 < br / >
//4.查看所有飞船时列出各种飞船的数量即可。 < br / >
//5.消耗能量消耗多少大家自由设计<br / >
#include "SpaceshipFleet.h"
int main()
{
	SpaceshipFleet sm;
	while (true)
	{
		sm.showMenu();
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 1:
			sm.Leaseship();
			break;
		case 2:
			sm.Addship();
			break;
		case 3:
			sm.showAllShips();
			break;
		case 0:
			sm.exitSystem();
			break;
		default:
			cout << "输入有误，请重新输入" << endl;
			system("cls");
		}
		system("cls");
	}
}