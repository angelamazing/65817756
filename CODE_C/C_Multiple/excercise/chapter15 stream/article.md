<!--
 * @Author: your name
 * @Date: 2021-08-28 14:42:14
 * @LastEditTime: 2021-08-28 15:15:56
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter15 stream\article.md
-->
# 1流

# 2文件
1. 指针
    FILE *类型在<stdio.h>
    虽然OS会限制在任意时刻可以打开文件流的数量,但一个程序可以声明任意数量的FILE *变量
2. 标准流 和 重定向
    <stdio.h>提供3种标准流  
        stdin stdou  stderr
    demo < in.dat
    demo > out.dat
    demo < in.dat > out.dat
3. 文本文件 和 二进制文件
    1. 文本文件: 字节表示字符
        1. 按行划分:每行结尾采取特殊字符标记
        2. 文本结束也有特殊字符标记

    2. 二进制文件: 字节不一定表示字符
        1. 由于可以合法包含任何字符,所以不可能留出文件结尾字符.

4. 文件操作
    1. 打开
    FILE *fopen(const char *filename , const char *mode);
    DOS 中,因为c语言会把\看作转义字符的开始标志,所以:fopen("c:\\project\\test1.dat","r");
    无法打开文件时,返回空指针
    2. 模式
    文本文件:
    "r" "w" "a"
    "r+"读写,文件存在就从头开始
    "w+"读写,文件存在就截去
    "a+"读写,文件存在就追加
    二进制文件:b
    3. 关闭
    fclosed(fp)
    4. 为流附加文件
    freopen("foo","w",stdout)
    5. 命令行获取文件名
