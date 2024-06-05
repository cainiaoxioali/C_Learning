//
// Created by 29397 on 2024/5/30.
//
#include  "iostream"
using namespace std;

int main()
{
    int a = 0,b = 1;
    while(b <= 100)
    {
        a = a + b;
        b++;
    }
    cout << "1到100的累加值为：" << a << endl;
    return 0;
}