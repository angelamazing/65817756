/*
 * @Author: your name
 * @Date: 2021-08-28 15:21:17
 * @LastEditTime: 2021-08-28 15:32:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter15 stream\main.c
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    if (argc != 2)
    {
        printf("wrong");
        return 2;
    }
    if ((fp = fopen(argv[1], "r") == NULL))
    {
        printf("wrong");
        return 1;
    }
    printf("%s can be open\n", argv[1]);
    fclose(fp);
    return 0;
}
