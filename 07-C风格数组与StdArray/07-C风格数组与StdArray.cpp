
#include <iostream>
#include <array>
using namespace std;

int main()
{
    // C风格数组：大小在编译时确定，不能动态扩容
	int scores[5] = { 90, 80, 70, 60, 50 };	
	int n = sizeof(scores) / sizeof(scores[0]); // 计算数组长度

	for (int i = 0; i < n; ++i) // ++i是前置递增，i++是后置递增，前置递增效率更高,前置递增在迭代器中更高效，因为它不需要创建临时对象，后置递增在迭代器中可能会创建一个临时对象来保存原始值，这会增加开销。
	{
		cout << scores[i] << " ";
	}
	cout << endl;
	// 注意：C风格数组不会检查越界
	// scores[10] = 100; // 不会报错，但会导致未定义行为

	// std::array：编译器固定大小，比数组更安全
	array<float, 5> position = { 1.0f, 2.0f, 3.0f};
	cout << "x=" << position[0] << ", y=" << position[1] << ", z=" << position[2] << endl;
	cout << "size=" << position.size() << endl; // size()返回数组大小

	// array有一个at()方法，可以检查越界
	// position.at(10) ; // 会抛出异常std::out_of_range
}


