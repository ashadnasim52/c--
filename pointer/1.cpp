#include <iostream>
using namespace std;
int main()
{
    int number = 200;
    int *ptr = &number;
    printf("The number is %d \n", number);
    printf("The value of pointer is %d \n", *ptr);
    return 0;
}