/* 
   Program 422

   Q. Accept two number from user and swap the contain  of that number.
      Call by reference technique
      Specific approch
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
void Swap (double &No1,double &No2)  // &No1,&No2 is Reference veriable
{
    int Temp ;
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