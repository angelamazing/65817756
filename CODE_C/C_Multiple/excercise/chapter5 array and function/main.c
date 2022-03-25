/*
 * @Author: your name
 * @Date: 2021-08-23 16:50:53
 * @LastEditTime: 2021-08-24 11:08:56
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter5 array and function\main.c
 */

#include "./myhead.h"

int main(void)
{
    int n,result;
    while (scanf("%d", &n) == 1)
    {
        result = numDigits(n);
        printf("该数字有%d个数码\n",result);
    }
    return 1;
}