#include <stdio.h>
int main()
{
    //compiler will treat text written in double quote as string and text written in single quote as char//
    char c = 'g'; //1 bytes//
    int a = 7; //2 to 4 bytes depending uopn architecture//
    unsigned short integer = 8; //2 bytes//
    long integer1 = 7; //4 bytes//
    short integer2 = 5;//2 bytes//

    float b = 5.54; //4 bytes//
    double myfloat = 7.34; //15 decimal places precision//
    long double myfloat1=6.3456784; //19 decimal places precision//
    printf("i am printing int value which is %d \n", a);
    printf("the size taken by int in my architecture is %d\n",sizeof(a));
    printf("the size taken by unsigned short in my architecture is %d\n",sizeof(integer));
    printf("the size taken by long in my architecture is %d\n",sizeof(integer1));
    printf("the size taken by short in my architecture is %d\n",sizeof(integer2));
    printf("the size taken by float in my architecture is %d\n",sizeof(b));
    printf("the size taken by double in my architecture is %d\n",sizeof(myfloat));
    printf("the size taken by long double in my architecture is %d\n",sizeof(myfloat1));
    printf("the size taken by char in my architecture is %d\n",sizeof(c));
    return 0;
}
