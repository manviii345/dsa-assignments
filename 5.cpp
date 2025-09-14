#include <iostream>
using namespace std;

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"sum of each row";
    int sum1=0;
    for(int i=0;i<3;i++)
    {
        sum1 = sum1+arr[0][i];
    }
    cout<<"sum of 1st row is " << sum1 <<endl;
     int sum2=0;
    for(int i=0;i<3;i++)
    {
        sum2 = sum2+arr[i][0];
    }
    cout<<"sum of 1st column is " << sum2 <<endl;
}

