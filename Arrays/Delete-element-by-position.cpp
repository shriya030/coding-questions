#include<iostream>
using namespace std;

int main()
{
	int size,i,flag=0;
    cout<<"enter size of array ";
	cin>>size;
	int a[size];

    for( i=0;i<size;i++)
	{
		cin>>a[i];
	}
	int element,position;
	cout<<"enter element to be deleted ";
	cin>>element;

	for(int j=0;j<size;j++)
	{
		if(element==a[j])
		{
			cout<<"element found at position "<<j+1<<endl;
			position=j+1;
			flag=1;
			break;
		}
		
	}
	if(flag==0)
		cout<<"element not found!";


	for( i=3;i<size;i++)
	{
		a[i-1]=a[i];
	}
	a[i-1]='\0';
	
	 for(int i=0;i<size-1;i++)
	{
		cout<<a[i]<<endl;
	}
}
