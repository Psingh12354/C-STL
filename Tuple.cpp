/*
Tuple in c++
tuple<t1,t2,t3> tuple1;
tuple<string,int,int>t1;
you need to include tuple
*/
#include<iostream>
#include<tuple>
using namespace std;
int main()
{
	tuple <string,int,int>t1;
	// to insert value call make_tuple
	t1=make_tuple("Priyanshu",20,56);
	cout<<"Name "<<"     "<<"Age"<<"  "<<"Marks "<<endl;
	cout<<get<0>(t1)<<" "<<get<1>(t1)<<"   "<<get<2>(t1); // angular bracket show it position
	
}

