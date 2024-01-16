/* 
  Program 440

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

template <class T>
SinglyLL<T>:: SinglyLL()
{

}
template <class T>
SinglyLL<T>:: ~SinglyLL()
{

}


template <class T>
void SinglyLL<T>:: Display()
{

}
template <class T>
int SinglyLL<T>::Count()
{
 
}


template <class T>
void SinglyLL<T>:: InsertFirst(T No)
{

}

template <class T>
void SinglyLL<T>:: InsertLast(T No)
{

}

template <class T>
void SinglyLL<T>:: InsertAtPos(int iPos,T No)
{

}


template <class T>
void SinglyLL<T>:: DeleteFirst()
{

}

template <class T>
void SinglyLL<T>:: DeleteLast()
{

}

template <class T>
void SinglyLL<T>:: DeleteAtPos(int iPos)
{

}

int main()
{
    SinglyLL <int>lobj;

    return 0;
}