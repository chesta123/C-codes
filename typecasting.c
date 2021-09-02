#include <stdio.h>
int main()
{
    //we can typecaste the format of our variables//
    // int a = 5;//
    // printf("floating point value of a is %f",(float)a);//

    int num1,num2;
    printf("enter the value of num1 and num2\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("num1/num2 is %f",(float)num1/num2);

    return 0;
}