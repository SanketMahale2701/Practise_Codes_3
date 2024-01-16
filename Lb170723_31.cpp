/* 
  Program 447

  Data structure using C++
  Singly Linear Linklist
  (Insert at position ,and delete at position node)
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////
//  structure
///////////////////////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////////////////////
// Class
///////////////////////////////////////////////////////////////////////////////////////////

// class of Singly Linear
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
///////////////////////////////////////////////////////////////////////////////////////////

// class of Singly Circular
template <class T>
class SinglyCL
{
   public:

     struct NodeS<T> * First;
     struct NodeS<T> * Last;
     int iCount;

     SinglyCL();
     ~SinglyCL();
    
     void Display();
     int Count();

     void InsertFirst(T No);
     void InsertLast(T No);
     void InsertAtPos(int iPos,T No);

     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPos(int iPos);

};

///////////////////////////////////////////////////////////////////////////////////////////

// class of Doubly Linear
template <class T>
class DoublyLL
{
   public:

     struct NodeD<T> * First;
     int iCount;

     DoublyLL();
     ~DoublyLL();
    
     void Display();
     int Count();

     void InsertFirst(T No);
     void InsertLast(T No);
     void InsertAtPos(int iPos,T No);

     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPos(int iPos);
};

///////////////////////////////////////////////////////////////////////////////////////////

// class of Doubly Circular
template <class T>
class DoublyCL
{
   public:

     struct NodeD<T> * First;
     struct NodeD<T> * Last;
     int iCount;

     DoublyCL();
     ~DoublyCL();
    
     void Display();
     int Count();

     void InsertFirst(T No);
     void InsertLast(T No);
     void InsertAtPos(int iPos,T No);

     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPos(int iPos);
};

///////////////////////////////////////////////////////////////////////////////////////////
// Functions Boby
///////////////////////////////////////////////////////////////////////////////////////////

// Singly Linear

template <class T>
SinglyLL<T>:: SinglyLL()
{
   First = NULL;
   iCount = 0;
}
template <class T>
SinglyLL<T>:: ~SinglyLL()
{

}


template <class T>
void SinglyLL<T>:: Display()
{
   NodeS<T> *Temp = First; 
   cout<<"Elements of Singly Linear Linklist :\n";
   
   while(Temp != NULL)
   {
     cout<<"|"<<Temp -> data<<"|->";
     Temp = Temp -> next;
   }
   cout<<"|NULL|\n";
}
template <class T>
int SinglyLL<T>::Count()
{
   return iCount;
}


template <class T>
void SinglyLL<T>:: InsertFirst(T No)
{
  NodeS<T> * newn = new NodeS<T>;

  newn->data = No;
  newn->next = NULL;

  if(First == NULL)
  {
    First = newn;
  }
  else
  {
    newn -> next = First;
    First = newn;
  }

  iCount++;
}

template <class T>
void SinglyLL<T>:: InsertLast(T No)
{
  NodeS<T> * newn = new NodeS<T>;

  newn->data = No;
  newn->next = NULL;

  if(First == NULL)
  {
    First = newn;
  }
  else
  {
     NodeS<T> *Temp = First;

     while(Temp->next != NULL)
     {
        Temp = Temp -> next;
     }
     Temp -> next = newn;
  }
  iCount++;
}

template <class T>
void SinglyLL<T>:: InsertAtPos(int iPos,T No)
{
  if((iPos < 1)||(iPos > iCount + 1))
  {
    cout<<"INVALID POSITION...\n";
    return;
  }

  if(iPos == 1)
  {
    InsertFirst(No);
  }
  else if(iPos == iCount + 1)
  {
    InsertLast(No);
  }
  else
  {
     NodeS<T> *Temp = First;
     NodeS<T> *newn = new NodeS<T>;
     newn->data = No;
     newn->next = NULL;

     for(int iCnt = 1;iCnt < iPos - 1;iCnt++)
     {
      Temp = Temp -> next;
     }
     newn->next = Temp -> next;
     Temp -> next = newn;

     iCount++;
  }
}

template <class T>
void SinglyLL<T>:: DeleteFirst()
{
  if(First == NULL)
  {
    return;
  }
  else if(First -> next == NULL)
  {
    delete First;
    First = NULL;
  }
  else
  {
    NodeS<T> *Temp = First;
    First = First->next;
    delete Temp;
  } 

  iCount--;
}

template <class T>
void SinglyLL<T>:: DeleteLast()
{
  if(First == NULL)
  {
    return;
  }
  else if(First -> next == NULL)
  {
    delete First;
    First = NULL;
  }
  else
  {
    NodeS<T> *Temp = First;
    while(Temp->next->next != NULL)
    {
      Temp = Temp ->next;
    }
    delete Temp -> next;
    Temp -> next = NULL;
  } 
  iCount--;
}

template <class T>
void SinglyLL<T>:: DeleteAtPos(int iPos)
{
  if((iPos < 1)||(iPos > iCount))
  {
    cout<<"INVALID POSITION...\n";
    return;
  }

  if(iPos == 1)
  {
    DeleteFirst();
  }
  else if(iPos == iCount)
  {
    DeleteLast();
  }
  else
  {
    NodeS<T> *Temp = First;
    NodeS<T> *TempX = NULL;
    for(int iCnt = 1;iCnt < iPos -1;iCnt++)
    {
        Temp = Temp -> next;
    } 
    TempX = Temp -> next;
    Temp -> next = Temp -> next -> next;
    delete TempX;

    iCount --;
  }
}

///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
SinglyCL<T>:: SinglyCL()
{

}
template <class T>
SinglyCL<T>:: ~SinglyCL()
{

}


template <class T>
void SinglyCL<T>:: Display()
{

}
template <class T>
int SinglyCL<T>::Count()
{
 
}


template <class T>
void SinglyCL<T>:: InsertFirst(T No)
{

}

template <class T>
void SinglyCL<T>:: InsertLast(T No)
{

}

template <class T>
void SinglyCL<T>:: InsertAtPos(int iPos,T No)
{

}


template <class T>
void SinglyCL<T>:: DeleteFirst()
{

}

template <class T>
void SinglyCL<T>:: DeleteLast()
{

}

template <class T>
void SinglyCL<T>:: DeleteAtPos(int iPos)
{

}

///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
DoublyLL<T>:: DoublyLL()
{

}
template <class T>
DoublyLL<T>:: ~DoublyLL()
{

}


template <class T>
void DoublyLL<T>:: Display()
{

}
template <class T>
int DoublyLL<T>::Count()
{
 
}


template <class T>
void DoublyLL<T>:: InsertFirst(T No)
{

}

template <class T>
void DoublyLL<T>:: InsertLast(T No)
{

}

template <class T>
void DoublyLL<T>:: InsertAtPos(int iPos,T No)
{

}


template <class T>
void DoublyLL<T>:: DeleteFirst()
{

}

template <class T>
void DoublyLL<T>:: DeleteLast()
{

}

template <class T>
void DoublyLL<T>:: DeleteAtPos(int iPos)
{

}

///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
DoublyCL<T>:: DoublyCL()
{

}
template <class T>
DoublyCL<T>:: ~DoublyCL()
{

}


template <class T>
void DoublyCL<T>:: Display()
{

}
template <class T>
int DoublyCL<T>::Count()
{
 
}


template <class T>
void DoublyCL<T>:: InsertFirst(T No)
{

}

template <class T>
void DoublyCL<T>:: InsertLast(T No)
{

}

template <class T>
void DoublyCL<T>:: InsertAtPos(int iPos,T No)
{

}


template <class T>
void DoublyCL<T>:: DeleteFirst()
{
  
}

template <class T>
void DoublyCL<T>:: DeleteLast()
{

}

template <class T>
void DoublyCL<T>:: DeleteAtPos(int iPos)
{

}

///////////////////////////////////////////////////////////////////////////////////////////
// Main Function
///////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    SinglyLL <int>lobj1;
    SinglyLL <char>lobj11;

    SinglyCL <int>lobj2;
    DoublyLL <int>lobj3;
    DoublyCL <int>lobj4;
    int iRet = 0;

    lobj1.InsertFirst(31);
    lobj1.InsertFirst(21);
    lobj1.InsertFirst(11);

    lobj1.InsertLast(41);
    lobj1.InsertLast(51);

    lobj1.InsertAtPos(3,5000);

    lobj1.Display();
    iRet = lobj1.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    lobj1.DeleteFirst();
    lobj1.DeleteLast();
    lobj1.DeleteAtPos(3);

    lobj1.Display();
    iRet = lobj1.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    //#####################################################################################

    lobj11.InsertFirst('C');
    lobj11.InsertFirst('B');
    lobj11.InsertFirst('A');

    lobj11.InsertLast('D');
    lobj11.InsertLast('E');

    lobj11.Display();
    iRet = lobj11.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    
    return 0;
}