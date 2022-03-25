<!--
 * @Author: your name
 * @Date: 2021-08-24 16:30:15
 * @LastEditTime: 2021-08-25 09:56:29
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter8 string\article.md
-->
1. 字符串字面量
    1. 转义字符
    2. 延续字符串字面量
    printf("put a line, then \
    press any key to continue\n");
    
    3. 是如何存储的?
    结尾 '\0'
    4. 操作
    char *p;
    p = "abc"; 这个赋值操作不是复制,而是使 `p`指向字符串的第一个字符
    "abc"[1];可以使用下标

2. 字符串变量
    char date[8] = "June 14"; 未填满的全为'\0'
    注意一定要留有余地

3. 字符数组和字符指针
    char date[] = "June 14";
    char *p = "June 14";
    1. 声明为数组时,可以修改date中的字符.
    2. 声明为指针时,date指向字符串字面量,是不可以修改的,但是可以在程序执行期间指向其他字符串.

4. 读写
    1. 写 printf("%s",str1);
    2. 读
        1. scanf("%s",str);
            会跳过空白字符,读入字符直到再遇到空白字符为止        
        2. gets(str);
            不会跳过空白字符,持续读入直到找到换行符(而不是空白字符),并丢弃换行符,用空字符代替.        
        3. 逐个读取
            循环

5. 访问字符串中的字符
    1. 下标
    2. 指针

6. C语言中的字符串库
    char *strcpy(char *s1, const char *s2);
    char *strcat(char *s1, const char *s2);
    char *strcmp(const char *s1, const char *s2);
    size_t strlen(const char*s);

7. 搜索字符串的结尾
    1. while(*s) s++    指向空字符
    2. while(*s++)  指向空字符后一个位置
8. 复制字符串
    while(*p++ = *s2++);

9. 字符串数组

10. 命令行参数