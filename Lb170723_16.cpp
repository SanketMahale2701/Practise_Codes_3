/* 
   Program 432

   Q. Problem on array using OOP approch
     and using Generic approch
     
*/ 

#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:

    T *Arr; 
    int iSize;

    ArrayX(int);
    void Accept();
    void Display();
    
};

template<class T>
ArrayX<T> :: ArrayX(int length)
{
    iSize = length;
    Arr = new T[iSize];
}

template<class T>
void ArrayX<T> :: Accept()
{
    cout<<"Enter the elements : \n";

    for(int iCnt = 0;iCnt <iSize;iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template<class T>
void ArrayX<T> :: Display()
{
    cout<<"Enter the elements : \n";
    
    for(int iCnt = 0;iCnt <iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
}
int main()
{
    ArrayX<int>obj(5);
    obj.Accept();
    obj.Display();

    return 0;
}