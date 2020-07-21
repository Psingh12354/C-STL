/*
List in C++
List class support bidirectional data entry
List access sequntially
*/
#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> l1{11,22,44,33};
	list <string> l2 {"India","Kathmandu"};
	list <int>::iterator p=l1.begin();
	while(p!=l1.end())
	{
		cout<<*p<<" ";
		++p;
	}
	cout<<"Total value is list are "<<l1.size()<<endl;
	list <string>::iterator q=l2.begin();
	cout<<"\n";
	l2.push_back("Bhopal");
	l2.push_front("Gkp");
	cout<<"\n";
	while(q!=l2.end())
	{
		cout<<*q<<" ";
		++q;
	}
	l2.clear();
	cout<<"\nTotal size of list are "<<l2.size()<<endl;
	l2.pop_back();
		while(q!=l2.end())
	{
		cout<<*q<<" ";
		++q;
	}
		cout<<"Total size of list are "<<l2.size()<<endl;
	l1.sort();
	cout<<"\n";
		while(p!=l1.end())
	{
		cout<<*p<<" ";
		++p;
	}

}
