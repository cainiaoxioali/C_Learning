//
// Created by 29397 on 2024/5/30.
//
#include  "iostream"
#include "random"
using namespace std;

int get_random_number(int min, int max) {
    // 创建一个随机设备对象，用于初始化随机数生成器
    random_device rd;
    // 使用随机设备初始化Mersenne Twister引擎
    mt19937 gen(rd());
    // 创建一个均匀分布，范围从min到max
    uniform_int_distribution<int> dis(min, max);
    // 使用生成器和分布生成一个随机整数
    int random_number = dis(gen);
    // 输出生成的随机数到控制台
    //std::cout << random_number << std::endl;
    // 返回生成的随机数
    return random_number;
}
int main()
{
    /**
     * 生成一个1到100之间的随机数，并引导用户猜测这个数字。
     * 用户每次输入一个数字，程序会根据输入提示用户猜大了、猜小了或者猜对了。
     * 直到用户猜对为止。
     */

    // 生成一个1到100之间的随机数
    int num = get_random_number(1,100);
    cout << "数字：" << num << endl;

    int get_num, count = 0; // get_num用于存储用户输入的数字，count用于记录猜测次数

    // 循环，直到用户猜对数字
    do {
        cout << "请输入数字：";
        cin >> get_num;
        count++;

        // 根据用户输入的数字，给出相应的提示
        if(get_num > num){
            cout << "猜大了" << endl;
        } else if(get_num < num){
            cout << "猜小了" << endl;
        }else{
            cout << "猜对了，猜了" << count << "次" << endl;
        }

    } while (get_num != num); // 当用户猜对之前，持续循环

    return 0;
}
