#include <stdio.h>
int main()
{
    char arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the values for array %d\n",i);
        scanf("%c", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of %dth element of array is %c\n",i,arr[i]);
    }
    return 0;
}