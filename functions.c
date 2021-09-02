#include <stdio.h>
int global_variable = 7;
int sum(int a, int b)
{
    return a + b;
}

float average(float a, float b)
{
    return (a + b) / 2;
}

int main()
{
    global_variable = 6;
    printf("%f\n", average(100, 201));
    printf("global variable is %d\n", global_variable);
    return 0;
}
