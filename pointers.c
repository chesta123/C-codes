#include <stdio.h>
int main()
{
    int a = 4;
    printf("%d\n",a);
    int* ptr;
    ptr = &a;
    *ptr = 45;
    printf("%d",a);
    return 0;
}