#include<bits/stdc++.h>
using namespace std;
int main(){
	string str1="Hello";
	string str2=" World";
	
	cout<<"Size : "<<str1.size()<<"\n";
	
	for(int i = 0; str2[i] != '\0'; i++)
    {
        str1.push_back(str2[i]);
    }
    cout<<str1<<"\n";
    
	cout<<"Substring : "<<str1.substr(1,5);
	
    sort(str1.begin(),str1.end());
    cout<<"Sort : "<<str1<<"\n";
    
	reverse(str1.begin(),str1.end());
	cout<<"reverse Sort : "<<str1<<"\n";
}
