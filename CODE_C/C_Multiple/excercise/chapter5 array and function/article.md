<!--
 * @Author: your name
 * @Date: 2021-08-23 16:50:59
 * @LastEditTime: 2021-08-24 10:53:23
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter5 array\article.md
-->
# 1数组

1. 一维数组
2. 下标
3. 初始化
    int arr[10]={1,2,3} //其余为0,大括号内必须放置一个元素
    int arr[]={1,2,3};

4. 多维数组
5. 初始化
    int m[5][9]={
        {1,2,3,4,5,6,7,8,9},
        {2,3,4,5,6,7,8,9,10},
        {3,4}
    };
    一行未填满,这一行剩余为0
    剩余未填的行,全0

    int m[5][9]={1,2,3};
    从第一行开始填,后面全为0

6. 常量数组
    const int months[]={31,28};

# 2函数

1. 定义
    float average(float a,float b)
    {
        return (a+b)/2;
    }
    形式参数
    实际参数
    函数体

2. 返回类型的限制
    1. `无法返回数组`
    2. 如果忽略返回类型,会假定返回类型是int
    3. 指定void,说明函数没有返回值

3. 调用
    函数名(实参)
    故意丢掉返回值: (void) printf("hi\n");

4. 声明

5. 实际参数(argument) 形式参数(parameter)
    1. 实际参数通过值传递的
    2. 类型转换
    3. 数组作为实际参数
        c语言没有提供任何简便的方法来确定传递给它的数组的长度
        参数中多维数组必须指出列的数量

6. 递归函数
```c
int fact(int n)
{
    if(n<=1)
        return 1;
    else
        return n*fact(n-1);
}
