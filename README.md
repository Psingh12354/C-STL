# C-STL
Here I upload my C++ STL program which i have done during Covid-19.

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
