/*
 * @Author: your name
 * @Date: 2021-08-16 10:19:34
 * @LastEditTime: 2021-08-16 10:43:09
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter3 statement\statement.c
 */

#include <stdio.h>
#define j 3

int main()
{
    int mynum;

    scanf("%d",&mynum);

    mynum = mynum > j ? 1 : mynum == j ? 0 : -1;

    printf("final mynum : %d",mynum);
    
    return 0;
}
