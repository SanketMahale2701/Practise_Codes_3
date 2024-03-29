/*
    Input : 

    Row : 6
    Col : 6

    Output : 
    A
    A   B
    A   B   C
    A   B   C   D
    A   B   C   D   E
    A   B   C   D   E   F             
*/  
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char Ch = '\0';

    if(iRow != iCol)
    {
        printf("Invalid input\n");
        return; 
    }

    for(i = 1; i<= iRow; i++)   
    {   
        for(j = 1,Ch = 'A'; j <= i; j++,Ch ++) 
        {
            {   
                printf("%c\t",Ch);
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
|   1   ||   A   |       |       |       |
+-------||-------|-------|-------|-------|
|   2   ||   A   |   B   |       |       |
+-------||-------|-------|-------|-------|
|   3   ||   A   |   B   |   C   |       |
+-------||-------+-------+-------+-------+
|   4   ||   A   |   B   |   C   |   D   |
+-------++-------+-------+-------+-------+

*/
