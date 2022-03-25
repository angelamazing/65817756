/*
 * @Author: your name
 * @Date: 2021-07-25 20:54:29
 * @LastEditTime: 2021-08-03 11:45:40
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Multiple\excercise\hello\hello.cpp
 */
#include "../head/h1.h"

int main()
{

  string s1;
  string s2 = "you are my";
  string s3(10, 'c');
  string s4("my blog");
  string s5 = s3 + s4;

  for (auto &c : s2)
  {
    c = toupper(c);
  }
  cout << s2;
  /*   char ch;
  while (cin >> ch)
    cout << ch << endl; */

  /*   string line;
  while (getline(cin, line))
    cout << line << endl; */

  int i = 3;
  /* std:: cin >> i; */
  const int j = i + 1;     // right
  /* constexpr int j = i + 1; // error */

  return 0;
}