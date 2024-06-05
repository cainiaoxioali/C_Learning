#include <iostream>
using namespace std;

int main() {
    int v1[] = {0, 1, 2, 3, 4,
                5, 6, 7, 8, 9};
    char v2[10] = {'a','b','c',
                   'd','e'};
    //cout<< sizeof(v1)/sizeof (v1[1]) <<endl;
    for(int i = 0;i<sizeof (v1)/sizeof (v1[1]);i++)
    {
        if(i<5) cout<< "v2[" << i << "] = " << v2[i] << endl;
        cout<< "v1[" << i << "] = " << v1[i] << endl;
    }
    return 0;
}