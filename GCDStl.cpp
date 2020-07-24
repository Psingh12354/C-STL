#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the value of a and b : \n";
	cin>>a>>b;
	cout<<"gcd("<<a<<","<<b<<") = "<<__gcd(a,b)<<"\n";
}
