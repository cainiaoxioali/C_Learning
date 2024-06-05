#include <iostream>
using namespace std;

int main() {
    int * pArr = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int offset = 0;
    // 移除下标2 0的两个元素
    int * pNewArr = new int[8];
    for(int i = 0;i<10;i++) {
        if (i == 2 || i == 5) {
            offset++;
            continue;
        }
         pNewArr[i-offset] = pArr[i];
    }

    delete [] pArr;
   // pArr = pNewArr;//老数组指向新数组

    for (int i = 0; i < 8; i++) {
        cout << pNewArr[i] << endl;
    }
    delete [] pNewArr;
    //cout <<  pArr << endl;
    return 0;
}