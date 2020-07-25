#include<iostream>
#include<array>
using  namespace std;
int main()
{
	array<int,5> x;
	int n;
	cout<<"Enter the size of array : \n";
	cin>>n;
	cout<<"Enter array element : \n";
	for(int i=0;i<n;i++)
	{
	cin>>x[i];	
	}
	cout<<"Array is : ";
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<"Array Multiplication : ";
	for(int i=0;i<n;i++)
	{
		cout<<x[i]*x[i+1]<<" ";
	}
	return 0;
}
