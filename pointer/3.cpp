#include <iostream>
using namespace std;
int main()
{
    int a = 38;
    int *ptr = &a;

    printf("%d \n", a);
    printf("%p \n", ptr);

    int &ref = a;
    ref = 720000;
    printf("%d \n", ref);
    printf("%d \n", a);

    int c = 4000;
    ptr = &c;

    printf("%d \n", c);
    printf("%p \n", ptr);
}