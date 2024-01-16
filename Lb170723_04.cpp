/* 
   Program 420

   Q. Accept two number from user and swap the contain  of that number.
   
      Call by reference technique
*/ 

#include<iostream>
using namespace std;

void Swap (int &No1,int &No2)  // &No1,&No2 is Reference veriable
{
    int Temp ;
    Temp = No1;
    No1 = No2;
    No2 = Temp;
}
int main()
{
    int A = 10, B = 11, Ret;

    Swap(A,B);  // call by reference function;

    cout<<"Data after swaping is :\n";
    cout<<"Value of A is : "<<A<<"\n";
    cout<<"Value of B is : "<<B<<"\n";


    

        
    return 0;
}