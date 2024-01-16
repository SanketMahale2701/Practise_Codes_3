/*
    Input : 

    Row : 4
    Col : 4

    Output : 
    *   *   *   #
    *   *   #   *
    *   #   *   *
    #   *   *   * 
            
            
*/  
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid input\n");
        return; 
    }

    for(i = iRow; i >= 1; i--)   
    {   
        for(j = 1; j <= iCol; j++) 
        {
            if(i == j)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}
/*
Lb160523_02.c
+-------+-------+-------+-------+-------+
| Row i |   1   |   2   |   3   |   4   |
| Col j |       |       |       |       |
+-------|-------|-------|-------|-------|
|   1   |  4.1  |  3.1  |  2.1  |  1.1  |
+-------+-------+-------+-------+-------+
|   2   |  4.2  |  3.2  |  2.2  |  1.2  |
+-------|-------|-------|-------|-------|
|   3   |  4.3  |  3.3  |  2.3  |  1.3  |
+-------+-------+-------+-------+-------+
|   4   |  4.4  |  3.4  |  2.4  |  1.4  |
+-------+-------+-------+-------+-------+


+-------++-------+-------+-------+-------+
| Row i ||   1   |   2   |   3   |   4   |
| Col j ||       |       |       |       |
+-------++-------+-------+-------+-------+
|   1   ||   *   |   *   |   *   |   #   |
+-------||-------|-------|-------|-------|
|   2   ||   *   |   *   |   #   |   *   |
+-------||-------|-------|-------|-------|
|   3   ||   *   |   #   |   *   |   *   |
+-------||-------+-------+-------+-------+
|   4   ||   #   |   *   |   *   |   *   |
+-------++-------+-------+-------+-------+

*/

