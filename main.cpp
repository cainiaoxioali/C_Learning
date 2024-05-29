/*
 * 显示中文设置
 * 1.#include "windows.h" 并在 mian中加入 SetConsoleOutputCP(CP_UTF8);
 * 2. z在main中加入 system("chcp 65001");
 */

#include "iostream"
#include "windows.h"
#define Im "李佳明"
#define age 21
#define high 180.5
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    //system("chcp 65001");
    cout <<"E:\\document\\c++" << endl;
    cout << Im << " 今年 " << age <<"岁"<< endl;


    return 0;
}