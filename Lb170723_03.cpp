/*

  Program 419
  Generic Programming
  // Generic approach 

*/

#include<iostream>
using namespace std;

template<class T>  // Template header  , T = Templete Header
T Addition(T No1,T No2)
{
    T Ans;   //  ca'n
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    int A = 10, B = 11, Ret = 0;
    double X = 90.704, Y = 78.9042, Result = 0.0;
    float L = 23.23f , M = 21.43f, Resultf = 0;

    Ret = Addition(A,B);
    Result = Addition(X,Y);
    Resultf = Addition(L,M);

    cout<<"Addition is :"<<Ret<<"\n";
    cout<<"Addition is :"<<Result<<"\n";
    cout<<"Addition is :"<<Resultf<<"\n";

        
    return 0;
}