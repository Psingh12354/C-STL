/*
Vector in c++
Vector is a type of container
It is used when we don't know how much data we enter we 
don't know it support dynamic array(means have some capacity)
Vecotor increase it size according to it requirement
it increase the size according to multiply with 2
means if two value inserted and inserting third will increment according to 4
you need to include a vector
to create a blank vecotr use this command
vector <int>v1;
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	// vector <int>v1;
	// to initile it to the point use this command
	vector <int>v1 { 10,20,30};
	// while declaring initilization capacity will be  3
	// it will not follow by default value 1
	// now it will increment 3 than 6 so on
	// to initilize it size

	vector <char> v2(5);

	// to initilize the value and also size
	// here 5 is the size and 10 is the value

	vector <int> v3(5,10);
	vector <string> v4(3,"hello");
	vector <int> v5;

	// square bracket

	cout<<v4[0]<<" "<<v4[1]<<" "<<v4[2]<<"\n";

	// loop

	for(int i=0;i<4;i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;

	// push_back to insert a value

//	cout<<"Current Capacity : "<<v5.capacity()<<"\n";
//	v5.push_back(10);
//	cout<<"Current Capacity : "<<v5.capacity()<<"\n";
//	v5.push_back(20);
//	cout<<"Current Capacity : "<<v5.capacity()<<"\n";
//	v5.push_back(30);

//	// you can see here capacity increase by multiple of 2

//	cout<<"Current Capacity : "<<v5.capacity()<<"\n";
//	v5.push_back(30);
//	cout<<"Current Capacity : "<<v5.capacity()<<"\n";

	// by loop

	cout<<"Current Capacity : "<<v5.capacity()<<"\n";
	for(int i=0;i<=9;i++)
	{
		v5.push_back(10*(i+1));
	}
//	cout<<"Current Capacity : "<<v5.capacity()<<"\n";
//	cout<<"Size : "<<v5.size()<<"\n";

//	// pop_back to delete last value

//	v1.pop_back();
//	cout<<"After pop : "<<endl;
//	cout<<"Current Capacity : "<<v5.capacity()<<"\n";
//	cout<<"Size : "<<v5.size()<<"\n";

//	// size return number of element

//	v1.pop_back();
//	cout<<"Current Capacity : "<<v5.capacity()<<"\n";
//	v1.pop_back();
//	cout<<"Current Capacity : "<<v5.capacity()<<"\n";
//	v1.pop_back();
//	cout<<"Current Capacity : "<<v5.capacity()<<"\n";
//	v1.pop_back();
//	cout<<"Current Capacity : "<<v5.capacity()<<"\n";
//	cout<<"Size : "<<v5.size()<<"\n";

// to print	

for(int i=0;i<v5.size();i++)
{
	cout<<v5[i]<<" ";
}
cout<<endl;

// to clear

//v5.clear();
//cout<<"Current Capacity : "<<v5.capacity()<<"\n";
//cout<<"Total element : "<<v5.size()<<endl;

// at to return index
cout<<"Value at index 4 is : "<<v5.at(4)<<endl;

// front and back

cout<<"First value is : "<<v5.front()<<"\n";
cout<<"Last value is : "<<v5.back()<<"\n";

// to insert a value at mid use iterator 

vector <int>:: iterator  it=v5.begin();
v5.insert(it+3,35); // here it is beggining position +2 show 3 rd position ,35 is value we insert
for(int i=0;i<v5.size();i++)
{
	cout<<v5[i]<<" ";
}
cout<<endl;
}
