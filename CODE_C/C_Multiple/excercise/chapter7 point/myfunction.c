/*
 * @Author: your name
 * @Date: 2021-08-24 14:14:11
 * @LastEditTime: 2021-08-24 15:05:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter7 point\myfunction.c
 */

void max_min(int a[], int n, int *max, int *min)
{
    *max = a[0];
    *min = a[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] > *max)
            *max = a[i];
        if (a[i] < *min)
            *min = a[i];
    }
}

//指针传参交换数值
void swap(int *p, int *q)
{
    *p = *p ^ *q;
    *q = *p ^ *q;
    *p = *p ^ *q;
}

