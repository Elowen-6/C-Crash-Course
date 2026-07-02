#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// 创建与初始化
	vector<int> scores; // 空vector   ->UE: TArray<int32> scores; 
	vector<int> nums = { 3,1,4,1,5,9 };    // 初始化列表  ->UE: TArray<int32> Nums = { 3,1,4,1,5,9 };
	vector<string> names(5, "未命名");  // 5个元素，都是"未命名"  ->UE: TArray<FString> ，用Init实现

	// 添加元素
	scores.push_back(90); // 添加一个元素
	scores.push_back(85);
	scores.push_back(92);

	// 访问元素
	cout << "第1个：" << scores[0] << endl; // 访问第一个元素
	cout << "第2个" << scores.at(1) << endl; // 访问第二个元素，通过at()访问会检查越界

	// 常用属性
	cout << "大小：" << scores.size() << endl; // 返回元素个数
	cout << "是否为空" << scores.empty() << endl; 

	// 删除
	scores.pop_back();
	scores.erase(scores.begin()); // 删除第一个元素

	// 遍历方式 1：下标
	cout << "下标遍历：";
	for (int i = 0; i < static_cast<int>(nums.size()); ++i) {// static_cast<int>是为了避免编译器警告，size()返回的是size_t类型，这种转换虽然麻烦，但规范。
		cout << nums[i] << " ";
	}
	cout << endl;

	// 遍历方式 2：范围for(推荐),不能取到索引，如果要对索引进行操作，还是要用下标遍历
	cout << "范围for遍历：";
	for (int n : nums) {
		cout << n << " ";
	}
	cout << endl;

	// 遍历方式 3：迭代器
	cout << "迭代器遍历：";
	for (auto it = nums.begin(); it != nums.end(); ++it) {
		cout << *it << " "; // 迭代器是一个指针，*it是解引用，获取元素值
	}
	cout << endl;

	// 清空
	nums.clear();
	cout << "清空后大小：" << nums.size() << endl;
	return 0;

}














