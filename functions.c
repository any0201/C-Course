#include<stdio.h>

//WITH ARGUMENTDS AND WITH RETURN VALUE

/*
int sum(int a,int b)
{
    return a + b;
}
int main()
{
    int a,b,c; //DECLARATIONS
    a = 51;
    b = 49;
    c = sum(a,b);
    printf("the sum is %d\n",c);
     return 0;
}
*/

//WITH ARGUMENTDS AND WITHOUT RETURN VALUE
/*
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
    printf("%c",'*');    
    }
  
    printf("%c",'*'); 
}
int main()
{
    printstar(7);
    return 0;
}
*/
//WITHOUT ARGUMENT AND WITH RETURN VALUE
/*
int takenumber()
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    return i;
}   
int main()
{
    int a;
    a = takenumber();
    printf("the number entered is %d\n", a);
    return 0;
}
*/
//WITHOUT ARGUMENT WITHOUT RETURN VALUE 
int number()
{
    int a,b,c,sum;
    a = 10;
    b = 11;
    c = 12;
    sum = a+b+c;
    printf("the value of a is %d",sum);
}
    int main()
    {
        number();        
        return 0;
    }
    


