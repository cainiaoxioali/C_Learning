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
## for循环语句
for循环语句的语法格式如下：
for(1.初始化语句;2.条件语句;4.更新语句)
{
   3.循环体;
}
初始化语句、条件语句和更新语句都是可选的，根据需求选择使用。

## 变量的作用域 
{... ...}两个大括号为一个**代码块**也是内部变量的作用域，

在{}代码块内定义的变量,只能在{}里访问和使用，{ }外访问不到不到
## 循环中断语句 
* `continue`关键字，跳过本次循环，继续下一次循环。
* `break`关键字，直接跳出整个循环。
## goto跳转语句
无条件跳转不建议使用
`goto label（标签名）`
当执行到goto语句时，将跳转到指定的标签位置继续执行代码。
```c++
int mian()
{
    labele1:
            ... ...;
            ... ...;
    label2:
            ... ...;
    goto label1; //跳转到labele1继续执行代码
}
```
# 第三章
## 数组
### 什么是数组
由同一批相同类型的元素（element）的集合所组成的数据结构，分配一块连续的内存来存储
`<数据类型> <数组名> [<数组长度>] `

`int num [10]`//一共十个元素，下标索引从0开始
### 数组赋值
1. 单独赋值 `num[0] = 1;`
2. 同步赋值 `num[5] = {1,2,3,4,5};`//这里的长度可以不写，自动定义为赋值的个数
### 注意事项
1. 数组包含的元素只能是相同类型
2. 每个元素拥有下标且从0开始
### 数组的特点
1. 任何类型都可以构建数组
2. 固定大小（无边界检查）初始化的过数组大小不能改变，<u>下标索引一定不能超出范围</u>
3. 内存连续且有序
4. 计算数组包含的元素个数： `sizeof(数组)/sizeof(数组某一元素)`
5. 元素可以修改（必须同类型）
6. 数组变量记录第一个元素的地址 
   >> 数组元素的访问规律
   > `int num[] = {1,2,3,4,5}`
   > num 记录num[0]的地址
   > num[0]地址+单个空间大小（如int定义的数组，4个字节），即可找到num[1]
   > num[1]+4个字节，既可找到num[2]
### 数组遍历
高级for循环写法
- 在每次循环体中，通过临时变量记录数组的每一个元素
- 数组有几个，循环体就执行几次
```c++
    for(元素类型 临时变量 : 数组名) 
    {
        临时变量存储的就是对应元素;
    }
/* - ---- -- - -- - - - -- - - -- --*/
    int arr[] = {1,2,3,4,5};
    for(int element :arr)
    {
        cout << "element" << endl;
    }
``` 
### 字符数组  
to_string(): 将数字转换为字符串;
> >"hello"  
> 1. `char s[] = "hello" `
> 2. `char s[] = { 'h','e','l','l','o','\0' }`

以上两种c语言风格字符串(意义完全相同)，其存储机制
- 将每个字符，作为1个元素，存入字符数组中
- 在字符串数组中，额外在最后添加一个\0 (空字符)作为结束标记,第一种方法会自动添加空字符
- 不适用于中文字符，中文字符请使用string
### 多维数组
- 对数组进行嵌套，数组的元素依是数组
- 定义：
  - 同时赋值
   - >  `int arr[3][4] = {{0,1,2,3},{10,11,12,13},{20,21,22,23}}`  
        注：多维数组的长度不能省略
        二维数组里由3个长度为4的一维数组
        ```c++
        //相当于
        arr[0] -> {0,1,2,3};        //长度为 4*int（四字节）  
        arr[1] -> {10,11,12,13};    //长度为 4*int（四字节）  
        arr[2] -> {20,21,22,23};    //长度为 4*int（四字节）  

        ```
  - 单独赋值
    - > `arr[0][0] = 0; `//第一个嵌套括号的开头  
        `arr[0][1] = 1; `  
        `arr[0][2] = 2; `  
        `arr[0][3] = 3; `  
        `arr[1][0] = 10; `//第二个嵌套括号的开头  
        `arr[2][0] = 20; `//第三个嵌套括号的开头

## 指针
- 指针变量de：存放地址的变量
- 大小：64位电脑是8字节
### 指针变量的定义
通常所说的指针就是指针变量。
`<数据类型> * <指针变量名>=&<变量名>;`
`int num = 10;`
`int * p = &num;`//p指向num的地址,p是num的指针（就是将num的地址赋值给指针变量p）
指针变量的类型和被指针变量指向的变量类型必须一致，表示指针指向的内存区域所存放的数据类型
```c++
    int num = 10;
    int * p = &num;
    cout<<  p << endl; //输出num变量的地址
    cout<<  *p << endl; //输出num变量的值
```
- *号有两种含义
  - 在声明变量时，*号表示该变量是一个指针变量
  - 在定义指针变量时，*号表示取指针变量p指向的内存区域存放的数据类型
- &符号表示取变量的地址
### 野指针
- 指针变量未初始化，不知道指向那俩，不可直接使用，后果不可预料。
- 为避免指针野指针，在定义指针变量时，必须初始化
- 若不想初始化，可用NULL指针
  - `int * p = NULL;`或`int * p = nullptr;`
### 指针运算
- 指针可以进行加减操作，其运算结果和指向内存区域的数据类型有关
  - char类型指针 +1，地址 +1字节；int类型指针 +1，地址 +4字节
  - 指针 +n或-n，即地址 + n * 类型大小  （sizeof(指针变量所指向的数据类型)）
- 使用场景
  - 可以用来操作数组，数组的内存地址是连续的，所以可以进行加减操作，数组名就是第一个元素的地址, 数组名+n，就是第n个元素的地址
  - ```c++
      int arr[] = {1,2,};
      int * p = arr;
      cout << p << endl;
      cout << arr << endl;//输出地址一样
      cout << *p << endl;
      cout << *arr << endl;//输出值一样
      cout << p[0] << endl;
      cout << arr[0] << endl;//输出值一样
      cout << *(p+1) << endl;
      cout << *(arr+1) << endl;
      cout << p[1] << endl;
      cout << arr[1] << endl;//输出值一样
    
    ```
## 动态内存分配
- 动态内存分配：在运行时，申请内存，释放内存
- 静态内存分配：在编译时，申请内存，释放内存，运行时不可释放
- 动态内存分配：
  - 申请内存：`new <数据类型>`
  - 释放内存：`delete <指针变量名>`
  - 申请数组内存`new <数据类型>[num]`
  - 释放数组内存：`delete[] <指针变量名>`
  - 数组申请时赋值：`int * pArr = new <数据类型>[num] {1,2,3,4,5}`
- 动态内存分配的指针变量，必须初始化
- 动态内存分配的指针变量，必须释放内存，否则会造成内存泄漏
    - `int * p = new int;`      //p指向的内存区域，由new分配，由delete释放
    - `delete p;`
    - `int * p = new int[10];`  //分配数组内存由
    - `delete[] p;`             //释放数组内存
- 写完new语句，要立刻跟着delete语句，防止遗忘释放内存
## 数组元素移除
  - 建议使用指针配合动态内存分配
    - 方便进行空间管理
    - 方便于修改指针指向     
## 指针悬挂问题
- 指针指向的区域已经被回收（delete）
  - 1. 不要轻易使用指针互相赋值
  - 2. delete回收之前要确保空间100%未被使用
## 常量指针
const 用来修饰常量，表示不可更改，可以配合指针使用
- `const int *p;` 指向常量的指针，即存储值不可变，但指向可变
- `int * const p = 地址;` 常量指针
  - 存储值可以修改
  - 指针指向不可修改
  - 必须初始化指针地址
- `const int * const p = 地址` 指向常量的常量指针
  - 指针指向和存储的值均不可修改
使用场景
  - 需要常量也需要动态内存分配的场景
  - 因为只有使用指针才可以动态分配内存
# 第四章
## 结构体 struct
用户自定义复合数据类型，可以包含多个不同类型的不同成员
```c++
struct 结构体类型
{
    成员类型1: 成员名称1;
    成员类型2: 成员名称2;
};//注意分号@
struct Student
{
    string  name;
    int age;
    string gender;
};
//声明结构体变量
struct Student stu; //struct可以省略
//赋值
stu = {.name = "小明",.age:11,.gender:"男"};//成员类型前一定要加 . 
//输出
cout << stu.name << stu.age << endl;//不能整体输出，需要访问单个成员 结构体变量.结构体成员。
//同时赋值
struct Student stu = {.name = "小明",.age:11,.gender:"男"};
```
### 结构体默认值
```c++
struct Student
{
    string  name;
    int major_code = 010086;//专业代码
    int dormitor_num = 1;   //宿舍楼号
};
//声明的结构体变量如果赋值，就按定义时初始化的值
```
### 结构体数组
```c++
struct Student
{
    string  name;
    int age;
    string gender;
};
//结构体数组的声明
struct Student stu[3];
//赋值
stu[0] = {.name = "小明",.age:11,.gender:"男"};
stu[1] = {.name = "小红",.age:12,.gender:"女"};
stu[2] = {.name = "小刚",.age:13,.gender:"男"};
//或
struct Student stu2[2] = {
        {.name = "小明",.age:11,.gender:"男"},
        {.name = "小红",.age:12,.gender:"女"}
};
//注：按顺序赋值时 .成员名称 可以省略
stu[0] = { "小明",11,"男"};
//访问
cout << stu[0].name << stu[0].age << endl;
```
### 结构体指针
```c++
//声明结构体
struct Student
{
    string  name;
    int age;
    string gender;
};
//声明结构体指针
struct Student * pStu;
//通过new申请指针内存（空间）
struct Student * pStu = new Student;
//指针变量访问结构体成员
pStu->name = "小明"; //将 . 换为->
```
### 结构体指针数组
主要用于动态分配内存，方便管理大量结构体占用的内存
```c++
//必须先定义一个类型的结构体
struct Student
{
    string  name;
    int age;
    string gender;
};
//1.引入已存在结构体数组地址
struct Student stu[3] = {{周杰伦,18,"男"},{ 林俊杰,19,"男"},{张学友,20,"男"}};
//指向已存在的数组地址
struct Student * pStu = stu;//数组名本身就是地址
//访问
cout << pStu[0].name << pStu[0].age << endl;
cout << pStu[0].name << pStu[0].age << endl;
//2.通过new申请指针数组内存（空间）

struct Student * pStu = new Student[3];

```
## 函数
函数（Function）：将一段代码封装起来，可重复使用，完成特定功能的独立代码单元，方便调用
### 函数声明：
```c++

return_type function_name(parameter_list)
{
    function_body;
    return return_value;
}
return_type     函数返回值类型
function_name   函数名
parameter_list  函数参数（多个参数用逗号分隔）
function_body    函数体
return_value     函数返回值
```
### 函数调用：       
```c++
//函数调用
function_name(parameter_list);
```
### 无返回值函数
void 表示空类型
### 空参函数
（）括号中的参数可以省略
### 函数的值传递和地址传递
- 函数的值传递：函数调用时，将参数值复制一份，函数内部对参数值的修改不会影响函数调用时的参数值
- 函数的地址传递：函数调用时，将参数地址复制一份，函数内部对参数地址的修改会影响函数调用时的参数地址
### 函数传入数组
- 函数传入数组时，传入的是数组的地址，而不是数组的值。数组名（数组对象）本身只是第一个元素的地址，所以数组传参不区分值传递还是地址传递<u>本质都是传递的指针（地址）。</u>
- 一下3种写法，没有任何区别
  - >`void func1(int * arr)`
  - >`void func2(int arr[])`
  - >`void func3(int arr[10])`//长度10没有意义
- 传入数组时一般建议附带数组长度的传入，因为C/C++中数不会检查数组边界内存，所以需要传入数组长度
- 规范写法
- > `void func(int arr[],int len)`
## 引用
- 引用（Reference）：引用是给变量个别名，引用变量和被引用变量是同一块内存，所以对引用变量的操作，对被引用变量也会产生影响
- 引用的声明： `int& ref_name = 被引用变量名;` & 表示引用, ref_name 是引用变量名，被引用变量名是 `被引用变量名`
- 引用对象不可更改
- 创建时，必须初始化引用变量，且被引用变量不能为0 否则编译器会报错
### 引用传参
- 引用传参时，引用变量和被引用变量是同一块内存，所以对引用变量的操作，对被引用变量也会产生影响
- void(int &ref_name1,int &ref_name2)
- 可以实现值的改变且操作比传地址方便
## 返回内存地址（返回指针）及局部变量的生命周期
- 语法
```c++
// 语法
return_type * function_name(parameter_list)
{
    int return_value;
    function_body;
    return &return_value;
    //会报错，因为return_value是局部变量，
    //生命周期结束，所以返回的地址会失效
}
//规避方法:使用动态分配内存 
return_type * function_name(parameter_list)
{
    //动态分配内存，只会被手动删除
    int * return_value = new int;
    function_body;
    return return_value;
}
//删除
int mian()
{
    //将开辟空间地址 赋给新的变量
    int * p = function_name(parameter_list);
    delete p;//释放空间
    
}
```
### static 关键字 （静态）
- static 关键字：静态变量，静态变量在函数调用结束后，不会被释放，而是一直保留在内存中，直到程序结束
- static修饰的变量，在程序运行结束后销毁
- 可以用来延长局部变量的生命周期
```c++
return_type * function_name(parameter_list)
{
    static int return_value;
    function_body;
    return &return_value;
    //返回地址,不会报错，
    // 因为return_value是静态变量，生命周期不会结束
}
```
### 返回数组
- 本质是返回指针，语法可以按照返回指针的语法
```c++
int * func()
{
    code...;
    return arr;
}
```
- 返回的数组不可以是局部变量