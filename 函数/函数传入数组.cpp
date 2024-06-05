#include <iostream>
using namespace std;
void func1(int arr[])
{
  cout << " 在func1里的长度" << sizeof(arr) << endl;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    cout << " 在main里的长度" << sizeof(arr) << endl;
    func1(arr);//因为传入的是地址，所有是8
    return 0;
}