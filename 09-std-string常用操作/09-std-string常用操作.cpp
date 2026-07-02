#include <iostream>
#include<string>
using namespace std;

int main()
{
    // 创建
	string s1 = "Hello";
	string s2("World");
	string s3(5,'*');

	// 拼接
	string greeting = s1 + "，" + s2 + "!";
	cout << greeting << endl;

	s1.append("C++");
	cout << s1 << endl; // Hello C++

	// 长度
	cout << "长度: " << greeting.size() << endl;

	// 下标访问
	cout << "第一个字符: " << greeting[0] << endl;
	cout << "最后一个字符: " << greeting[greeting.size()-1] << endl;

	// 子串
	string sub = greeting.substr(0, 5); // 从索引0开始，长度为5的子串
	cout << "子串: " << sub << endl;

	// 查找
	int pos = greeting.find("World");
	if (pos !=string::npos) {
		cout << "找到 'World' 在位置: " << pos << endl;
	}
	else {
		cout << "'World' 未找到" << endl;
	}

	// 比较
	cout << "相等：" << (s1 == s2) << endl;

	// 字符串与数字转换
	int num = 42;
	string numStr = to_string(num);  // int -> string
	int parsed = stoi("123");

}


