/*
    Input : 

    Row : 4
    Col : 4

    Output : 
    *   @   @   @
    $   *   @   @
    $   $   *   @
    $   $   $   *                    
*/  
#include<stdio.h>

void Display(int irow,int icol)
{
    int i = 0;
    int j = 0;
    if(irow != icol)
    {
        printf("Invalid input \n");
    }
    
    for(i = 1; i <= irow ; i++ )
    {
       for(j = 1 ; j <= icol ; j++ )
       {
        if ((i == j))
        {
            printf("*\t");
        }
        else if( i > j )
        {
            printf("$\t");
        }
        else 
        {
            printf("@\t");
        }
       }
        printf("\n");
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

/*
Lb160523_02.c
+-------+-------+-------+-------+-------+
| Row i |   1   |   2   |   3   |   4   |
| Col j |       |       |       |       |
+-------|-------|-------|-------|-------|
|   1   |  1.1  |  1.2  |  1.3  |  1.4  |
+-------+-------+-------+-------+-------+
|   2   |  2.1  |  2.2  |  2.3  |  2.4  |
+-------|-------|-------|-------|-------|
|   3   |  3.1  |  3.2  |  3.3  |  3.4  |
+-------+-------+-------+-------+-------+
|   4   |  4.1  |  4.2  |  4.3  |  4.4  |
+-------+-------+-------+-------+-------+


+-------++-------+-------+-------+-------+
| Row i ||   1   |   2   |   3   |   4   |
| Col j ||       |       |       |       |
+-------++-------+-------+-------+-------+
|   1   ||   *   |   @   |   @   |   @   |
+-------||-------|-------|-------|-------|
|   2   ||   $   |   *   |   @   |   @   |
+-------||-------|-------|-------|-------|
|   3   ||   $   |   $   |   *   |   @   |
+-------||-------+-------+-------+-------+
|   4   ||   $   |   $   |   $   |   *   |
+-------++-------+-------+-------+-------+

*/
