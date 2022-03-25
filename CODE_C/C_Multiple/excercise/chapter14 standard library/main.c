/*
 * @Author: your name
 * @Date: 2021-08-28 11:42:05
 * @LastEditTime: 2021-08-28 11:59:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter14 standard library\main.c
 */
#include <stddef.h>
#include <stdio.h>

#define PRINT_INT(x) printf( "%lld" ,(x))

int main(void)
{
    struct s{
        char a;
        int b[2];
        float c;
    };
    PRINT_INT(offsetof(struct s,a));
    
    return 0;

}