/* 
   Program 433

   Q. Problem on array using OOP approch
     and using Generic approch and write the maximum number logic
     
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
    int Maximum();
    
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
     cout<<"\n";
}

template<class T>
void ArrayX<T> :: Display()
{
    cout<<"Enter the elements : \n";
    
    for(int iCnt = 0;iCnt <iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}
template<class T>
int ArrayX<T> :: Maximum()
{
    int iMax = Arr[0];
    for(int iCnt = 0;iCnt <iSize;iCnt++)
    {
       if(Arr[iCnt] > iMax)
       {
        iMax = Arr[iCnt];
       }
    }
    return iMax;
}
int main()
{
    ArrayX<int>obj1(5);
    int iRet = 0;
    obj1.Accept();
    obj1.Display();
    iRet = obj1.Maximum();
    cout<<"Maximum number are :"<<iRet<<"\n";



    ArrayX<double>obj4(8);
    double dRet = 0.0;
    obj4.Accept();
    obj4.Display();
    dRet = obj4.Maximum();
    cout<<"Maximum number are :"<<dRet<<"\n";

    return 0;
}