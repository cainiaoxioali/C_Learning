#include "iostream"
using namespace std;

int main()
{
    struct Student{
        string name;
        int age;
        string address;
    };
    //动态分配内存 三个人的信息
    struct Student * pStu = new Student [3];
    for(int i = 0;i < 3;i++)
    {
        cout << "请输入第" << i+1 << "个学生的姓名：";
        cin >> pStu[i].name;
        cout << "请输入第" << i+1 << "个学生的年龄：";
        cin >> pStu[i].age;
        cout << "请输入第" << i+1 << "个学生的地址：";
        cin >> pStu[i].address;
    }
    for(int i = 0;i <3;i++){
        cout << "第" << i+1 << "个学生的姓名：" << pStu[i].name << i+1
        << "；个学生的年龄：" << pStu[i].age << "；第" << i+1 << "个学生的地址："
        << pStu[i].address << endl;
    }
    delete[] pStu;//删除的数组
    return 0;
}

