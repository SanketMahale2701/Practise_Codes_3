/* 
  Program 436

  Data structure using C++
  template
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
class SinglyLL
{
   public:

     struct NodeS<T> * First;
     int iCount;
};

int main()
{
    SinglyLL <int>obj;

    return 0;
}