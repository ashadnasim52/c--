#include <iostream>
#include <cstdint>

int main()
{
    printf("size of the int is %ld \n bits", sizeof(short int) * 8);
    printf("size of the int is %ld \n bits", sizeof(int) * 8);
    printf("size of the int is %ld \n bits", sizeof(long int) * 8);
    printf("size of the int is %ld \n bits", sizeof(long long int) * 8);
    printf("size of the int is %ld \n bits", sizeof(float) * 8);
    printf("size of the int is %ld \n bits", sizeof(char) * 8);
    printf("size of the int is %ld \n bits", sizeof(int16_t) * 8);
    printf("size of the int is %ld \n bits", sizeof(int64_t) * 8);
}