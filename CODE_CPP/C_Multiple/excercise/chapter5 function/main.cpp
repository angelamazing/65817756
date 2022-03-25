/*
 * @Author: your name
 * @Date: 2021-08-03 11:44:02
 * @LastEditTime: 2021-08-03 15:23:54
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter5 function\main.cpp
 */

#include "../head/h1.h"
#include "../function/stringFunction.cpp"

int main()
{
    string::size_type occurs;
    string s1 = "aabdfbb";
    string::size_type result = find_char(s1, 'b', occurs);
    cout << occurs << ' ' << result;

    return 0;


}
