#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
	vector<int> ar={1,2,3,4,5,6};
	vector<int>::iterator p1=ar.begin();
	advance(p1,3);
	copy(ar.begin(),ar.end(),inserter(ar,p1));
	cout << "The new vector after inserting elements is : "; 
    for (int &x : ar)  
        cout << x << " "; 

	return 0;
}
