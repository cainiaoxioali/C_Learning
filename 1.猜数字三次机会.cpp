// 猜数字游戏
#include <iostream>
using namespace std;

int main() {
    int num1 = 5,num;
    cout << "请输入一个数字：" << endl;
    cin >> num;
    if (num1 == num) {
        cout << "一次猜对了" << endl;
    } else {
        if (num < num1) {
            cout << "猜小了，请继续猜" << endl;
        } else {
            cout << "猜大了，请继续猜" << endl;
        }
        cin >> num;
        if (num1 == num) {
            cout << "二次猜对了" << endl;
        }else {
            if (num < num1) {
                cout << "猜小了，请继续猜" << endl;
            } else {
                cout << "猜大了，请继续猜" << endl;
            }
            cin >> num;
            if (num1 == num) {
                cout << "三次猜对了" << endl;
            }else {
                cout << "三次猜错了，游戏结束" << endl;
            }
        }
    }
    return 0;
}