#include <stdio.h>
int main()
{
    int age, marks;
    printf("enter your age\n");
    scanf("%d", &age);

    printf("enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("your age is 3\n");
        switch (marks)
        {
        case 45:
            printf("your marks are 45\n");
            break;

        case 35:
            printf("your marks are 35\n");
            break;

        default:
            printf("your marks are neither 45 nor 35\n");
            break;
        }
        break;

    case 4:
        printf("your age is 4");
        break;

    case 5:
        printf("your age is 5");
        break;

    default:
        break;
    }
    return 0;
}