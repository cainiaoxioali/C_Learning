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
    // 初始化变量
    int in_num;              //输入数字
    int num;                 //生成随机数
    string colour,shape;     //随机颜色，形状

    // 生成一个1~10之间的随机整数
    num = get_random_number(1, 10);
    // 随机选择颜色，红色或黑色
    colour = get_random_number(0,1)?"红色":"黑色";

    // 根据颜色选择形状，红色对应红桃或方块，黑色对应黑桃或梅花
    if(colour == "红色"){
        shape = get_random_number(0,1) ? "红桃" : "方块";
    } else shape = get_random_number(0,1) ? "黑桃" : "梅花";

    // 打印出生成的数字、颜色和形状
    cout << "数字：" << num << ";颜色：" << colour << ";形状：" << shape << endl;
    cin >> in_num;

    // 用户猜数字，如果猜对，则继续猜花色
    if(num == in_num) {
        cout << "猜对了。请猜花色，红色或是黑色" << endl;
        //输入颜色
        string in_colour;
        cin >> in_colour;
        // 用户猜颜色，如果猜对，则继续猜形状
        if (in_colour == colour){
            if(colour == "红色"){
                cout << "猜对了。请猜形状，红桃或是是方块" << endl;
            } else{
                cout << "猜对了。请猜形状，是黑桃或是梅花" << endl;
            }
            //输入形状
            string in_shape;
            cin >> in_shape;
            // 用户猜形状，如果猜对，则结束游戏，否则游戏结束
            if(in_shape == shape){
                cout << "猜对了" << endl;
            }else cout << "猜错了游戏结束" << endl;
        }else cout << "猜错了游戏结束" << endl;
    }else {
        cout << "猜错了游戏结束" << endl;
    }
    // 程序正常结束，返回0
    return 0;

}