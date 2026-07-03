#include <iostream>
using namespace std;

// 值传递：拷贝一份，不影响原对象
void levelUp_copy(int level) {
	level += 1;
}

// 引用传递：直接操作原对象
void levelUp_ref(int& level) {
	level += 1;
}

int main()
{
	int hp = 100;
	int& hpRef = hp;  // hpRef就是hp的别名，操作hpRef就是操作hp

	hpRef -= 30;
	cout << "hp = " << hp << endl;  // 输出hp = 70
	cout << "hpRef = " << hpRef << endl;  // 输出hpRef = 70

	// 引用必须初始化
	// int& bad; // 编译错误

	int level = 1;
	levelUp_copy(level);
	cout << "值传递后：" << level << endl;   // 1没变

	levelUp_ref(level);
	cout << "引用传递后：" << level << endl; 

}


