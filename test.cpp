#include<iostream>
using namespace std;

int main() {
    int T;
    cout << "Enter T \n";
    cin >> T;

    while (T--)
    {
        cout << T;
        int n;
       
        cout << "\n Enter n \n";
        cin >> n;

        int arr[n];
        int sum = 0;
        int count_zero = 0,count_one =0, count_two = 0;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
            cin >> arr[i];
            int a = arr[i] % 3;
            if (a== 0)
                count_zero++;
            if(a==1)
                count_one++;
            if(a==2)
                count_two++;
        }

        if(count_zero == 0 && count_one != 0 && count_two!=0)
        {
            cout << "YES" << endl;
        }
        else if(count_zero == 0 && count_two ==0 && count_one!=0)
        {
            cout << "YES" << endl;
        }
        else if (count_zero == 0 && count_two != 0 && count_one == 0)
        {
            cout << "YES" << endl;
        }
        else if(count_zero<=(count_one+count_two))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}