//
// Created by 29397 on 2024/5/30.
//
#include "iostream"
#include "random"
using namespace std;
/**
 * @brief 生成一个[min, max]范围内的随机整数
 *
 * 使用C++11的随机数生成器来生成指定范围内的随机整数。
 *
 * @param min 区间最小值（包含）
 * @param max 区间最大值（包含）
 * @return 返回生成的随机整数
 */
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

int main() {
    int in_num;
    //生成一个1~10的随机数
    int num;
    string colour,shape;
    num = get_random_number(1, 10);
    colour = get_random_number(0,1)?"红色":"黑色";

    if(colour == "红色"){
        shape = get_random_number(0,1) ? "红桃" : "方块";
    } else shape = get_random_number(0,1) ? "黑桃" : "梅花";

    cout << "数字：" << num << ";颜色：" << colour << ";形状：" << shape << endl;
    cin >> in_num;

    if(num == in_num) {
        cout << "猜对了。请猜花色，红色或是黑色" << endl;
        string in_colour;
        cin >> in_colour;
        if (in_colour == colour){
            if(colour == "红色"){
                cout << "猜对了。请猜形状，红桃或是是方块" << endl;
            } else{
                cout << "猜对了。请猜形状，是黑桃或是梅花" << endl;
            }
            string in_shape;
            cin >> in_shape;
            if(in_shape == shape){
                cout << "猜对了" << endl;
            }else cout << "猜错了游戏结束" << endl;
        }else cout << "猜错了游戏结束" << endl;
    }else {
        cout << "猜错了游戏结束" << endl;
    }
    return 0;
}