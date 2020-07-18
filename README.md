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
