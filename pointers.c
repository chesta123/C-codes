#include <stdio.h>
int main()
{
    int a = 4;
    printf("%d\n",a);
    int* ptr = NULL;
    if(ptr)
    {
        printf("pointer is not null");
    }
    ptr = &a;
    *ptr = 45;
    printf("%d",a);
    return 0;
}