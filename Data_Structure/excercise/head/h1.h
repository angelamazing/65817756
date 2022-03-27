/*
 * @Author: your name
 * @Date: 2021-07-25 20:54:29
 * @LastEditTime: 2022-03-27 10:28:58
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\head\h1.h
 */
#pragma once
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;

using std::string;
using std::vector;

string::size_type find_char(const string &s, char c, string::size_type &occurs);
bool Bubble(int a[], int n);


class Box
{
public:
    double length;  // 盒子的长度
    double breadth; // 盒子的宽度
    double height;  // 盒子的高度
    double get(void);
    void set(double len, double bre, double hei);
    double getSum(void);
};

double Box::get(void)
{
    return length * breadth * height;
}

void Box::set(double len, double bre, double hei)
{
    length = len;
    breadth = bre;
    height = hei;
}

double Box::getSum(void)
{
    return length + breadth + height;
}