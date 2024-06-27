#include<stdio.h>
int main()
{
    //declaring 2 varibles//
    int num, a=0;

    /*firstly taking input from user*/

    printf("Enter a number\n ");
    scanf("%d",&num);

    //using do while loop
    do{ 
        printf("%d\n",a+1); //prints the entered number  
        a=a+1; //add one for the next

    }while (a<num);  //declaring the condition as less the user entered number 
    
    return 0;
}
