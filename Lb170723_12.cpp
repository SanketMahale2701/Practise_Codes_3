/* 
   Program 428

   Q. Display the addition of array
      using Generic approch
     
*/ 

#include<iostream>
using namespace std;

template<class T>
T Addition (T Arr[],int iSize)  // &No1,&No2 is Reference veriable
{
    T Sum;
    int iCnt = 0;

   for(iCnt = 0;iCnt < iSize;iCnt++)
   {
     Sum = Sum + Arr[iCnt];
   }
  
  return Sum;
}
int main() 
{
     
    int Arr[] = {1,2,3,4,5,6,7,8,9,10};
    int iRet = 0;
    iRet = Addition(Arr,10);
    cout<<"Addition of Arr is :"<<iRet<<"\n";

    double Brr[] = {1.122,2.321,3.123,4.424,5.563,6.453,7.3456,8.36345,9.6426,10.2334};
    double dRet = 0.0;
    dRet = Addition(Brr,10);
    cout<<"Addition of Brr is :"<<dRet<<"\n";

    return 0;
}