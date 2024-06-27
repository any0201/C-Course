#include<stdio.h>

int main()
{
    int i,age;
    for(i=0 ; i<=10 ; i++){
        printf("%d\nEnter your age\n",i);
        scanf("%d",&age);

        // if(age>10)
        // {
        //     break;
        // }

        if(age>10)
        {
            continue;
        }
        printf("my name is anyy\n");
        printf("i study in parul university\n");
        printf("currently pursing bca\n");
    }


    return 0;
}
