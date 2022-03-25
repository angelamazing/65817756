<!--
 * @Author: your name
 * @Date: 2021-08-27 11:50:33
 * @LastEditTime: 2021-08-28 14:41:20
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter14 standard library\article.md
-->
1. C语言的标准库总共划分为15个部分,每个部分用1个头来描述
    标准头:函数原型+类型定义+宏定义

2. 对标准库中使用名字的一些限制
    1. 该文件不能以任何目的再使用头文件中定义过的宏
    2. 具有文件作用域的库名(尤其是类项名)也不可以在文件层次重定义
        例如在<stdio.h>中size_t已经被定义为类型名
    3. 由一个下划线和一个大写字母开头或两个下划线开头的标识符是标准库中保留的标识符.
    4. 由一个下划线开头的标识符被保留,用于文件作用域内的标识符和标记.
    5. 在标准库中所有的外部链接的标识符都被保留

3. 使用宏隐藏函数
    在<ctype.h> 中有大量的成对的函数或宏定义的例子
    例如:
    定义了一个函数 int isprint(int c)
        也定义宏  #define isprint(c) ((c)>=0x20 && (c)<=0x7e)
        默认情况下,对isprint的调用会被宏替代(因为宏名会在预处理的时候被处理)
    如果我们需要真实的调用该函数怎么办?
    1. #include <ctype.h>
       #undef isprint
        即使isprint不是宏也不会带来任何负面影响,因为当所提供的名字没有被定义时,#undef指令不会起任何作用
    2. (isprint)(c)
        预处理器无法分辨带括号的宏,除非宏名后面跟着一个左括号
        编译器则比较聪明

4. 标准库概述
5. <stddef.h> 常用定义
    提供了常用的类型和宏的定义
    ptrdiff_t   指针相减运算返回的结果
    size_t      sizeof的返回值类型
    wchar_t     足够大的,用于表示所有支持的地区的所有字符的类型
    所有这3种都是整数类型
    NULL 空指针
    
    offsetof需要2个参数:`类型`(一个结构类型) `指定成员`(结构的一个成员)
    会计算出结构的起点到指定成员之间的字节数
    在把结构写入文件时,有一个方法可以只写入指定部分:
    struct s{
        char a;
        int b[2];
        float c;
    }
    写入前两个,通过offsetof(s,c);

6. 问题
    1. 为什么是标准头,而不是标准头文件,因为有些标准头已经内置在编译器中
