/*
 * @Author: your name
 * @Date: 2021-08-03 11:38:35
 * @LastEditTime: 2021-08-03 11:50:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter4\main.cpp
 */
#include "../head/h1.h"

int main(void)
{
    int i = 42;
    int *p;
    int *&r = p;
    r = &i;
    cout << *p << endl;
    *r = 0;
    cout << i;

    const int ci = 1024;
    const int &r1 = ci;
    //r1=0;错误
    //int &r2 = ci;错误

    const double pi = 3.14;
    /* double *ptr = &pi; error*/
    const double *cptr = &pi;

    int errNumber = 0;
    int *const curErr = &errNumber;
    /* curErr= &ci; err,curErr是一个固定的指针*/

    const double *const pip = &pi;
   /*  pip = &ci;error
    *pip = 3; error*/
}