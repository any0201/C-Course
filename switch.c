// SWITCH_STATEMENT
#include<stdio.h>

int main()
{
    int age,marks;
    printf("Enter your age: \n", age);
    scanf("%d",&age);

// NESTED_SWITCH_CASE

    printf("Enter your marks: \n", marks);
    scanf("%d",&marks);

    switch (age)
    {
    case 3:
        printf("Your age is 3\n");
// NESTED_SWITCH_CASE        
        switch (marks)
        {
            case 45:
                printf("Your marks are 45");
                break;
        
            default:
                printf("Your marks are not 45");
        }
        break;

    case 13:
        printf("Your age is 13\n");
        break;

    case 23:
        printf("Your age is 23\n");
        break;
    
    default:
        printf("Your age is not 3, 13 or 23");
        break;
    }
            
    return 0;
}
