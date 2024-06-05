#include "iostream"
using namespace std;

int main()
{
    struct Student{
        string name = "小明";
        int age = 19;
        string address  = "中国";
    };
/*
    struct Student stu;
    struct Student *pStu = &stu;*/
//动态内存
    struct Student *pStu = new Student {.name = "小刚"};
    //使用 -> 访问结构体指针成员
    cout << pStu->name << endl;
    cout << pStu->age << endl;
    cout << pStu->address << endl;
    delete pStu;
    return 0;
}
