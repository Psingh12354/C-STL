/*
Map class in C++
use to represet associative array
Arrayy are two type 
1. Numeric : eg : int a[5], float b[10],string v[2]; here we are defining the size
Index value are number like storing position 0,1,2,3,4 in int and so on
2. Associative 
Suppose index position is name of student than it become easier to find there marks
Map class is use to make associative array
Map contain key-val pair and key must be unique and cann't be change after created 
Value can be change 
map arrange it keys in sorted order
*/
#include<iostream>
#include<map>
using namespace std;
int main()
{
	map <int,string> customer;
	// declaring seprately
	customer[100]="Priyanshu";
	customer[101]="Singh";
	customer[102]="Anshu";
	customer[103]="Rajesh";
	// declaring to the point
	map <int,string> c{{1,"Priyanshu"},{2,"Singh"}};
	cout<<customer[100];
	cout<<customer[104];
	customer.insert(pair<int,string> (205,"SD"));
	map <int,string>::iterator p=customer.begin();
	while(p!=customer.end())
	{
		cout<<p->second<<endl;
		p++;
	}

	cout<<customer.at(101);
	cout<<"\n";
	cout<<customer.size();
	cout<<"\n";
	cout<<customer.empty();
	cout<<"\n";
	
	return 0;
}
