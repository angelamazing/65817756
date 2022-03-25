/*
 * @Author: your name
 * @Date: 2021-08-16 11:06:10
 * @LastEditTime: 2021-09-20 18:21:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Single\excercise\myFunction.c
 */

//欧几里得 最大公约数
/* #include "./myhead.h" */

int Euclidean(int larger, int less)
{
    int final = less, middle = 0;
    while ((larger % less) != 0)
    {
        middle = larger % less;
        larger = less;
        less = middle;
        final = less;
    }
    return final;
}
//求整型数组的和
long int mySum(int tmp[], int n)
{
    long int result = 0;
    for (int i = 0; i < n; i++)
        result += tmp[i];
    return result;
}

//简易计算器
double myResult(double A, double B, char operation)
{
    double result = 0;
    switch (operation)
    {
    case '+':
        result = A+B;
        break;
    case '-':
        result = A-B;
        break;
    case '*':
        result = A*B;
        break;
    case '/':
        
        result = A+B;
        break;
    default:
        break;
    }
    return result;
}