/*
 * @Author: your name
 * @Date: 2021-08-03 13:57:10
 * @LastEditTime: 2021-08-03 14:14:00
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\function\stringFunction.cpp
 */
#include "../head/h1.h"

//返回第一次出现的位置,并通过引用给出出现次数
string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); ++i)
    {
        if (s[i] == c)
        {
            if (ret == s.size())
                ret = i;
            ++occurs;
        }
    }
    return ret;
}

string myfunction()
{
    string s = "aaaa";
    return "bb";
}