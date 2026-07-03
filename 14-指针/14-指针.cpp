#include <iostream>
using namespace std;

int main()
{
	int hp = 100;
	int age = 20;
	int* ptr = &hp; // ptr存储了hp的内存地址

	int* ptr = &hp; // ptr存储了hp的内存地址
	

	cout << "hp 的地址：" << ptr << endl;
	cout << "ptr 指向的值" << *ptr << endl; //解引用

	*ptr = 70;  //通过指针修改值
	cout << "hp = " << hp << endl; // 70

	// 指针可以为空
	int* nullPtr = nullptr;
	// *nullPtr = 10; // 运行时崩溃！不能解引用空指针

	// 指针可以重新定向
	int mp = 200;
	ptr = &mp;
	cout << "*ptr = " << *ptr << endl; 

	

}


