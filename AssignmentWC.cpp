#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int> s1;
    char str;
    set<int>::iterator i;
    cout<<"Enter choice : "<<"\n";
    cin>>str;
    switch(str){
    	case 'a':{
			int n;
			cin>>n;
			s1.insert(n);
			break;
		}
		case 'b':{
			for (i=s1.begin();i!= s1.end();i++)
	    		{
	        		cout <<*i<<" ";
	    		}
	    	break;
		}
		case 'c':{
			int n;
			cin>>n;
    		cout<<"Remove : "<<s1.erase(n);
   			break;
		}
		case 'd':{
//			int n;
//			cin>>n;
//			int p=s1.find(n);
//			cout<<"Found : "<<p;
//			break;
		}
		case 'e':{
			cout<<"Size :  "<<s1.size();
			break;
		}
	}
	
}
