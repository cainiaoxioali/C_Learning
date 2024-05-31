# 开始学习C++

2024/5/29
# 第一章
## Clion的使用

### 显示中文设置

1. #include `"windows.h"` 并在 main中加入 `SetConsoleOutputCP(CP_UTF8)`;
2. 在main中加入 `system("chcp 65001")`;

### 文件不能以数字开头否则会找不到exe文件

## cout 打印输出

      1. //两个<<之间数组内容 ，可以任意拼接，endl表示换行:
     `cout << "helow" << "world" << endl;`
      2. //加入运算用括号
      `cout << (num -= 5 )<< endl ;`
      3. //如果只有一个输出:`cout << "hellow"`
      4. 转义字符:\

## 标识符常量

1. 定义`#define  标识符  常量`
2. 如果常量是字符则需要双引号 "常量"
3. 标识符常量要一般为大写

## 变量

1. 类型
   * 字符型:char
   * 整型:int
   * 实型:float
   * 字符串型:string
2. 使用
   * 可以直接用于输出
   * `nt number = 2021;  cout << "number=" << number << endl;`

## 标识符命名规范

1. 见名知意
2. 单词之间用下划线分割（变量）
   `*sutdent_name = "小明";`
3. 小驼峰法（变量、函数）
   * 第二个单词开始首字母用大小写区分
   * 简短单词可以全大写
   * `itStuID = 2021;`
4. 大驼峰法（类名）
   * 每一个单词首字母都大写
5. 标识符常量全部大写

6. 标识符命名规则
   1. 字母数字下划线组成，数字不能开头
   2. 不能是关键字
   3. 区分大小写

## 数据类型

`sizeof(数据)` 计算数据类型的字节长度

### 整型


   |            数据类型            |     占用空间      |
   |:--------------------------:|:-------------:|
   |           short            |      2字节      |
   |            int             |      4字节      |
   |         long(长整型)          | win为4 linux为8 |
   |      long long(长长整形)       |      8字节      |
   |    无符号整形：unsigned 只有正数     |               |
   | *unsigned int 可以简写为 u_int; |               |
### 实型


   |     类型      | 有效位数  | 字节数  |   说明   |
   |:-----------:|:-----:|:----:|:------:|
   |    float    |  6~7  | 4字节  | 单精度浮点型 |
   |   double    | 15~16 | 8字节  | 双精度浮点型 |
   | long double | 18~19 | 16字节 | 多精度浮点型 |


   * 实型默认为有符号,有效位数只做参考
   * ```c++
     //cout 默认输出为科学技术法（大于六位数时）
     cout << fixed;  //（固定）设置输出格式为小数
     cout.width(20); //设置最大显示宽度为20```
     ```
### 字面常量的类型
   在C++中字面常量（直接输入一个数字，如123）是可以有后缀的。

   无后缀时，整形从最小的int开始排，实型从double开始排

   也可以通过后缀来改变默认类型 如 `10L`代表指定为long类型，`10UL`为unsigned long类型。


   | 后缀（不区分大小写） |          含义          |
   |:----------:|:--------------------:|
   |     U      |        表示无符号数        |
   |     L      | 整数long，浮点long double |
   |     UL     |    unsigned long     |
   |    ULL     |  unsigned long long  |
   |     F      |        float         |
   |     D      |        double        |
### 字符型char


   |                    类型                     | 字节数 |    范围    |
   |:-----------------------------------------:|:---:|:--------:|
   |                   char                    | 1字节 | -128~127 |
   |               unsigned char               | 1字节 |  0~255   |
   | 通过ASCII码表映射`char = 65`为大写A`char = 97`为小写a |     |          |
### 转义字符
   ASCII码表中字符分为两类：打印字符和非打印控制字符

   * 非打印控制字符只用于表示各种控制功能，如换行、制表等。
   * 如果要使用非打印控制字符的的功能，可以使用<u>转义字符</u>形式
   * `\n` 换行、 `\t` 水平制表tab可以补充八个字符单位、 `\\` 代表一个\  `\'` 一个单引号 `\"`双引号
### 字符串

* C语音风格
```c
 char a[] = "string"    \\ 字符数组形式,无法直接修改变量值
 char *b = "string"     \\指针形式
```
* C++风格
  ```string str = "itxioaming"```
### 字符串拼接
   字符之间可以用 `+` 拼接
```c++

    string major = "物理";
    string class_name = "一班";
    string name = "菜鸟小明";
    double height = 183.1;
    //字符串拼接
    string msg = "我的专业是：" + major + ",我来自" + class_name +",我叫做：" + name;
    //非字符串需要用to_string()函数将内容转换为字符串类型
    string msg1 = msg + "，我的身高是" + to_string(height);
```

### 布尔类型
   * true 本身是数字1
   * false 本身是0

|   数据类型   |     字面量      |     说明     |
|:--------:|:------------:|:----------:|
|   bool   | true 或 false | 真或假 本质为1或0 |
| 主要用于逻辑判断 |              |            |
```c++
    bool flag = true; //亦可以bool flag = 1;
    bool flag1 = false;//bool flag = 0;
```

## cin 数据输入

### 语法：

```c++
数据类型 变量;
cin >> 变量;
cin >> 变量1 >> 变量2; //输入多个变量 以空格分割
//回车表示一个输入完成 
```

### 中文乱码解决

  * ctrl + shift + / 选择注册表 然后取消勾选run.processes.with.pty

## 算数运算符

  * 算数运算符
  * 赋值运算符: = += -= *= /=
  * 比较运算符:
    * 字符串比较
    * ```c++
        //c语言风格 
        // char str[]; char *str; 直接比较时为内存地址比较
        //如果比较内容 则需要strcmp()函数 
        #include "cstring" //C语言字符串库
        strcmp(str1,str2);//返回值 -1：str1<str2；0：str1 = str2；1:str1>str2;
        //C++风格 string类型都是c++；
        //只要有一个在比较中时string类型，就会自动转化为C++风格
      ```
  * 逻辑运算符：`!(取反) && || ==`
  * 位运算符 << >> & |
  * 零
  * 三目运算符
  ```c++
    //产生bool类型结果的表达式 ? 值1 : 值2 ;
    //结果为true 则为值1 ；结果为false 则为值2；
    int value1 = 1,value2 = 2;
    string value = value1 > value2 ? "大于二" : "小于二";
    cout << value << endl ;
    //结果：小于二 
  ```

# 第二章节
## AI辅助(贼拉NB) 通义灵码 iFlyCode
   * 可以通过对话框提问问题，如：` if 的用法`
   * 可以选中代码，解释代码含义
   * 可以生成注释（选中右键选择）
   * 使用手册[通义灵码](https://help.aliyun.com/document_detail/2593036.html?spm=a2c4g.2590615.0.0.3ef62eceuEIUJq)
   * 快捷键：
     * ALT + P      //根据注释生成行间代码
     * Ctl Shift L  //打开/关闭智能问答窗口
     * Tab          //接受行间代码建议
## 随机数生成
```c++
    #include "random" //随机数库
   //获取随机数两个范围内的
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
      std::cout << random_number << std::endl;
      // 返回生成的随机数
      return random_number;
   }
   
```
##  if逻辑判断综合练习

```c++
   #include "random" //随机数库
  //获取随机数两个范围内的
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
      std::cout << random_number << std::endl;
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

```

## switch 语句

   * ```c++
     switch(expression){
     case expression1: coude; break;
     case expression2: coude; break;
     }
     //expression 只能是常量表达式，应当赋予一个常量值
     //类型应为整形（int、short、char）和枚举类型。
     //break跳出switch；不写break将执行下一个case语句；
     ```
## 枚举类型
   本质是一个被命名的整数型常数合集

   * 提高代码可读性、可维护性和键入性
   * 可以将一些数字或字符串符号化，以此增强程序的可读性和可维护性

   ```c++
   enum 枚举名{
       枚举元素1，//枚举元素1的值为0
       枚举元素2，
       ...
       枚举元素n
   };
   //枚举类型默认从0开始，也可以自定义,值按顺序递增;也可以单独给每一个元素赋值
   //定义枚举类型变量：
   枚举名 变量名 = 枚举元素;
   ```
## while()循环

   ```c++
   while(条件表达式){
       code;
   }
   ```
## 概率表示

```c++
    #include "random" //随机数库
    int get_random_number(int min, int max) ;
  
    bool = succeed_get;
    int num = get_random_number(1,20);
    if(num == 1)
    {
        cout << "5%的概率为1" << endl;
        succeed_get = true;
    }else{
        succeed_get = false;
    }
```
