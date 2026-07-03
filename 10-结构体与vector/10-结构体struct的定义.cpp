#include <iostream>
#include <string>
using namespace std;

struct Player {
	string name;
	int hp;
	int attack;
	bool isAlive;
};

void printPlayer(const Player& p) {
	cout << "名字：" << p.name
		<< ",HP：" << p.hp
		<< ",攻击力：" << p.attack
		<< ",存活：" << (p.isAlive ? "是":"否") << endl;
}

int main()
{
   // 创建并初始化
	Player p1 = { "战士", 200, 30, true };
	Player p2 = { "法师", 100, 50, true };

	// 访问与修改
	p1.hp -= 50; // 战士受到伤害
	p1.attack += 10; // 战士攻击力提升

	printPlayer(p1);
	printPlayer(p2);




}


