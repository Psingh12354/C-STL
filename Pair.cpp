/*
Pair in STL c++
pair<ti,t2> pair1;
eg: 
pair<string, int>p1
*/
#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int age;
		public:
			void setStudent(string s,int a)
			{
				name=s;
				age=a;
			}
			void showStudent()
			{
				cout<<"\nName : "<<name;
				cout<<"\nAge : "<<age;
			}
};
int main()
{
	pair <string,int>p1;
	pair <string,string>p2;
	pair <string,float>p3;
	pair <int,student>p4; // class student
	// to insert a value in pair
	p1=make_pair("Priyanshu",16);
	p2=make_pair("India","New delhi");
	p3=make_pair("Drilling C++",345.5f);
	student ob;
	ob.setStudent("Priyanshu",20);
	p4=make_pair(1,ob);
	//cout<<p1.first ; to print first element
	//cout<<p1.second; to print second element
	cout<<"Pair 1 : "<<p1.first<<" "<<p1.second;
	cout<<"\nPair 2 : "<<p2.first<<" "<<p2.second;
	cout<<"\nPair 3 : "<<p3.first<<" "<<p3.second;
	cout<<"\nPair 4 : "<<p4.first<<" ";
	student ob1=p4.second;
	ob1.showStudent();
	

}

