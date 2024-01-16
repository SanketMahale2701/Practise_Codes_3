// Input :  5
// Output : 1   2   3   4   5   5   4   3   2   1   
// Input :  7
// Output : 2   4   6   8   10  12  14

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1;iCnt <= iNo;iCnt++ )
    {
       printf("%d\t",iCnt);
    }
    for(iCnt = iNo;iCnt >= 1;iCnt-- )
    {
       printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iFrequency = 0;

    printf(" Enter the frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}