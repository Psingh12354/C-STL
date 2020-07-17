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
