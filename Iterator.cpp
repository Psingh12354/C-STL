#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
	vector<int> ar={1,2,4,6,9,8};
	vector<int>::iterator p;
	cout<<"Vector element is : ";
	for(p=ar.begin();p<ar.end();p++)
	cout<<*p<<" ";
	return 0;
}
