#include <stdio.h>

int main()
{
    int marks[2][4] = {{4, 5, 6, 0}, {0, 6, 0, 6}}; // DECLARATION WITH INITIALIZATION
    /*
    marks[0] = 52;
    marks[1] = 50;
    marks[2] = 45;
    marks[3] = 35;
    printf("Marks of student 1 is %d\n",marks[0]);


    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array\n",i);
        scanf("%d",&marks[i]);
    }
    */

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
        
        // printf("The value of %d,%d element of the array is %d\n", i, marks[i][j]);
            printf("%d", marks[i] [j]);
        }    
        printf("\n");
    }

    return 0;
}
