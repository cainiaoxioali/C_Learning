#include "iostream"
#include "random"
using namespace std;


int get_random_num(int min, int max) {
    // 创建一个随机数生成器
    random_device rd;
    mt19937 gen(rd());
    // 定义一个均匀分布的整数范围
    uniform_int_distribution<> dis(min, max);
    // 生成一个随机数并输出
    int random_number = dis(gen);
    return random_number;
}
int main()
{
    string info[2][2][5];
    string names[] ={
            "Landon", "Avery", "Camden", "Bentley", "Finnegan", "Nash", "Emmett",
            "Greyson", "Noah", "Jace", "Caxton", "Sawyer", "Zachary", "Eli",
            "Keegan", "Lincoln", "Isaac", "Asher", "Declan", "Theo", "Levi",
            "Dominic", "Austin", "Wyatt", "Carter", "Logan", "Luke", "Max",
            "Ethan", "Miles", "Oliver", "Hudson", "Owen", "William", "Joshua",
            "Benjamin", "Henry", "Lucas", "Alexander", "Jackson", "Mason",
            "Grayson", "Ryder", "Elijah", "Liam", "Caleb", "Thomas",
            "Cooper", "Hunter", "Connor"
    };
    int who, seat_num ;

    //录入信息
    //三维数组一共有20个元素，一个元素是一个字符串，包含专业，班级，座号，姓名
    for(int i = 0;i < sizeof(info)/sizeof(info[1]);i++){
        for(int j = 0;j < sizeof(info[1])/sizeof(info[1][1]);j++){
            for(int k = 0;k < sizeof(info[1][1])/sizeof(info[1][1][1]);k++){
                who = get_random_num(0, sizeof(names)/sizeof(names[1])-1);
                string major=i ==0?"物理":"计算机";
                string cla = j == 0?"一班":"二班";
                seat_num = k+1;
                info[i][j][k]  ="专业:" + major + "；班级：" + cla +"；座号：" + to_string(seat_num) + "；姓名："+ names[who];

                // cout << message << endl;
            }
        }
    }
    //输出信息,
    for (int i = 0; i < sizeof(info) / sizeof(info[0]); i++) {
        for (int j = 0; j < sizeof(info[1]) / sizeof(info[1][1]); j++) {
            for (int k = 0; k < sizeof(info[1][1]) / sizeof(info[1][1][1]); k++) {
                cout  << info[i][j][k]<<endl;
            }


        }
    }

    return 0;
}

