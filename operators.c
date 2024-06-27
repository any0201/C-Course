#include<stdio.h>

int main()
{
    int a,b;
    a = 4;
    b = 24;

    /*ARITHMATIC OPERATORS*/
    printf("ARITHMATIC OPERATORS\n");
    /*if we want floating value we have to write float b; and "%f" */
    
    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);

    /*RELATIONAL OPERATORS*/
    printf("RELATIONAL OPERATORS\n");

    printf("a == b = %d\n", a==b);

    /*LOGICAL OPERATORS*/
    printf("LOGICAL OPERATORS\n");

    printf("a && b = %d\n", a&&b); /*BOTH ARE NON ZERO THEN TRUE*/
    printf("a || b = %d\n", a||b); /*ANY OF THEM IS NON ZERO THEN TRUE*/
    printf("a ! b = %d\n", !b); /*IF CON. IS TRUE IT WILL MAKE IT FALSE*/

    /*BITWISE OPERATORS*/
    printf("BITWISE OPERATORS\n");

    printf("a & b = %d\n", a&b);

    /*ASSIGNMENT OPERATORS*/
    printf("ASSIGNMENT OPERATORS\n");
    a+=1;
    printf("a = %d\n");
    
    return 0;
}
