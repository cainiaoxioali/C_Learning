//
// Created by 29397 on 2024/5/30.
//
#include "iostream"
using namespace std;
/*//表白函数
void confession(int nun)
{
    for(int i = 0;i < nun ;i++)
    {
        cout<< "第"<< i+1 << "次\nI love you" << endl;
    }
}*/
/*
 // 最大值函数
int get_max(int a ,int b,int c)
{
    int max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    return max;
}
*/
//函数嵌套返回最大最小值
int get_max(int a,int b)
{

    if(b>a)
        return  b;//直接结束函数，返回b
    return  a;
}
int get_min(int a,int b){
    if(b<a)
        return  b;
    return  a;
}
/*void return_max_min(int a,int b)
{
    struct max_min{
        int max;
        int min;
    };
    struct max_min *p = new max_min{get_max(a,b),get_min(a,b)};
//    p ->max = get_max(a,b);
//    p ->min = get_min(a,b);
    cout << "最大值是" << p ->max << "\n最小值是"<< p ->min<<endl;
    delete p;

}*/
//要先声明结构体类型
struct Max_Min{
    int max;
    int min;
};

//定义返回结构体类型的函数
struct  Max_Min return_max_min(int a,int b){
    int max = get_max(a,b);
    int min = get_min(a,b);
    struct Max_Min v{max,min};
    return v;
};

int main() {
    int num1,num2;
    cout << "请输入两个数" << endl;
    cin >> num1 >> num2;
    struct Max_Min v = return_max_min(num1,num2);
    cout << "最大值是" << v.max << "\n最小值是"<< v.min<<endl;
//    return_max_min(num1,num2);
/*    cout << "要输出几遍" << endl;
    cin >> num;
    confession(num);*/
    // cout << get_max(1,2,3) << endl;
    return 0;

}