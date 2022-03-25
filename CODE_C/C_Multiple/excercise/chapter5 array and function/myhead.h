/*
 * @Author: your name
 * @Date: 2021-08-23 17:05:35
 * @LastEditTime: 2021-08-24 11:03:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter5 array\myhead.h
 */
#include <stdio.h>
#include <ctype.h>


#define TRUE 1
#define FALSE 0
#define ERROR -1
#define SIZE sizeof(myarr)/sizeof(myarr[0])
#define DECIMAL 10
/* #define INTETREST 0.06;
#define STORAGEYEARS 5; */


typedef int BOOL;
typedef double ElementType;
BOOL reverseArray(int arr[],int n);
BOOL showArray(ElementType arr[], int n);
void ShowSaving(double StartInterest, int years);
BOOL isPrime(int n);
int numDigits(int n);