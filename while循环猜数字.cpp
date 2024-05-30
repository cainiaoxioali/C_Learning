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
    int num = get_random_number(1,100);
    int get_num,get_count = 1;
    cout << num << endl;
    cout << "请输入一个数字：";
    cin >> get_num;
    while(get_num != num)
    {
        get_count++;
        if(get_num > num){
            cout << "猜大了，请重新输入："<< endl;
        }
        else{
            cout << "猜小了，请重新输入："<< endl;
        }
        cin >> get_num;
    }
    cout << "恭喜你猜对了，一共猜了" << get_count << "次" << endl;

    return 0;
}