<!--
 * @Author: your name
 * @Date: 2021-08-27 10:02:24
 * @LastEditTime: 2021-08-31 19:18:13
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter13 underground program\article.md
-->

1. 按位运算符
    1. 移位运算
    << 
    >>
    为了可移植性,最好仅对无符号数进行移位运算
    2. 逻辑运算
    ~   求反
    &   位与
    ^   位异或
    |   位或
    `优先级`从上到下 
    3. 用位运算符 访问 `位`
        1. 设置位
         i |= 1 << j;  
