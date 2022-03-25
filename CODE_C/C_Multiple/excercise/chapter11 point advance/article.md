<!--
 * @Author: your name
 * @Date: 2021-08-26 10:23:42
 * @LastEditTime: 2021-08-26 11:30:39
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter11 point advance\article.md
-->
1. 动态内存分配
    1. malloc   分配内存块,但不初始化
    2. calloc   分配内存块,并清理内存块
    3. realloc  调整先前分配的内存卡
    4. 空指针

2. 动态分配字符串
    1. void *malloc (size_t size);
    ```c
    char *p = malloc(n+1);  //这里会自动执行转换
    char *p = (char*)malloc; //一些程序员喜欢强制转换
    ```
    2. 字符串函数中使用动态分配
    3. 动态分配字符串的数组

3. 动态分配数组
    1. int *a = malloc(n*sizeof(int));  //尽量使用sizeof
    2. void *calloc(size_t nmemb, size_t size); //元素个数,元素字节
        会清理内存块
        p = calloc (1,sizeof(struct point));
        执行后,p将指向结构,并且结构的成员x,y都会被设为0.
    3. void *realloc(void *ptr,size_t size);

4. 释放存储
    1. 垃圾: 程序不再访问到的内存块
    2. 内存泄漏: 程序结束留有垃圾
    3. 垃圾收集器: 语言的垃圾的自动定位和回收,但是C语言不提供

5. free
6. 悬空指针:使用前已经释放
7. 链表

8. 指向 指针 的 指针
9. 指向 函数 的 指针