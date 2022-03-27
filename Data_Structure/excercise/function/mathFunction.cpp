/*
 * @Author: your name
 * @Date: 2021-07-29 16:07:13
 * @LastEditTime: 2021-07-30 14:02:04
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter2\myFunction.cpp
 */

int fact(int val)
{
    int temp = 1;
    while (val > 1)
    {
        temp *= val--;
    }
    return temp;
}

