#include "iostream"
using namespace std;

int main()
{
    struct Student{
        string name;
        int age;
        string address;
    };
/*    struct Student stu[3] = {
            {.name = "张三",.age = 18,.address = "北京"},
            {.name = "李四",.age = 19,.address = "上海"},
            {.name = "王五",.age = 20,.address = "广州"}
    };
    for(int i = 0;i < 3;i++){
        cout << "姓名：" << stu[i].name << endl;
        cout << "年龄：" << stu[i].age << endl;
        cout << "地址：" << stu[i].address << endl;
    }*/
    struct Student stu[2];
    for(int i = 0;i < 2;i++){
        cout << "请输入第" << i+1 << "个学生的姓名：";
        cin >> stu[i].name;
        cout << "请输入第" << i+1 << "个学生的年龄：";
        cin >> stu[i].age;
        cout << "请输入第" << i+1 << "个学生的地址：";
        cin >> stu[i].address;
    }
    for(int i = 0;i < 2;i++)
    {
        cout << "第"<< i+1 << "个：\n姓名：" << stu[i].name << "年龄：" << stu[i].age << "住址：" << stu[i].address << endl;
    }
    return 0;
}
