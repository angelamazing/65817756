<!--
 * @Author: your name
 * @Date: 2021-08-19 15:25:34
 * @LastEditTime: 2021-08-19 15:25:56
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\function\article.md
-->

1. 内联函数
    是一种编程语言结构，用来建议编译器对一些特殊函数进行内联扩展（有时称作在线扩展）；
    也就是说建议编译器将指定的函数体插入并取代每一处调用该函数的地方（上下文），从而节省了每次调用函数带来的额外时间开支。
    但在选择使用内联函数时，必须在程序占用空间和程序执行效率之间进行权衡，因为过多的比较复杂的函数进行内联扩展将带来很大的存储资源开支。
    另外还需要特别注意的是对递归函数的内联扩展可能引起部分编译器的无穷编译。
