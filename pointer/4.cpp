#include <iostream>

using namespace std;

int main()
{
    int array[] = {4, 5, 6, 7, 8, 9};
    int *ptr = array;
    ptr++;
    *ptr = 4000;

    printf("%d \n", array[0]);
    printf("%d \n", array[1]);
    printf("%d \n", array[2]);
    printf("%p \n", ptr);
    printf("%p \n", array);

    return 0;
}