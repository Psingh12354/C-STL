#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec;
	int i;
	cout<<"Vecotr size : "<<vec.size()<<"\n";
	for(i=0;i<5;i++)
	{
		vec.push_back(i);
	}
	cout<<"Extended vector size : "<<vec.size()<<"\n";
	for(i=0;i<5;i++)
	{
		cout<<"Value of vec ["<<i<<"] = "<<vec[i]<<"\n";
	}
	vector<int>::iterator v=vec.begin();
	while(v!=vec.end()){
		cout<<"Value of v = "<<*v<<"\n";
		v++;
	}
	return 0;
}
