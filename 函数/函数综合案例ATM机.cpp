#include "iostream"
using namespace std;
void  Menu(string * name)
{
    cout << *name << "你好，欢迎使用ATM机,请选择操作：" << endl;
    cout << "查询余额\t[输入1]" << endl;
    cout << "取款\t\t[输入2]" << endl;
    cout << "存款\t\t[输入3]" << endl;
    cout << "退出\t\t[输入4]" << endl;

}
void Balance(int * amount)
{
    cout << "-------------查询余额-------------" << endl;
    cout << "您的余额为：" << *amount << endl;
}
void disposition(int * amount)
{
    cout << "-------------存款-------------" << endl;
    cout << "请输入存款金额：";
    int money;
    cin >> money;
    *amount += money;
    cout << "存款成功，您的余额为：" << *amount << endl;
}
void withdrawal(int * amount)
{
    cout << "-------------取款-------------" << endl;
    cout << "请输入取款金额：";
    int num;
    cin >> num;
    if (num > *amount)
    {
        cout << "余额不足，取款失败" << endl;

    }
    else
    {
        *amount -= num;
        cout << "取款成功，您的余额为：" << *amount << endl;
    }
}
int main()
{
    string name ;
    cout << "请输入您的账户名：";
    cin >> name;
    int amount = 5000000;
    bool flag = true,flag1 = true;
    while (flag)
    {
        Menu(&name);
        int num;
        cin >> num;
        switch (num)
        {
        case 1:
            Balance(&amount);
            break;
        case 2:
            withdrawal(&amount);
            break;
        case 3:
            disposition(&amount);
            break;
        case 4:
            cout << "谢谢使用，再见！" << endl;
            //return 0;   //退出程序两种写法
            flag = false;
            break;

        default:
            cout << "输入错误，请重新输入" << endl;
        }
        while(flag)
        {
            cout << "是否继续使用ATM机[y/n]" << endl;
            char ch;
            cin >> ch;
            if (ch == 'y')
            {
                flag1 = true;
                break;
            }
            else if (ch == 'n')
            {
                flag = false;

                break;
            }
            else
            {
                cout << "输入错误，请重新输入" << endl;
            }
        }
    }

    return 0;
}