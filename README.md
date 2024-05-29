# 开始学习C++
2024/5/29
## 使用Clion显示中文

 * 显示中文设置
  1. #include `"windows.h"` 并在 main中加入 `SetConsoleOutputCP(CP_UTF8)`;
  2. 在main中加入 `system("chcp 65001")`;
## cout 打印输出
1. //两个<<之间数组内容 ，可以任意拼接，endl表示换行:

   `cout << "helow" << "world" << endl;`
   `cout << (num -= 5 )<< endl ;`//加入运算用括号
2. //如果只有一个输出:`cout << "hellow"`
3. 转义字符:\

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
## 标识符命名规则
1. 字母数字下划线组成，数字不能开头
2. 不能是关键字
3. 区分大小写
## 数据类型
`sizeof(数据)` 计算数据类型的字节长度
1. 整型
    
    |      数据类型       |     占用空间      | 
    |:---------------:|:-------------:|
    |      short      |      2字节      |
    |       int       |      4字节      |
    |    long(长整型)    | win为4 linux为8 |
    | long long(长长整形) |      8字节      |
    无符号整形：unsigned 只有正数
   *unsigned int 可以简写为 u_int;
2. 实型
    
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
3. 字面常量的类型
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
4. 字符型char
    
    |      类型       | 字节数 |    范围    |
    |:-------------:|:---:|:--------:|
    |     char      | 1字节 | -128~127 |
    | unsigned char | 1字节 |  0~255   |
    通过ASCII码表映射 `char = 65`为大写A`char = 97`为小写a
 
5. 转义字符
    ASCII码表中字符分为两类：打印字符和非打印控制字符
    * 非打印控制字符只用于表示各种控制功能，如换行、制表等。
    * 如果要使用非打印控制字符的的功能，可以使用<u>转义字符</u>形式
    * `\n` 换行、 `\t` 水平制表tab可以补充八个字符单位、 `\\` 代表一个\  `\'` 一个单引号 `\"`双引号
6. 字符串
 * C语音风格 
```c 
 char a[] = "string"    \\ 字符数组形式,无法直接修改变量值
 char *b = "string"     \\指针形式
 ```
 * C++风格
    ```string str = "itxioaming"```

7. 字符串拼接
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
8. 布尔类型 
    * true 本身是数字1
    * false 本身是0
    * 
| 数据类型 |     字面量      |     说明     |
|:----:|:------------:|:----------:|
| bool | true 或 false | 真或假 本质为1或0 |
主要用于逻辑判断
```c++
    bool flag = true; //亦可以bool flag = 1;
    bool flag1 = false;//bool flag = 0;
```
9.  cin 数据输入
* 语法：
```c++
数据类型 变量;
cin >> 变量;
//回车表示一个输入完成
```
* 中文乱码解决
  * ctrl + shift + / 选择注册表 然后取消勾选run.processes.with.pty

  10. 算数运算符
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
  * 逻辑运算符
  * 位运算符
  * 零