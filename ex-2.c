/*kms to miles      1=0.621371
inches to foot      1=0.0833333
cms to inches       1=0.393701
pound to kgs        1=0.453592
inches to meters    1=0.0254
*/

#include <stdio.h>

int main()
{
    int choice;
    int num;
    char input;
    {
        printf("HEYYYY!!!!\nCHOOSE ANY OF THE GIVEN BELOW\n");
        printf("1. Kilometer to Miles\n2. Inches to Foot\n3. Centimeter to Inches\n4. Pounds to Kilograms\n5. Inches to Meter\n");
        printf("ENTER YOUR OPTION: \n");
        scanf("%d", &choice);
        
    }
    // printf("ENTER q FOR QUITING THE PROGRAM");
    // scanf("%c", &input);
    // switch (input)
    // {
    // case 'q':
    //     printf("QUITING THE PROGRAM...");
    //     goto end;
    //     break;
    // }
    switch (choice)
    {
    case 1:
        printf("ENTER THE VALUE YOU WANT TO CONVERT: \n");
        scanf("%d", &num);
        printf("%d Kilometer = %f Miles\n", num, num * 0.621371);
        break;
    case 2:
        printf("ENTER THE VALUE YOU WANT TO CONVERT: \n");
        scanf("%d", &num);
        printf("%d Inches = %f Foot\n", num, num * 0.0833333);
        break;
    case 3:
        printf("ENTER THE VALUE YOU WANT TO CONVERT: \n");
        scanf("%d", &num);
        printf("%d Centimeter = %f Inches\n", num, num * 0.393701);
        break;
    case 4:
        printf("ENTER THE VALUE YOU WANT TO CONVERT: \n");
        scanf("%d", &num);
        printf("%d Pound = %f Kilogram\n", num, num * 0.453592);
        break;
    case 5:
        printf("ENTER THE VALUE YOU WANT TO CONVERT: \n");
        scanf("%d", &num);
        printf("%d Inches = %f Meter\n", num, num * 0.0254);
        break;
    case 6:
        printf("QUITING THE PROGRAM...");
        break;
    default:
        printf("INVALID INPUT!!!\n");
        break;
    }

    // end:
    return 0;
}
