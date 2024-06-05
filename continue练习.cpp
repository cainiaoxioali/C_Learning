//
// Created by 29397 on 2024/6/2.
//
#include "iostream"
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

    int unhappy = get_random_number(1,2),rage = get_random_number(1,10);
    for(int day = 1; day <=30;day++)
    {
        cout  << "On the "<< day << " day" << endl;
        if(unhappy == 1) {
            cout << "She was unhappy" << endl;
            continue;
        }
        cout << "送花"<< endl;
        if(rage == 1)
        {
            cout  << "She was angry." << endl;
            break;
        }
        cout << "说喜欢"<< endl;
        cout << "看电影"<< endl;
        if(day == 30) cout << "Mission accomplished in 30 days "<< endl;
    }
    return 0;
}