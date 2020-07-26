#include<iostream>
#include<list>
using namespace std;
int main()
{
	int n;
	int x;
	list<int> lis;
	cout<<"Enter the size of list : \n";
	cin>>n;
	cout<<"Enter the value of list : \n";
	for(int i=0;i<n;i++)
	{	
		cin>>x;
		lis.insert(lis.begin(),x);
	}
	lis.sort();
	list <int>::iterator p=lis.begin();
	while(p!=lis.end())
	{
		cout<<*p<<" ";
		++p;
	}
	
}
