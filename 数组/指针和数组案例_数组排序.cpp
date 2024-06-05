//
// Created by 29397 on 2024/6/2.
//
#include "iostream"
using namespace std;

int main()
{

    int * p = new int[10]{3,5,1,11,99,66,22,2,8,6};
    //将数组升序排序
    //c++
        /* 对数组p中的元素进行冒泡排序 */
    for (int i = 0; i < 9; i++) {
        //第i次循环，将第i个元素与后面的元素进行比较，
        for(int j = i+1;j < 10 ;j++){
            //如果第i个元素大于后面的元素，则交换它们的位置。
            if(*(p+i)>*(p+j))
            {
                int temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
        for(int i = 0; i < 10; i++)
        {
            cout << *(p + i) << " ";
        }
    return 0;
}