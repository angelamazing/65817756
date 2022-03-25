/*
 * @Author: your name
 * @Date: 2021-09-01 14:19:57
 * @LastEditTime: 2021-09-06 15:36:18
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Single\excercise\myfun.cpp
 */
#include "./h1.h"

//记录函数调用次数
int myCnt()
{
    static int iCnt = -1;
    ++iCnt;
    return iCnt;
}

//返回绝对值
unsigned int ABS(int num)
{
    return num < 0 ? -num : num;
}

// 整数交换
bool sawpInt(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    return TRUE;
}

//字符串中是否有大写字母
bool hasUpper(const string &str)
{
    for (auto c : str)
        if (isupper(c))
            return TRUE;
    return FALSE;
}

//返回较大值
int bigOne(int a, int *p)
{
    return (a > *p) ? a : *p;
}

//返回数组中某一个元素的引用
int &get(int *arr, int index)
{
   return arr[index];
}

//计算斐波那契
constexpr int fibonacci(const int n)
{
    return n == 1 || n == 2 ? 1 : fibonacci(n - 1) + fibonacci(n - 2);
}