#include <iostream>
using namespace std;

int main() {
    int arr[2][2][3]{
            {
                    {1,2,3},
                    {4,5,6}
            },
            {
                    {7,8,9},
                    {10,11,12}
            }
    };
    cout << sizeof  (arr[1][1][1])<< endl;  //int的大小 4字节
    cout << sizeof  (arr[1][1])<< endl;     //k个int的大小 k*4
    cout << sizeof  (arr[1])<< endl;        //j*k*4
    cout << sizeof  (arr)<< endl;           //i*j*k*4
    //n维数组n个循环嵌套
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        for (int j = 0; j < sizeof(arr[1]) / sizeof(arr[1][1]); j++) {
            for (int k = 0; k < sizeof(arr[1][1]) / sizeof(arr[1][1][1]); k++) {
                cout << "arr["<< i << "][" << j <<"][" << k << "] = " << arr[i][j][k] << endl;
            }


        }
    }

    return 0;
}