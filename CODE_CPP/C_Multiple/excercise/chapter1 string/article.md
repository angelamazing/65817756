<!--
 * @Author: your name
 * @Date: 2021-08-02 17:22:36
 * @LastEditTime: 2021-09-24 20:37:33
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Ed类型
 * @FilePath: \C_Multiple\excercise\chapter1\article.md
-->
1.类型
```c++
    string s1(10, 'c');
    decltype(s1.size()) index;
    cout << "index:" << typeid(index).name() << " s1 " << typeid(s1.size()).name() << endl;
```
2. size_type
    由string类类型和vector类类型定义的类型
    用于`保存`任意string对象或vector对象的`长度`
    标准库类型将size_type定义为unsigned类型
    string::size_type它在不同的机器上，长度可以是不同的，并非固定的长度，但只要你使用了这个类型，就是的你的程序适这个机器，与实际机器匹配

3. size_t
    是为了方便系统之间的移植而定义的，它是一个无符号整型
    在32位系统上定义为unsigned int
    在64位系统上定义为unsigned long
    size_t一般用来计数，sizeof操作符的结果类型是size_t，该类型保证能容纳实现所建立的最大对象的字节大小。

4. size_t和size_type的主要区别
    1. size_t是全局定义的类型；size_type是STL类中定义的类型属性。在使用STL中表明容器长度的时候，我们一般用size_type。
    2. string::size_type 类型一般就是unsigned int, 但是不同机器环境长度可能不同 win32 和win64上长度差别; size_t一般也是unsigned int
    3. size_t 使用的时候头文件需要 <cstddef> ；size_type 使用的时候需要<string>或者<vector>
    4. 下述长度均相等，长度为 win32:4      win64:8
        sizeof(string::size_type)         
        sizeof(vector<bool>::size_type)
        sizeof(vector<char>::size_type)
        sizeof(size_t)
    5. 二者联系：在用下标访问元素时，vector使用vector::size_type作为下标类型（size_type是容器概念，没有容器不能使用），而数组下标的正确类型则是size_t