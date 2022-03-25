/*
 * @Author: your name
 * @Date: 2021-08-16 09:51:02
 * @LastEditTime: 2021-08-16 10:14:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter2 variable\variable.c
 */
#include <stdio.h>
#define pi 3.14

int main(void)
{
    float radius = 0.0;

    
    printf("请输入半径:");
    scanf("%f",&radius);

    printf("圆的面积为: %f",pi*pi*radius);

    return 0;//exit(0)
}