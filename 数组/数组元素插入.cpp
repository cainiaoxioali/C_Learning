#include <iostream>
using namespace std;

int main() {
    int * pArr = new int[2]{1,3};
    int * pNewArr = new int[3];
    int offset = 2,oNum = 0;
    for (int i = 0; i < 3; ++i) {
        if(i == 1)
        {
            //偏移量
            oNum++;
            pNewArr [i+oNum] = offset;
            cout << pNewArr[i+oNum] << endl;
            continue;
        }
        pNewArr[i+oNum] = pArr[i-oNum];
        cout << pNewArr[i+oNum] << endl;
    }
    delete [] pArr;
    delete [] pNewArr;

    return 0;
}
