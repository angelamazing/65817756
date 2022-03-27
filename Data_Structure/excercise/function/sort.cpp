/*
 * @Author: your name
 * @Date: 2022-03-27 10:22:43
 * @LastEditTime: 2022-03-27 10:31:23
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Data_Structure\excercise\function\sort.cpp
 */

bool Bubble(int a[], int n)
{
    int i = 0;
    while (i < n)
    {
        bool isFinished = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                isFinished = false;
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
        if (isFinished == true)
            break;
    }
    return true;
}