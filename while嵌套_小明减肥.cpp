//
// Created by 29397 on 2024/5/30.
//
#include  "iostream"
using namespace std;

int main()
{
    cout << "有点胖计划减肥10斤" << endl;
    int reduction = 0,day = 0,run_num = 0,push_up_num=1;
    while(reduction < 10)
    {
        day++;
        cout << "今天是" << day << "天" << endl;
        while(push_up_num <= 3)
        {
            cout << "开始减肥的第" << day << "天，第"<< push_up_num << "组俯卧撑" <<endl;
            push_up_num++;
        }
        reduction++;
        cout << "体重减少1斤" << "累计减少" << reduction << "斤" << endl;
        while(run_num <= 3)
        {
            cout << "开始减肥的第" << day << "天，第"<< run_num << "组跑步" <<endl;
            run_num++;
        }
        reduction++;
        cout << "体重减少1斤" << "累计减少" << reduction << "斤" << endl;
    }
    cout << "减肥成功" << "累计" << day << "天" << "减少" << reduction << "斤"<< endl;

    return 0;
}