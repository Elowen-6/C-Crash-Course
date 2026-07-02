#include <iostream>
using namespace std;

// 同名函数，参数不同-》函数重载
int maxValue(int a, int b)
{
    return a > b ? a : b;
}
double maxValue(double a,double b) {
	return a > b ? a : b;
}

int maxValue(int a, int b, int c) {
	// 函数的嵌套调用
    return maxValue(maxValue(a, b), c);
}

// 默认参数写在声明处，从右往左提供
// 特别是在传递字符串的时候，我们经常使用字符串的引用，因为字符串进行数据拷贝耗费性能比较大，所以我们使用字符串的引用来传递参数
void attack(const string& target,int damage = 10,const string& element = "物理") {
	cout << "对" << target << "造成" << damage << "点" << element << "伤害" << endl;
}


int main()
{
	cout << maxValue(3, 7) << endl; // 调用int版本
	cout << maxValue(3.51, 7.22) << endl; // 调用double版本
	cout << maxValue(3, 7, 5) << endl; // 调用三个参数版本

	attack("史莱姆");
	attack("哥布林",25);
	attack("巨龙",100,"火");
}


