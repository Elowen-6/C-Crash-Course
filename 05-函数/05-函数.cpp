#include <iostream>
using namespace std;
// 函数声明（可以放在 main前面，或者放在头文件里）
int add(int a, int b);
void greet(const string& name);
bool isEven(int n);

int main()
{
	cout << "3+4=" << add(3, 4) << endl;
	greet("张三");
	cout << "7是偶数吗？" << (isEven(7) ? "是" : "不是") << endl;
}

// 函数定义
int add(int a, int b) {
	return a + b;
}

// const是常量，说明name是一个常量引用，不能在函数内部修改它的值，方便提高效率，避免拷贝
void greet(const string& name) {
	cout << "您好，" << name << "!" << endl;
}

bool isEven(int n) {
	// c++中把布尔值当作整数来处理，true表示1，false表示0
	return n % 2 == 0; // 判断求余结果是否等于，如果等于0则说明是偶数，返回true，否则返回false
}



