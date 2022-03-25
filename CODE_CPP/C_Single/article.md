<!--
 * @Author: your name
 * @Date: 2021-08-27 16:53:49
 * @LastEditTime: 2021-09-25 09:27:11
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Single\article.md
-->
1. decltype
   int a = 3, b = 4;
   decltype(a) c = a;
   decltype((b)) d = a; //**此时d是a的引用**
   decltype( a=b ) d = a;   //这里a不会进行赋值,只是分析表达式得到类型

    与auto的区别
    1. auto类型说明符用编译器计算变量的初始值来推断类型,而decltype仅仅是分析而不做计算
    2. auto会适当的改变结果类型使得更符合初始化规则
    3. decltype的结果与表达式的形式密切相关
   
   `constexpr`让用户显式的声明函数或对象构造函数在编译期会成为常量表达式
   
2. getline(line,string)
   

3. vector对象`下标运算`只能用于访问,不能用于添加
4. vector迭代器的加法不存在

5. 多维数组遍历程序
```c++
  int a[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

   /*    for (int_array &row : a)
   {
      for (int &col : row)
         cout << col << '\t';
      cout << endl;
   } */

   for (auto &row : a)
   {
      for (auto &col : row)
         cout << col << '\t';
      cout << endl;
   }
```

6. 运算规则

7. `简洁`
```C++
while(cin >> num && num!=42);
```
8. 除非必要,一般不要使用自增运算符的后置版本,会影响性能

9. static_cast<int>(d) //强制类型转换

10. 
```c++
string::iterator iter = s.begin();
while(iter!=s.end())
{   
    ++iter;
    //dosome
}
```

11. 引用传值的优势
   1. 直接操作引用对象
   2. `避免拷贝`大的`类`类型对象或者`容器`类型对象
   3. 使用引用形参可以帮助我们从函数返回多个值

12. 返回引用
   函数的局部变量的引用 在函数结束时变量也失效了,所以不能返回函数内部的局部变量的引用
   