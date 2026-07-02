// 03-运算符.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    // === 逻辑运算符 ===
    bool isAlive = true;
    bool hasAmmo = false;
    cout << "能开火: " << (isAlive && hasAmmo) << endl;    // 0 (两个都为 true 才为 true)
    cout << "有一个满足: " << (isAlive || hasAmmo) << endl;// 1 (有一个为 true 就为 true)
    cout << "取反: " << (!isAlive) << endl;                // 0

    // === 自增自减 ===
    int x = 5;
    cout << "x++ = " << x++ << endl;    // 输出 5 (先用后加)
    cout << "x = " << x << endl;        // 6
    cout << "++x = " << ++x << endl;    // 输出 7 (先加后用)

    // === 三元运算符 ===
    int score = 85;
    string grade = (score >= 60) ? "及格" : "不及格";
    cout << grade << endl;

    // === sizeof ===
    cout << "int 占 " << sizeof(int) << " 字节" << endl;
    cout << "double 占 " << sizeof(double) << " 字节" << endl;
    cout << "char 占 " << sizeof(char) << " 字节" << endl;

    return 0;
}


