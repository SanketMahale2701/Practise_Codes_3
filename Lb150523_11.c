// Input : 7
// Output : A   B   C   D   E   F   G

// Input : 3
// Output : A   B   C

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    char Ch = '\0';
    
    for(iCnt = 1,Ch ='A';iCnt <= iNo;iCnt++, Ch++ )
    {
       printf("%c\t",Ch);
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