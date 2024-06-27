// maths and science - 45
// science - 15
// maths - 15
#include<stdio.h>

int main()
{
    int subject;
    
    printf("1.Passed in both SCIENCE AND MATHS\n 2.Passed in SCIENCE\n 3.Passed in MATHS\n");
    printf("Enter your choice: \n");
    scanf("%d", &subject);

    if (subject == 1)
    {
        printf("Yeahh you won gift of rupees 45");
    }
    else if (subject == 2 )
    {
        printf("Yeahh you won gift of rupees 15");
    }
    else if (subject == 3 )
    {
        printf("Yeahh you won gift of rupees 15");
    }
    else
    {
        printf("Invaild Choice");
    }
    
    
    
    return 0;
}
