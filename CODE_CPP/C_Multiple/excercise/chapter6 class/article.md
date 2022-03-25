<!--
 * @Author: your name
 * @Date: 2021-08-03 15:16:43
 * @LastEditTime: 2021-08-19 15:24:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter6 class\article.md
-->
类的基本思想是数据抽象和封装.
数据抽象是一种依赖于接口和实现分离的编程技术.

1. 定义抽象数据类型

2. C++ 类成员函数
    类的成员函数是指那些把`定义`和`原型`写在`类定义内部`的函数，就像类定义中的其他变量一样。
    类成员函数是类的一个成员，它`可以操作类的任意对象`，可以`访问对象中的所有成员`。
    在`类定义中定义`的成员函数把函数声明为`内联`的，即便没有使用inline标识符

    成员函数可以定义在类定义内部，或者单独使用范围解析运算符 :: 来定义
```c++
class Box
{
   public:
      double length;      // 长度
      double breadth;     // 宽度
      double height;      // 高度
   
      double getVolume(void)
      {
         return length * breadth * height;
      }
};
//或者进行::
double Box::getVolume(void)
{
    return length * breadth * height;
}
```

3. 访问修饰符
    1. 公有成员在程序中类的外部是可访问的。您可以`不使用任何成员函数`来设置和获取公有变量的值
    2. 私有成员变量或函数在类的外部是不可访问的，甚至是不可查看的。只有类和友元函数可以访问私有成员。
        默认情况下，类的所有成员都是私有的。
    3. 受保护成员 在派生类（即子类）中是可访问的

4. 继承方式 public, protected, private 它们相应地改变了`基类成员`的访问属性。
    1. public 继承  Class A :public A{...}
        public 成员->public
        protected 成员->protected
        private 成员->private
    2. protected 继承 Class A :protected A{...}
        public 成员->protected
        protected 成员->protected
        private 成员->private
    3. private 继承  Class A :private A{...}
        public 成员->private
        protected 成员->private
        private 成员->private
        
5. 构造函数:类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行。
    构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，也不会返回 void。
```c++
//假设有一个类 C，具有多个字段 X、Y、Z 等需要进行初始化
C::C( double a, double b, double c): X(a), Y(b), Z(c)
{
  ....
}
```

6. 类的析构函数
    类的析构函数是类的一种特殊的成员函数，它会在`每次删除所创建的对象`时执行。
    析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）作为前缀，它不会返回任何值，也不能带有任何参数。
    析构函数有助于在跳出程序（比如关闭文件、释放内存等）前释放资源。 

7. 拷贝构造函数??
    拷贝构造函数是一种特殊的构造函数，它在创建对象时，是`使用同一类中之前创建的对象`来初始化新创建的对象。
    通常用于:
    1. 通过使用另一个同类型的对象来初始化新创建的对象。
    2. 复制对象把它作为参数传递给函数。
    3. 复制对象，并从函数返回这个对象。

    如果在类中没有定义拷贝构造函数，编译器会自行定义一个。
    如果类带有指针变量，并有动态内存分配，则它必须有一个拷贝构造函数。
```c++ 
classname (const classname &obj) {
   // 构造函数的主体
}
```
8. 友元函数(friend关键字)
类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员。
尽管友元函数的原型有在类的定义中出现过，但是友元函数并`不是成员函数`。
友元可以是一个函数，该函数被称为`友元函数`；友元也可以是一个类，该类被称为`友元类`，在这种情况下，整个类及其所有成员都是友元。
```c++
class Box
{
   double width;
public:
   double length;
   friend void printWidth( Box box );//friend class ClassTwo;
   void setWidth( double wid );
};
```

9. 内联函数
    1. 目的:解决程序中函数调用的效率问题
    2. 代价:空间
    3. 注意:一般都是1-5行的小函数
    4. 切记:在内联函数内不允许使用循环语句和开关语句；内联函数的定义必须出现在内联函数第一次调用之前；类结构中所在的类说明内部定义的函数是内联函数。

10. this指针
    每一个对象都能通过 this 指针来`访问自己的地址`。this 指针是`所有成员函数的隐含参数`。
    因此，在成员函数内部，它可以用来指向调用对象。
    友元函数没有 this 指针，因为友元不是类的成员。只有成员函数才有 this 指针。
```c++
class Box
{
   public:
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      int compare(Box box)
      {
         return this->Volume() > box.Volume();
      }
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};
```

11. 指向类的指针
    与所有的指针一样，您必须在使用指针之前，对指针进行初始化。
    
12. 静态成员
    当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，静态成员都`只有一个副本`。
    静态成员在类的所有对象中是共享的。
    如果不存在其他的初始化语句，在创建第一个对象时，所有的静态数据都会被初始化为零。
    我们`不能把静态成员的初始化放置在类的定义`中，但是`可以在类的外部通过使用范围解析运算符 :: `来重新声明静态变量从而对它进行`初始化`

13. 静态成员函数
    如果把函数成员声明为静态的，就可以把函数与类的任何特定对象独立开来。
    静态成员函数即使在类对象不存在的情况下也能被调用，静态函数只要使用类名加范围解析运算符 :: 就可以访问。

    静态成员函数只能访问静态成员数据、其他静态成员函数和类外部的其他函数。
    静态成员函数有一个类范围，他们不能访问类的 this 指针。
```c++
#include <iostream>
 
using namespace std;
 
class Box
{
   public:
      static int objectCount;
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // 每次创建对象时增加 1
         objectCount++;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      static int getCount()
      {
         return objectCount;
      }
   private:
      double length;     // 长度
      double breadth;    // 宽度
      double height;     // 高度
};
 
// 初始化类 Box 的静态成员
int Box::objectCount = 0;
 
int main(void)
{
  
   // 在创建对象之前输出对象的总数
   cout << "Inital Stage Count: " << Box::getCount() << endl;
 
   Box Box1(3.3, 1.2, 1.5);    // 声明 box1
   Box Box2(8.5, 6.0, 2.0);    // 声明 box2
 
   // 在创建对象之后输出对象的总数
   cout << "Final Stage Count: " << Box::getCount() << endl;
 
   return 0;
}
```