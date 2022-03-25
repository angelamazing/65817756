<!--
 * @Author: your name
 * @Date: 2021-08-16 15:43:49
 * @LastEditTime: 2021-08-23 16:47:58
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter4 variable\article.md
-->

1. 整型
```c
int;
short int;  //占用空间不多于int，一般占用2个字节
unsigned short int; 
long int ;  //占用空间不少于int，至少为4个字节
unsigned long int;
long long int   //占用空间多于long，至少为8个字节
```

2. 整型常量
    1. 十进制:0~9组成,但不能0开头
    2. 八进制:0~7组成,0开头
    3. 十六进制:0~9,a~f,0x开头
    4. 二进制:0b101010, 有些编译器使用
    5. `布尔类型` _Bool
3. 读写整数
    1. `unsigned int u`;
        十进制:%u
        八进制:%o
        十六进制:%x
        注意:没有直接的方式输出八,十六进制的数,可以`" - %o" <-> - myNum`
    2. `short int s`
        %hd %ho %hx
    3. `long int r`
        %ld %lo %lx

4. 浮点型
    1. float
    2. double
    3. long double

5. 浮点常量
    1. 57.0 57. 
    2. 57.0e0 5.7e1 .57e2 570.e-1
    默认情况下,浮点常量以double形式存储在内存中

6. 读写浮点
    1. double d
        %lf
    2. long double ld
        %Lf
    3. 输出用%f就行了
    4. 注意 double ,读%lf,写%f

7. 字符型
    signed char ch1;
    unsigned char ch2;

8. 转义字符 无法通过键盘输入的字符
    \n \b \t \r \?  ...

9. 字符处理函数
10. 读写字符
    getchar()
    putchar()

    `惯用法`
        while(getchar()!='\n') 
        while((ch=getchar())!='\n')

11. sizeof 
    size_t

12. 类型转换
    1. 算术转换
    2. 赋值两侧类型不同
        浮点数赋值给整数变量
        整数赋值给浮点数变量
        窄类型赋值给宽类型
        宽类型赋值给窄类型
    3. 调用参数类型与形参不匹配
    4. return 语句返回的类型不同
    5. 强制转换 int(myNum)

13. 类型定义
    #define BOOL int
    typedef int BOOL

14. 可移植类型