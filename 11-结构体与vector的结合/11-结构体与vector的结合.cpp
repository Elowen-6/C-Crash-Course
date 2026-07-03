#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Student {
    string name;
    int score;
};

void addStudent(vector<Student>& students) {
    Student s;
    cout << "姓名：";
	cin >> s.name;
	cout << "成绩：";
	cin >> s.score;
    students.push_back(s);
}


void listStudents(const vector<Student>& students) {
	cout << "----学生列表----" << endl;
    for (const auto& s : students) {
        cout << s.name << " - " << s.score << endl;
    }
}

int main()
{
    vector<Student> students;
    int choice = -1;

    while (true) {
		cout << "\n请选择操作：1.添加学生 2.查看学生列表 0.退出" << endl;
        cin >> choice;
        if (choice == 1) addStudent(students);
        else if (choice == 2) listStudents(students);
        else if (choice == 0) break;
    }
    return 0;

}


