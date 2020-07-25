#include<iostream>
#include<array>
#include<algorithm>
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
	cout<<"Array value before sort : ";
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<" ";
	}
	sort(x.begin(),x.end());
	cout<<"After sorting : \n";
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<"\nLargest number is : ";
	cout<<x.at(n);
	return 0;
}
