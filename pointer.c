#include<stdio.h>

int main()
{
    printf("POINTERS\n");
    int a = 75;
    int * ptra = &a;
    int *ptr2 = NULL;
    //%x-hexadecimal ,%p-used to print the pointer
    printf("THE ADDRESS OF POINTER TO A IS %p\n",&ptra);
    printf("THE ADDRESS OF A IS %p\n",&a);
    printf("THE VALUE OF A IS %p\n", ptra);
    printf("THE VALUE OF A IS %d\n",*ptra);
    printf("THE VALUE OF A IS %d\n",&a);
    printf("THE ADDRESS OF SOME GARBAGE IS %p\n",ptr2);

    return 0; 
}
