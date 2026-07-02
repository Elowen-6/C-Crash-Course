#include <iostream>
#include<vector>
using namespace std;

int main()
{
	//// === if-else ===
	//int score;
	//cout << "请输入成绩（0-100）：";
	//cin >> score;

	//if (score >= 90) {
	//	cout << "优秀" << endl;
	//}
	//else if (score >=80) {
	//	cout << "良好" << endl;
	//}
	//else if (score >=60) {
	//	cout << "及格" << endl;
	//}
	//else {
	//	cout << "不及格" << endl;
	//}

	//// === switch-case ===
	//int choice;
	//cin >> choice;

	//switch (choice)
	//{
	//case 1:
	//	cout << "你选择了 剑" << endl;
	//	break; // 必须要有break,否则会“穿透”到下一个 case
	//case 2:
	//	cout << "你选择了 弓" << endl;
	//	break;
	//case 3:
	//	cout << "你选择了 法杖" << endl;
	//	break;
	//default:
	//	cout << "无效的选项" << endl;
	//	break;
	//}

	//// === for 循环 ===
	//cout << "for循环" << endl;
	//for (int i = 0; i < 5;i++) {
	//	cout << i << endl;
	//}

	//// === while 循环 ===
	//cout << "while循环" << endl;
	//int n = 5;
	//while (n>0) {
	//	cout << n << " ";
	//	--n;
	//}
	//cout << endl;

	//// === do-while 循环 (至少执行一次) ===
	//int input;
	//do {
	//	cout << "请输入一个正数（输入0退出）：";
	//	cin >> input;
	//} while (input != 0);
	
	// === 范围for（遍历容器最简洁的方式） ===
	vector<string> weapons = { "剑", "弓", "法杖","斧"};

	auto hp = 100; // hp是一个整型变量，auto会根据初始化值自动推导类型
	const int MAX_HP = 100; // 常量，不能被修改
	const auto MAX_MP = 50;  // 常量，类型由初始化值自动推导
	int& hpRef = hp; // 引用类型,hpRef是hp的别名(本质上是同一个变量),对hpRef的修改会直接修改hp

	// 引用类型好处，方便快速的遍历容器，如果不使用引用类型，就需要复制容器里的每一个数据，数据复制的过程相当于搬家，耗费性能，引用类型相当于给容器里的每个数据起了个别名，通过w遍历每一个数据。
	cout << "武器列表";
	for (const auto& w:weapons) {
		cout << w << " ";
	}
	cout << endl;

}


