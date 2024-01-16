/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    
    a   a   a   a   a
    b   b   b   b   b
    c   c   c   c   c

*/  
//  3: 23 hour
#include<stdio.h>
void Display(int irow,int icol)
{
    int i = 0;
    int j = 0;
    char Ch = 'a';
    
    for(i = 1; i <= irow ; i++ )
    {
       for(j = 1 ; j <= icol ; j++)
       {
          printf("%c\t",Ch);
       }
       Ch ++;
       printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf(" Enter the number of rows : \n");
    scanf("%d",&iValue1);
   
    printf(" Enter the number of column : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}
