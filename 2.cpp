#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of Array";
    cin >> n;
    int arr[n];
    int k=0;
    cout << "Enter Elements of Array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                k=1;
            }
        }
    }
    if(k==1){
        
    }
