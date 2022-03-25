/*
 * @Author: your name
 * @Date: 2021-08-05 14:44:13
 * @LastEditTime: 2021-08-05 15:55:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter6 class\class.cpp
 */

#include "../head/h1.h"

int main(void)
{
    Box Box1;
    Box1.set(1, 2, 5);
    double result = Box1.get();
    double sum = Box1.getSum();

    cout << result << ' ' << sum << endl;

    return 0;
}
