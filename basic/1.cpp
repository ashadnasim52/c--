#include <iostream>

int main()
{
    int a[] = {5, 4, 7, 8, 7, 8, 9};
    for (int i : a)
    {
        printf("%d \n ", i);
    }
    try
    {
        // 0 / 0;
        throw a;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}