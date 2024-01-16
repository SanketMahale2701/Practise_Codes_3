/* 
   Program 426

   Q. Display the integer and double array on screen 
     
*/ 

#include<iostream>
using namespace std;

void Display (int Arr[],int iSize)  // &No1,&No2 is Reference veriable
{
   for(int iCnt = 0;iCnt < iSize;iCnt++)
   {
     cout<<Arr[iCnt]<<"\t";
   }
   cout<<"\n";
}
void Display (double Brr[],int iSize)  // &No1,&No2 is Reference veriable
{
   for(int iCnt = 0;iCnt < iSize;iCnt++)
   {
     cout<<Brr[iCnt]<<"\t";
   }
   cout<<"\n";
}
int main()
{
    
    int Arr[] = {1,2,3,4,5,6,7,8,9,10};
    double Brr[] = {1.122,2.321,3.123,4.424,5.563,6.453,7.3456,8.36345,9.6426,10.2334};

    Display(Arr,10);
    Display(Brr,10);

    return 0;
}