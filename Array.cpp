/*
Array is collection of similar element
STL has predefine class array
like this
array<int,4> obj;
Here a array is formed with side 4
to use this you need to include array
template<place holder>
class array{
};
*/
#include<iostream>
#include<array>
using namespace std;
int main()
{
array<int,4> data1={2,5,6,7};
// use this extra array with swap
array<int,4> data2={1,4,5,9};
// we can also initilize it here
// like this
// array<int,4> data={2,5,6,8};}
// it show some error
// to fix it click on setting
// if you are using dev then check on tool comiler option read the error and copy it on genneral add by tick
cout<<data1.at(1)<<endl; // it show index array start from 0
cout<<data1[2]<<endl;
cout<<data1.front()<<endl;
cout<<data1.back()<<endl;
for(int i=0;i<=data1.size();i++)
{
	cout<<data1[i]<<" ";
}
cout<<"\n";
data1.fill(10);
for(int i=0;i<=data1.size();i++)
{

cout<<data1[i]<<" ";
// to store 1 element in hole array
}
cout<<"\n";
// swap
data1.swap(data2);
for(int i=0;i<=data1.size();i++)
{
cout<<data1[i]<<" ";
}
cout<<"\n";
for(int i=0;i<=data2.size();i++)
{
cout<<data2[i]<<" ";
}
cout<<"\n";
// to find the size
cout<<data1.size();
}
