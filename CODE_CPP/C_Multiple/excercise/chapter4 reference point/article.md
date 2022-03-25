<!--
 * @Author: your name
 * @Date: 2021-08-20 11:33:56
 * @LastEditTime: 2021-08-20 11:37:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter4 ref point\article.md
-->

1. 引用和指针的区别
    指针 `指向` 内存中的某个对象
    引用 `绑定` 到内存中的某个对象
    都实现了对其他对象的间接访问
    `指针本身`就是一个`对象`,允许对指针赋值和拷贝,而且在指针生命周期内它可以指向几个不同的对象
    `引用不`是一个`对象`,无法令引用重新绑定到其他的一个对象
    `指针`无需再定义时初始化赋值,和其他内置类型一样,在块作用域内定义的指针如果没有被初始化,也将拥有一个不确定的值
    `引用`必须被初始化赋值