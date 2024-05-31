//
// Created by 29397 on 2024/5/31.
//
#include "iostream"
using namespace std;

int main()
{

        int row = 1,col = 1;
        int sum ;
        // 计算并打印1到9范围内所有矩形区域的元素和
        // 此段代码没有参数和返回值，因为它是一个直接执行的代码块
        // 主要逻辑是通过两个嵌套的循环，首先遍历行，然后在每一行内遍历列，计算并输出元素值
        while(row <= 9)
        {
            // 对于每一行，从1到行数遍历列
            while(col <= row)
            {
                sum = col * row; // 计算当前行和列的乘积
                col++;
                cout << "\t" << sum; // 输出乘积值
            }
            col = 1; // 重置列数以开始下一行的遍历
            row++;
            cout << endl; // 换行以开始下一行的计算和输出
        }
    return 0;
}