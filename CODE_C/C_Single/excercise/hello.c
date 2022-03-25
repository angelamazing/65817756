/*
 * @Author: your name
 * @Date: 2021-07-25 20:54:29
 * @LastEditTime: 2021-09-24 10:53:02
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Single\excercise\hello.cpp
 */

#include "./myhead.h"
#include <math.h>

int main(int argc, char *argv[])
{
    float sum;
    int i;
    for(i=0;i<100;++i)
        sum+=0.01;
    printf("%f",sum);

    return 0;   

}