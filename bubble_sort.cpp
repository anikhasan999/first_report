#include <bits/stdc++.h>
using namespace std;

void print_bubble(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int flag = 0;

     cout << "iteration no :" << i << endl;
        for (int j = 0; j < n - i; j++)

        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
            print_bubble(arr, n);
            cout<<endl;
        }
        cout << endl;
        if (flag == 0)
            break;
    }
    print_bubble(arr, n);


    return 0;
}
