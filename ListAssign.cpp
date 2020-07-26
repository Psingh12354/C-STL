#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> lis1={1,2,3,4,5,6};
	list<int> lis2;
	lis2.assign(lis1.begin(),lis1.end());
	cout<<"List element are : \n";
	for( i=lis2.begin();i!=lis2.end();i++)
	{	
		cout<<*i<<endl;
	}
	return 0;
}
