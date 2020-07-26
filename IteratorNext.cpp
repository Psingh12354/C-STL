#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
	vector<int> ar={1,2,3,4,5,6};
	vector<int>::iterator p1=ar.begin();
	vector<int>::iterator p2=ar.end();
	auto it1 =next(p1,3);
	auto it2=prev(p2,3);
	cout << "The position of new iterator using next() is : "; 
    cout << *it1 << " "; 
    cout << endl; 
    cout << "The position of new iterator using prev()  is : "; 
    cout << *it2 << " "; 
    cout << endl; 

	return 0;
}
