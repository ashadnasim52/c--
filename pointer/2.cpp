#include <iostream>
using namespace std;
int main()
{
    int a = 40;
    int *ptr = &a;
    int c = *ptr;
    printf("%d \n", a);
    printf("%p \n", ptr);
    printf("%d \n", c);
}