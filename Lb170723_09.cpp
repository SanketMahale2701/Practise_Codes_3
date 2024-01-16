/* 
   Program 425

   Q. Display the integer array on screen 
     
*/ 

#include<iostream>
using namespace std;

void Display (int Arr[],int iSize)  // &No1,&No2 is Reference veriable
{
   for(int iCnt = 0;iCnt < iSize;iCnt++)
   {
     cout<<Arr[iCnt]<<"\t";
   }
}
int main()
{
    
    int Arr[] = {1,2,3,4,5,6,7,8,9,10};
    Display(Arr,10);
        
    return 0;
}