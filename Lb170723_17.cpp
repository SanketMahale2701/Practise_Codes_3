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
    ArrayX<int>obj1(5);
    obj1.Accept();
    obj1.Display();

    ArrayX<char>obj2(6);
    obj2.Accept();
    obj2.Display();

    ArrayX<float>obj3(7);
    obj3.Accept();
    obj3.Display();

    ArrayX<double>obj4(8);
    obj4.Accept();
    obj4.Display();

    return 0;
}