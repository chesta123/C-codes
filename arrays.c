#include <stdio.h>
int main()

{   
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the values for array %d\n",i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of %dth element of array is %d\n",i,array[i]);
    }
    return 0;
}