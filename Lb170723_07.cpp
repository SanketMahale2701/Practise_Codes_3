/* 
   Program 423

   Q. Accept two number from user and swap the contain  of that number.
      Call by reference technique
      Generic approch
*/ 

#include<iostream>
using namespace std;

template<class T>
void Swap (T &No1,T &No2)  // &No1,&No2 is Reference veriable
{
    T Temp ;
    Temp = No1;
    No1 = No2;
    No2 = Temp;
}
int main()
{
    int A = 10, B = 11;
    double X = 10.7621, Y = 11.5716;

    Swap(A,B);  // call by reference function;
    Swap(X,Y);

    cout<<"Data after swaping is :\n";
    cout<<"Value of A is : "<<A<<"\n";
    cout<<"Value of B is : "<<B<<"\n";

    cout<<"Data after swaping is :\n";
    cout<<"Value of X is : "<<X<<"\n";
    cout<<"Value of Y is : "<<Y<<"\n";


    

        
    return 0;
}