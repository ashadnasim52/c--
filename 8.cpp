#include <iostream>
using namespace std;
int main()
{
    int i;
    int a[] = {1, 2, 3, 4, 5, 6};
    for (i = 0; i <= 5; i++)
    {
        cout << a[i] << endl;
    }
    cout << "break" << endl;
    for (int i : a)
    {

        cout << i << endl;
    }

    
}
