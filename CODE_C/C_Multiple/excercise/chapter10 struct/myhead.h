/*
 * @Author: your name
 * @Date: 2021-08-26 09:21:21
 * @LastEditTime: 2021-08-26 10:16:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter10 struct\myhead.h
 */

#include <stdio.h>
#define PRINT_FLOAT(x) printf("%f\n", x)
#define PRINT_INT(x) printf("%d\n", x)
#define TRUE 1
#define FALSE 0
#define ERROR -1

typedef int Bool;
typedef struct rectangle *rec;

struct point
{
    int x, y;
};

struct rectangle
{
    struct point upper_left, lower_right;
};

int getArea(struct rectangle r);
