#include "iostream"
using namespace std;

int main()
{
    struct Student{
        string name;
        int age;
        string address;
    };
    for(int i = 0;i<2;i++)
    {

        struct Student stu;
        cout << "请输入姓名" << endl;
        cin >> stu.name;
        cout << "请输入年龄" << endl;
        cin >> stu.age;
        cout << "请输入住址" << endl;
        cin >> stu.address;
        cout << "第" << i+1 << "个学生的信息为："<< "姓名：" << stu.name << "年龄：" << stu.age << "住址：" << stu.address << endl;
    }
    return 0;
}

