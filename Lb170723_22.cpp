/* 
  Program 438

 Generic Data structure using C++
*/

#include<iostream>
using namespace std;

template <class T>
struct NodeS
{
   T data;
   struct NodeS *next;
};

template <class T>
struct NodeD
{
   T data;
   struct NodeD *next;
   struct NodeD *prev;
};

template <class T>
class SinglyLL
{
   public:

     struct NodeS<T> * First;
     int iCount;

     SinglyLL();
     ~SinglyLL();
    
     void Display();
     int Count();

     void InsertFirst(T No);
     void InsertLast(T No);
     void InsertAtPos(int iPos,T No);

     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPos(int iPos);
};

template <class T>
class SinglyCL
{
   public:

     struct NodeS<T> * First;
     struct NodeS<T> * Last;
     int iCount;
};

template <class T>
class DoublyLL
{
   public:

     struct NodeD<T> * First;
     int iCount;
};

template <class T>
class DoublyCL
{
   public:

     struct NodeD<T> * First;
     struct NodeD<T> * Last;
     int iCount;
};

int main()
{
    return 0;
}