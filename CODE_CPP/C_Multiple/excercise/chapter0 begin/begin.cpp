#include "../head/h1.h"

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book = {"a", "b", "c", 13};

struct Books *struct_pointer = &book; //定义

int main()
{
    cout << struct_pointer->book_id << endl;

    return 0;
}