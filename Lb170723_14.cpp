/* 
   Program 430

   Q. Problem on array using OOP approch
     
*/ 

#include<iostream>
using namespace std;
class ArrayX
{
    public:

    int *Arr; 
    int iSize;

    ArrayX(int length)
    {
      iSize = length;
      Arr = new int[iSize];
    }
    void Accept()
    {
        cout<<"Enter the elements : \n";

        for(int iCnt = 0;iCnt <iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
        cout<<"Enter the elements : \n";
        
        for(int iCnt = 0;iCnt <iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
    }
};
int main()
{
    ArrayX obj(5);
    obj.Accept();
    obj.Display();

    return 0;
}