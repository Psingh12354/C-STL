# C-STL
Here I upload my C++ STL program which i have done during Covid-19.
# These Note are from diffrent sites which i copy it here for my learning.

# What are Containers in STL?
Containers Library in STL gives us the Containers, which in simplest words, can be described as the objects used to contain data or rather collection of object. Containers help us to implement and replicate simple and complex data structures very easily like arrays, list, trees, associative arrays and many more.

The containers are implemented as generic class templates, means that a container can be used to hold different kind of objects and they are dynamic in nature!

Following are some common containers :

# vector : replicates arrays
# queue : replicates queues
# stack : replicates stack
# priority_queue : replicates heaps
# list : replicates linked list
# set : replicates trees
# map : associative arrays

# Classification of Containers in STL
Containers are classified into four categories :

# Sequence containers : Used to implement data structures that are sequential in nature like arrays(array) and linked list(list).
# Associative containers : Used to implement sorted data structures such as map, set etc.
# Unordered associative containers : Used to implement unsorted data structures.
# Containers adaptors : Used to provide different interface to the sequence containers.

# Using Container Library in STL
Below is an example of implementing linked list, first by using structures and then by list containers.
```
#include <iostream>

struct node
{
    int data;
    struct node * next;
}

int main ()
{
    struct node *list1 = NULL;
}
```
The above program is only creating a list node, no insertion and deletion functions are defined, to do that, you will have to write more line of code.

Now lets see how using Container Library simplifies it. When we use list containers to implement linked list we just have to include the list header file and use list constructor to initialize the list.
```
#include <iostream>
#include <list>

int main ()
{
    list<int> list1; 
}
```
And that's it! we have a list, and not just that, the containers library also give all the different methods which can be used to perform different operations on list such as insertion, deletion, traversal etc.

Thus you can see that it is incredibly easy to implement data structures by using Container library.

Site Link : https://www.studytonight.com/cpp/stl/stl-overview-of-containers#:~:text=Containers%20Library%20in%20STL%20gives,associative%20arrays%20and%20many%20more.

# PAIR Template in STL
NOTE: Although Pair and Tuple are not actually the part of container library but we'll still discuss them as they are very commonly required in programming competitions and they make certain things very easy to implement.
 # SYNTAX of pair is:
```
pair<T1,T2>  pair1, pair2 ;
```
The above code creates two pairs, namely pair1 and pair2, both having first object of type T1 and second object of type T2.

Now T1 will be referred as first and T2 will be referred as second member of pair1 and pair2.

# Pair Template: Some Commonly used Functions
Here are some function for pair template :

# Operator = : assign values to a pair.
# swap : swaps the contents of the pair.
# make_pair() : create and returns a pair having objects defined by parameter list.
# Operators( == , != , > , < , <= , >= ) : lexicographically compares two pairs.

# Program demonstrating PAIR Template
```
#include <iostream>

using namespace std;    
    
int main ()
{
   pair<int,int> pair1, pair3;    //creats pair of integers
   pair<int,string> pair2;    // creates pair of an integer an a string
    
   pair1 = make_pair(1, 2);     // insert 1 and 2 to the pair1
   pair2 = make_pair(1, "Studytonight") // insert 1 and "Studytonight" in pair2
   pair3 = make_pair(2, 4)
   cout<< pair1.first << endl;  // prints 1, 1 being 1st element of pair1
   cout<< pair2.second << endl; // prints Studytonight

   if(pair1 == pair3)
        cout<< "Pairs are equal" << endl;
   else
        cout<< "Pairs are not equal" << endl;
   
   return 0;
}
```
Site Link : https://www.studytonight.com/cpp/stl/stl-pair-template

# C++ My Codes : 
# Calculator 
``` 
#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
	T num1, num2;
	
public:
	Calculator(T n1, T n2)
	{
		num1 = n1;
		num2 = n2;
	}
	
	void displayResult()
	{
		cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
		cout << "Addition is: " << add() << endl;
		cout << "Subtraction is: " << subtract() << endl;
		cout << "Product is: " << multiply() << endl;
		cout << "Division is: " << divide() << endl;
	}
	
	T add() { return num1 + num2; }
	
	T subtract() { return num1 - num2; }
	
	T multiply() { return num1 * num2; }
	
	T divide() { return num1 / num2; }
};

int main()
{
	Calculator<int> intCalc(2, 1);
	Calculator<float> floatCalc(2.4, 1.2);
	
	cout << "Int results:" << endl;
	intCalc.displayResult();
	
	cout << endl << "Float results:" << endl;
	floatCalc.displayResult();
	
	return 0;
}
```
# Container 
```
/*
Container library is collection of classes
The container are implemented as genric classes
*/
#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> list1;
	return 0;
}
```
# Function Templates

Templates are powerful features of C++ which allows you to write generic programs. In simple terms, you can create a single function or a class to work with different data types using templates.
Templates are often used in larger codebase for the purpose of code reusability and flexibility of the programs.
The concept of templates can be used in two different ways:
Function Templates
Class Templates
 
Stl stand for standard template library
<float> this method tell which the value you are using from template
Containters are used to manage collections of object of a certain kind
vector can be used for creating dynamic array
Function Templates
A function template works in a similar to a normal function, with one key difference.
A single function template can work with different data types at once but, a single normal function can only work with one set of data types.
Normally, if you need to perform identical operations on two or more types of data, you use function overloading to create two functions with the required function declaration.
However, a better approach would be to use function templates because you can perform the same task writing less and maintainable code.
How to declare a function template?
A function template starts with the keyword template followed by template parameter/s inside  < > which is followed by function declaration.
template <class T>
T someFunction(T arg)
{
   ... .. ...
}
In the above code, T is a template argument that accepts different data types (int, float), and class is a keyword.
You can also use keyword typename instead of class in the above example.
When, an argument of a data type is passed to someFunction( ), compiler generates a new version of someFunction() for the given data type.

    
```
#include<iostream>
using namespace std;
template <class Temp>
Temp Large(Temp n1,Temp n2)
{
	return (n1>n2)?n1:n2;
}
int main()
{
	int i1,i2;
	float f1,f2;
	char c1,c2;
	cout<<"Enter the two integer : \n";
	cin>>i1>>i2;
	cout<<Large(i1,i2)<<" is largest\n";
	cout<<"Enter two floating point number : \n";
	cin>>f1>>f2;
	cout<<Large(f1,f2)<<" is largest\n";
	cout<<"Enter two character : \n";
	cin>>c1>>c2;
	cout<<Large(c1,c2)<<" is largest\n";
	return 0;
}
```

# Pair Template

```
/*Templates are powerful features of C++ which allows you to write generic programs. In simple terms, you can create a single function or a class to work with different data types using templates.
Templates are often used in larger codebase for the purpose of code reusability and flexibility of the programs.
The concept of templates can be used in two different ways:
Function Templates
Class Templates
 
Stl stand for standard template library
<float> this method tell which the value you are using from template
Containters are used to manage collections of object of a certain kind
vector can be used for creating dynamic array
Function Templates
A function template works in a similar to a normal function, with one key difference.
A single function template can work with different data types at once but, a single normal function can only work with one set of data types.
Normally, if you need to perform identical operations on two or more types of data, you use function overloading to create two functions with the required function declaration.
However, a better approach would be to use function templates because you can perform the same task writing less and maintainable code.
How to declare a function template?
A function template starts with the keyword template followed by template parameter/s inside  < > which is followed by function declaration.
template <class T>
T someFunction(T arg)
{
   ... .. ...
}
In the above code, T is a template argument that accepts different data types (int, float), and class is a keyword.
You can also use keyword typename instead of class in the above example.
When, an argument of a data type is passed to someFunction( ), compiler generates a new version of someFunction() for the given data type.
*/

#include<iostream>
using namespace std;
template <class Temp>
Temp Large(Temp n1,Temp n2)
{
	return (n1>n2)?n1:n2;
}
int main()
{
	int i1,i2;
	float f1,f2;
	char c1,c2;
	cout<<"Enter the two integer : \n";
	cin>>i1>>i2;
	cout<<Large(i1,i2)<<" is largest\n";
	cout<<"Enter two floating point number : \n";
	cin>>f1>>f2;
	cout<<Large(f1,f2)<<" is largest\n";
	cout<<"Enter two character : \n";
	cin>>c1>>c2;
	cout<<Large(c1,c2)<<" is largest\n";
	return 0;
}
```
# Swap Templates

```
#include<iostream>
using namespace std;
template <typename T>
void Swap(T &n1,T &n2)
{
	T temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
int main()
{
	int i1=1,i2=2;
	float f1=1.1,f2=2.2;
	char c1='a',c2='b';


	cout << "Before passing data to function template.\n";
	cout << "i1 = " << i1 << "\ni2 = " << i2;
	cout << "\nf1 = " << f1 << "\nf2 = " << f2;
	cout << "\nc1 = " << c1 << "\nc2 = " << c2;

	Swap(i1, i2);
	Swap(f1, f2);
	Swap(c1, c2);

        cout << "\n\nAfter passing data to function template.\n";
	cout << "i1 = " << i1 << "\ni2 = " << i2;
	cout << "\nf1 = " << f1 << "\nf2 = " << f2;
	cout << "\nc1 = " << c1 << "\nc2 = " << c2;

	return 0;
	
}
```

# Vector Size

```
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
```
