/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    a   b   c   d   e
    a   b   c   d   e
    a   b   c   d   e        
*/  
#include<stdio.h>
void Display(int irow,int icol)
{
    int i = 0;
    int j = 0;
    char Ch = '\0';
    
    for(i = 1; i <= irow ; i++ )
    {
       for(j = 1 , Ch = 'a'; j <= irow ; j++,Ch ++ )
       {
          printf("%c\t",Ch);
       }
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
