<!--
 * @Author: your name
 * @Date: 2021-08-25 10:05:42
 * @LastEditTime: 2021-08-25 14:30:04
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter9 Preprocessor\article.md
-->
# 1预处理器

1. 预处理器
    输入c语言程序->预处理器->执行这些指令->处理过程删除这些指令->输出 原程序的一个编辑后的版本,不再包含指令->交给编译器->目标代码
    1. 不仅是执行指令
    2. 每一处注释都替换为空格字符
    3. 进一步删除不必要的空白字符
    4. 仅知道少量C语言规则

2. 预处理指令
    1. #define 定义一个宏
    2. #include 包含一个文件
    3. 条件编译 #if #ifdef #ifndef #elif #else #endif

3. 宏定义
    1. 简单的宏
        #define 标识符 替换列表
    2. 带参数的宏
        #define MAX(x,y) ((x)>(y) ? (x):(y))
        #define TOUPPER(c) ('a'<=(c)&&(c)<='z'? (c)-'a'+'A':(c))
        #define getchar() getc(stdin)
        1. 程序可能会更快,因为函数调用通常有些额外开销:存储上下文,复制参数的值等;但是宏调用没有这些运行开销
        2. 宏会更 `通用` ,与函数不同,宏的参数没有类型,因此只要预处理后的程序是合法的,宏可以接受任何类型的参数.
        
        3. 编译后的代码通常会变大
        4. 宏参数没有类型检查
        5. 无法用指针指向一个宏:宏在预处理过程中会被删除
        6. 宏可能不止一次计算它的参数
        方便的使用:
        1. #define PRINT_INT(x) prinf("%d",x)

4. #运算符
5. ##运算符
    #define MK_ID(n) i##n
    效果如下: int MK_ID(1); <=> int i1;
    #define GENERIC_MAX(type)
    type type##_max(type x, type y)
    {
        return x > y?x:y;
    }

6. 宏的通用属性
    1. 宏的替换列表可以包含另外一个宏的调用
    2. 预处理器只会替代完整的记号,不会替代记号的片段
    #define SIZE 256
    if(BUFFER_SIZE > SIZE)
        puts("Error:SIZE exceeded");
    =>

    if(BUFFER_SIZE > 256)
        puts("Error:SIZE exceeded");
    3. 一个宏的作用范围通常到出现这个宏的文件结尾
    4. 宏不可以被定义两次
    5. 取消定义 : #undef `标识符`

7. 宏定义中的圆括号
    1. 宏的替换列表中有运算符
    2. 宏有参数

8. 创建较长的宏
    \

9. 预定义宏


# 2编写大规模程序
1. 源文件
2. 头文件
    1. #include "myfile" 
    2. 共享宏定义和类型定义
    3. 共享函数原型
    4. 共享变量声明
    5. 嵌套包含
    6. 保护头文件

3. 头文件中的#error指令

4. 把程序分为多个文件
5. 构建多文件程序

