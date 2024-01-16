/*

  Program 418
  Generic Programming

*/

#include<iostream>
using namespace std;

int Addition(int No1,int No2)
{
    int Ans = 0;
    Ans = No1 + No2;    // bussness logic
    return Ans;
}
double Addition(double No1,double No2)
{
    double Ans = 0;
    Ans = No1 + No2;    // bussness logic
    return Ans;
}
int main()
{
    int A = 10, B = 11, Ret = 0;
    double X = 90.704, Y = 78.9042, Result = 0.0;

    Ret = Addition(A,B);
    Result = Addition(X,Y);

    cout<<"Addition is :"<<Ret<<"\n";
    cout<<"Addition is :"<<Result<<"\n";

    return 0;
}
