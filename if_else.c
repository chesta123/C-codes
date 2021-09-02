#include <stdio.h>
int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if (age<18)
    {
        printf("you cannot make your PAN card and hence can't invest in stocks");
    }
    else
    {
        printf("Congrats! Ypu r eligible for PAN card,Make your money");
    }
    //syntax for else if is - else if (*condition*) then code//

    //********************short hand if else******************//
    int e = age >5 ? 100 : 200;
    printf("%d",e);
    return 0;
}