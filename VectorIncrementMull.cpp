#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
	vector<int> ar={1,2,4,6,9,8};
	vector<int>::iterator p=ar.begin();
	cout<<"Vector element is : ";
	while(p!=ar.end())
	{
		cout<<*p<<" ";
		++p;
	}
	return 0;
}
