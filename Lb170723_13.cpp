/* 
   Program 429

   Q. Display the maximum number from the array
      using Generic approch
     
*/ 

#include<iostream>
using namespace std;

template<class T>
T Maximum (T Arr[],int iSize)  // &No1,&No2 is Reference veriable
{
    T iMax = Arr[0];
    int iCnt = 0;

   for(iCnt = 0;iCnt < iSize;iCnt++)
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
     
    int Arr[] = {1,2,3,4,5,6,7,8,9,10};
    int iRet = 0;
    iRet = Maximum(Arr,10);
    cout<<"Maximum number of Arr is :"<<iRet<<"\n";

    double Brr[] = {1.122,2.321,3.123,4.424,5.563,6.453,7.3456,8.36345,9.6426,10.2334};
    double dRet = 0.0;
    dRet = Maximum(Brr,10);
    cout<<"Maximum number of Brr is :"<<dRet<<"\n";

    return 0;
}