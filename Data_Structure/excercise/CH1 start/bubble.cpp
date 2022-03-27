/*
 * @Author: your name
 * @Date: 2022-03-27 10:21:38
 * @LastEditTime: 2022-03-27 10:33:06
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Data_Structure\excercise\CH1 start\bubble.cpp
 */

#include "../head/h1.h"
#include "../function/sort.cpp"

int main(void)
{
    int a[] ={1,3,2,1,5,3,2,1,4,5};
    int n = sizeof(a)/sizeof(int);
    Bubble(a,n);
    
    for(int i =0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}