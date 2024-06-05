#include <iostream>
using namespace std;
int arr1[10]{1,2,111,4,5,6,7,8,9,1};
int  * findMax(int arr[],int length)
{
    //静态变量
    //static int max;
    //使用动态内存分配
    int * pmax = new int;
    for(int i = 0;i < length-1;i++){
        if(arr[i] > *pmax){
            *pmax = arr[i];
        }
//        cout << arr[i] << endl;
        for(int j = i;j < length;j++){
            if(*pmax < arr[j])
            {
                *pmax = arr[j];
            }
//            cout << "i = " <<i << "  j = " << j << endl;
//            cout << "MAX = " << max <<endl;
        }
    }

    return pmax;
}
int main() {
    //将开辟的动态内存地址赋给新的变量
    int * p = findMax(arr1,10);
    //输出内容
    cout << *p << endl;
    //删除地址空间
    delete p;
//    cout << *(findMax(arr1,10));

    return 0;
}