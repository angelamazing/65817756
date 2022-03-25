<!--
 * @Author: your name
 * @Date: 2021-08-05 16:29:07
 * @LastEditTime: 2021-08-05 19:44:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\chapter7 io\article.md
-->

1. c++不直接处理IO,而是通过一族定义在标准库中的类型来处理IO.

2. IO库设施
    `istream` 输入流类型,提供输入操作
    `ostream` 输出流类型,提供输出操作
    `cin`     一个isteam对象,从标准输入读取数据
    `cout`    一个osteam对象,向标准输出写入数据
    `cerr`    一个osteam对象,通常用于输出程序错误消息,写入到标准错误.
    `<<`      用来向istream对象读取输入数据
    `>>`      用来向ostream对象写入输出数据
    `getline` 从一个给定的istream读取一行数据,存入一个给定string对象中
    
    宽字符wchar_r  wcin , wcout ,wcerr

3. IO对象无拷贝 无赋值
 ```c++
 ofstream out1, out2;
 out1 = out2;//error 不能赋值
 ofstream print(ofstream);//error 不能初始化ofstream参数
 out2 = print(out2);//error 不能拷贝流对象
 ```
 
 4. 条件状态
 5. 查询流的状态
 6. 管理条件状态
 
 7. 管理输出缓冲
 ```c++
os << "please enter a value: ";
```
文本串可能立即打印出来,但也又有可能被操作系统保存在缓存区
有了缓冲机制,操作系统可以将程序的多个输出操作组合成单一的系统级写操作
由于设备的写操作非常耗时,允许操作系统 将多个输出操作组合为单一的设备写操作可以带来很大的性能提升
导致缓冲刷新(即数据真正写到输出文件/设备)的原因有很多:
1. 程序正常结束,作为main函数的return操作的一部分
2. 缓冲区满
3. 我们可以使用操作符如`endl`来显示刷新缓冲区
4. 在每个输出操作后,我们可以用操作符`unitbuf`设置流的内部状态,来清空缓冲区
    默认对`cerr`是设置`unitbuf`的,因此写到`cerr`的内容都是立即刷新的
5. 一个输出流可能被关联到另一个流, 源流的读写 都会引起目标流的缓冲区被刷新
    默认情况下,cin和cerr都关联到cout,因此读cin或者写cerr都会导致cout的流缓冲刷新.
    

