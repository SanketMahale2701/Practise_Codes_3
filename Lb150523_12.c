// program 105

// Input : 7
// Output : a   1   b   2   c   3   d   4   e   5   f   6   g   7

// Input : 3
// Output : a   1   b   2   c   3 
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    char Ch = '\0';
    
    for(iCnt = 1,Ch ='a';iCnt <= iNo;iCnt++,Ch++ )
    {
       printf("%c\t%d\t",Ch,iCnt);
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