/*
 * @Author: your name
 * @Date: 2021-07-29 14:30:36
 * @LastEditTime: 2021-08-03 11:19:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter6.function\main.cpp
 */
#include "../head/h1.h"


int main()
{
    vector<int> ivec1; //空
    vector<int> ivec2(ivec1);
    vector<int> ivec3(10, 1);      //1,1,1,1,1,1,1,1,1,1
    vector<int> ivec4(10);         //0,0,...
    vector<int> ivec5 = {1, 2, 3}; //1,2,3

    ivec5.push_back(4);

    /*     for (auto &i : ivec5)
        cout << i << " "; */

    auto b = ivec5.begin();
    auto e = ivec5.end();
    for (;b != e; b++)
        cout << *b;

    return 0;
}
