/*
 * @Author: your name
 * @Date: 2021-08-24 16:34:55
 * @LastEditTime: 2021-08-25 09:52:54
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter8 string\main.c
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "abc";
    char s2[] = "bdf";
    char *p = s1, *q = s2;
    while (*p++ = *q++)
        ;
    printf("%s", s1);

    return 0;
}