/* 
  Program 437

  Data structure using C++
  template
*/

#include<iostream>
using namespace std;

// structure for Singly linear and circular
template <class T>
struct NodeS
{
   T data;
   struct NodeS *next;
};

// structure for doubly linear and circular
template <class T>
struct NodeD
{
   T data;
   struct NodeD *next;
   struct NodeD *prev;
};

// class of Singly Linear
template <class T>
class SinglyLL
{
   public:

     struct NodeS<T> * First;
     int iCount;
};

// class of Singly Circular
template <class T>
class SinglyCL
{
   public:

     struct NodeS<T> * First;
     struct NodeS<T> * Last;
     int iCount;
};

// class of Doubly Linear
template <class T>
class DoublyLL
{
   public:

     struct NodeD<T> * First;
     int iCount;
};

// class of Doubly Circular
template <class T>
class DoublyCL
{
   public:

     struct NodeD<T> * First;
     struct NodeD<T> * Last;
     int iCount;
};

// Logic of 32 functions
int main()
{
    return 0;
}