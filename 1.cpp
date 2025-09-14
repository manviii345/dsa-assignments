#include <iostream>
using namespace std;
int a[100];
int n=0;
void create(int a[100],int n)
{
    cout<<"eneter size";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void display(){
	if(n==0){
		cout<<"Empty Array"<<endl;
		return;
	}
	cout<<"Array Elements"<<endl;
	for(int i = 0 ; i < n;i++){
		cout<<a[i]<<" ";
	}
	cout << endl; 
}
void insert(){
	int element , position;
	cout<<"Enter the Element you want to insert"<<endl;
	cin>>element;
	cout<<"Enter the position you want to insert"<<endl;
	cin>>position;
	
	if(position <0 || position > size){
		cout<<"Invalid Position"<<endl;
		return;
	}
	
	for(int i =size ; i > position ; i--){
		ar[i] = arr[i-1];
	}
	a[position] = element;
	size++;
	
	cout<<"Elements Inserted Successfully"<<endl;
}

    for(int j=0;j<n;j++)
    {
        for(int k=j;k<n;k++)
        {
            if(a[j]==a[k])
           {
           m=true;
            break;
           }
        }
        if(!m)
            b[c]=a[j];
            c++;
        }
    
    
    for(int m=0;m<n;m++)
    {
        cout<<b[m]<<endl;
    }
}
