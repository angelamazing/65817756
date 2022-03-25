/*
 * @Author: your name
 * @Date: 2021-08-03 11:19:02
 * @LastEditTime: 2021-08-03 11:37:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter3 array\array.cpp
 */
#include "../head/h1.h"

int main(void)
{
    constexpr unsigned sz = 42; //编译器常量

    int arr[10];
    int *parr[sz];
    int a[sz] = {1, 2, 3};       //0...
    string b[5] = {"you", "me"}; //""...
    char c[] = {'c', 'd'};

    /* int &refs[10]=/*?8*没有引用的数组/ */
    int(*p)[10] = &arr; //p指向含有10个整数的数组
    int(&ref)[10] = arr;
    /* int *(&array)[10]=ptrs 含有10个int型指针的引用*/
    
    //一般情况下,编译器自动将数组名替换为一个指向数组首元素的指针
    //但是,使用decltype是一个例外,decltype(arr) ia3={0,1,2,3,4,5,6,7,8,9}
}