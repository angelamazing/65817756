/*
 * @Author: your name
 * @Date: 2021-08-26 09:58:47
 * @LastEditTime: 2021-08-26 10:15:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter10 struct\myfunction.c
 */
#include "./myhead.h"

Bool setRectangle(rec r, int leftx , int lefty, int rightx, int righty)
{
    r->lower_right.x = rightx;
    r->lower_right.y = rightx;
    r->upper_left.x = leftx;
    r->upper_left.y = lefty;
    return TRUE;
}

int getArea(struct rectangle r)
{
    int length = r.lower_right.x - r.upper_left.x;
    int width = r.upper_left.y - r.lower_right.y;
    return length * width;
}