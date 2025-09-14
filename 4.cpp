#include <iostream>
using namespace std;

int main()
{
int i;
int n =5;
int arr[n]={1,2,3,4,5};
int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;}
   for(i =0;i<5;i++)
   {
    cout<<arr[i];
   }
}