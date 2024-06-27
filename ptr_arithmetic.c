#include<stdio.h>

int main(int argc, char const *argv[])
{
    //int a = 34;
    /*char a = '3'; // it gives the same output as char takes only one byte  
    int*ptra = &a;
    printf("%d\n",ptra);
    ptra++;
    printf("%d\n",ptra);
    printf("%d",ptra+2);*///depends onthe architecher of system
   
    int arr[] = {1,2,3,4,5,6,67};
    int* arrayptr = arr;//we can add or cut in arrayptr but arr is constant it gives an error we we change 
    printf("Value at position 3 of thr array is %d\n",arr[4]);
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of first element of the array is %d\n", arr);
    printf("The address of second element of the array is %d\n", &arr[1]);
    printf("The address of second element of the array is %d\n", arr + 1);
    // arr++; this line will throw an error

    printf("The value at address of first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of first element of the array is %d\n", *(arr));
    printf("The value at address of second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of second element of the array is %d\n", *(arr + 1));
    return 0;
}
