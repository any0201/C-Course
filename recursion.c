#include <stdio.h>

//write the logic inside a function

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

//in main function write the code which you want to print

int main()
{
    int num;
    printf("Enter the number you want factorial of: ", num);
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, factorial(num));

    return 0;
    
}
