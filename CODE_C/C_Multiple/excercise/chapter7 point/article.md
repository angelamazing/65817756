<!--
 * @Author: your name
 * @Date: 2021-08-24 11:29:52
 * @LastEditTime: 2021-08-24 15:41:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter7 point\article.md
-->
# 1指针

1. 指针变量
    1. 大多数现代计算机用`字节`分割内存,每个字节有`8位`信息
    2. 程序中每个变量都占有`1个或多个字节`,把`第一个字节的地址`称为是变量的地址
    3. 指针就是存储地址的变量

2. 声明
    int *p;

3. 取地址运算符和间接寻址运算符
    int i, *p;
    p = &i;
    printf("%d",*p);

4. 指针作为实际参数

5. const保护实际参数

6. `指针作为返回值`

7. 指针等同于地址吗?
    通常是,但不总是.
    考虑用`字`而不是`字节`来划分内存
    `字`可以包含36位,60位...

# 2指针和数组

1. 指针的算数运算

2. 指针用于数组
    *p++ <=> *(p++)
    *++p <=> *(++p)

3. 数组名作为指针
    int a[10];
    *a=7 <=> a[0]=7

4. 指针作为数组名
    *(p+i) <=> p[i]

5. 指针和多维数组
```C
int a[num_rows][num_cols];
int *p,i;

for(p=a[i];p<a[i]+num_cols;p++)
    *p=0;
```

6. 多维数组名作为指针