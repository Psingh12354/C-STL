#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
	vector<int> ar={1,2,3,4,5,6};
	vector<int>::iterator p=ar.begin();
	advance(p,3); // advance is use to increment the value by certain number 
	cout<<"The position of iterator is : "<<*p;
	return 0;
}
