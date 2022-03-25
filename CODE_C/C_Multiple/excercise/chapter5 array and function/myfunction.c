/*
 * @Author: your name
 * @Date: 2021-08-23 16:52:52
 * @LastEditTime: 2021-08-24 11:08:40
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter5 array\myfunction.cpp
 */

#include "./myhead.h"

//反转整型数组
BOOL reverseArray(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j) //交换数字,利用两次异或是其本身的性质
    {
        arr[i] = arr[i] ^ arr[j];
        arr[j] = arr[i] ^ arr[j];
        arr[i] = arr[i] ^ arr[j];
        i++;
        j--;
    }
    return TRUE;
}

//打印数组
BOOL showArray(ElementType arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%f\t", arr[i]); //这里的修饰符需要及时更新
        if ((i + 1) % 5 == 0)
            printf("\n");
    }

    return TRUE;
}

//??
/* BOOL isrepetitive(int num) //只接收非负整数,判断是否有重复的数码
{
    int tmp[10] = {0}, mid = 10;
    int i = 0, mynum;
    while ((mynum = num % mid) != 0)
    {
        
    }
} */

void ShowSaving(double StartInterest, int years)
{
    double myarr[25] = {0};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        myarr[i] = 100 * (1 + StartInterest + i * 0.01);
    }
    while (i < 25)
    {
        for (j = 0; j < 5; j++)
        {
            myarr[i] = myarr[i - 5] * (1 + StartInterest + j * 0.01);
            i++;
        }
    }
    showArray(myarr, SIZE);
}

//是否是素数
BOOL isPrime(int n)
{
    int tmp;
    for (tmp = 2; tmp * tmp <= n; tmp++)
        if (n % tmp == 0)
            return FALSE;
    return TRUE;
}

//数值中数字的个数
int numDigits(int n)
{
    int i;
    int tmp = DECIMAL;
    if (n == 0)
        return 0;
    for (i = 1; n / tmp != 0; i++)
        tmp *= tmp;

    return i;
}