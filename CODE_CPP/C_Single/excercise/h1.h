/*
 * @Author: your name
 * @Date: 2021-08-20 10:37:36
 * @LastEditTime: 2021-09-04 14:06:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Single\h1.h
 */
#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <stdexcept>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;

using std::string;
using std::vector;

#define TRUE 1
#define FALSE 0
#define ERROR -1

int myCnt();
unsigned int ABS(int num);
bool hasUpper(const string &str);
int bigOne(int a, int *p);
bool swapIntPoint(int *&a, int *&b);
string::size_type find_char(const string &s, char c, 
                           string::size_type &occurs);

struct PersonInfo{
    string name;
    vector<string> phones;
};