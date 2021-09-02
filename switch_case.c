#include <stdio.h>
int main()
{
    int a = 4;
    switch (a)
    {
    case 2:
        printf("value of a is 2\n");
        break;

    case 4:
        printf("value of a is 4\n");
        break;

    case 6:
        printf("value of a is 6");

    default:
        printf('nothing matched');
    }

    return 0;
}