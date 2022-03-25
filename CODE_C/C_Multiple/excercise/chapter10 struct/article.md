<!--
 * @Author: your name
 * @Date: 2021-08-25 14:31:28
 * @LastEditTime: 2021-08-26 09:21:55
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter10 struct\article.md
-->
# 1结构
1. 结构变量的声明
    struct {
        int number;
        char name[NAME_LEN-1];
        int on_hand;
    }part1,part2;
2. 初始化
    struct {
        int number;
        char name[NAME_LEN-1];
        int on_hand;
    }part1={525,"ten",10},
    part2={543,"ren",15};
3. 操作
    1. .运算符
    2. 赋值: part2=part1;
    struct {int a[10]} a1,a2;
    a1=a2;
4. 结构类型
    1. 结构标记
    struct `part`{
        int number;
        char name[NAME_LEN-1];
        int on_hand;
    }
    part part1,part2;
    2. 结构类型的定义
    `typedef` struct {
        int number;
        char name[NAME_LEN-1];
        int on_hand;
    }`Part`;
    3. 结构类型的实际参数和返回值
    void print_part(struct part p)
    {//代码}
    struct part build_part(int number, const char*name, int on_hand)
    {
        struct part p;
        //代码
        return p;
    }
    给函数传递结构和从函数返回结构都要求使用结构中所有成员的副本,这样开销很大
5. 数组 和 结构的嵌套
    1. 嵌套的结构:一种结构嵌套到另一种结构中
    2. 结构数组
    3. 结构数组的初始化

# 2联合
    也是由一个或多个成员组成的,这些成员可能由不同的数据类型
    但是编译器只为最大的成员分配足够的内存空间
    联合的成员在这个空间彼此覆盖,给一个成员赋值也会改变其他成员的值
    union{
        int i;
        float f;
    }u;
    
    1. 联合节省空间
    2. 联合构造混合的数据结构
    3. 联合添加`标记字段`
    typedef union {
        int i;
        float f;
    } Number;
    问题:
    void printf_number(Number n)
    {
        if(n包含一个整数)
            printf("%d",n.i);
        else
            printf("%g",n.f);
    }
    解决:
    #define INT_KIND 0
    #define FLOAT_KIND 1
    typedef struct {
        int kind;
        union {
            int i;
            float f;
        }u;
    }Number;
        赋值:n.kind = INT_KIND; n.u.i = 82;
        判断:利用 n.kind == INT_KIND

# 3枚举
1. 枚举标记 枚举类型
    定义 enum suit { CLUBS, DIAMONDS, HEARTS, SPADES};
    声明 enum suit s1,s2;
    类型命名 typedef enum {FALSE,TRUE} Bool;
             Bool b1;

2. 枚举作为整数
    C语言会把枚举常量和变量作为整数来处理
        例如在suit中,CLUBS , DIAMONDS, ...分别为0 , 1 , 2 , 3
    
    enum dept {RESERCH = 20 , PRODUCTION = 10, SALES =25};
        具有相同的值也是可行的
    enum color { red = 3 , blue , yellow = 25} //这里bulue = 4;

3. 枚举作为标记字段
    typedef struct {
        enum {INT_KIND, FLOAT_KIND} kind;
        union {
            int i;
            float f;
        } u;
    } Number;

# 4难题

1. struct {
    char a;
    int b;
} s;
如果char是1个字节,int是4个字节,请问s的大小是多少?
我们可以轻易的回答是 `5` 个字节,但可能不是正确的答案.
为了满足计算机的要求,可以会在邻近的成员之间留 `空洞` 
编译器把结构的成员`排列`起来
假设数据项必须从 `4` 个字节的倍数开始,那么结构s的成员a 后面将有 3个 字节的空洞,结果sizeof(s)为 `8`

2. 为什么使用==判定两个结构是否相等是不合法的?
3. 结构可否同时有标记名和类型名
typedef struct `part` {
    int number;
    char name [NAME_LEN+1];
    int on_hand;
} `part`;

# 5位字段
```c
typedef struct {
  unsigned int ab:1;
  unsigned int cd:1;
  unsigned int ef:1;
  unsigned int gh:1;
} synth;
synth.ab = 0;
synth.cd = 1;
```