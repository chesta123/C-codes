#include <stdio.h>
int main()
{
    //logical operators//
int a=0 , b=7;
printf("The logical operator returned %d\n",a &&b);
printf("The logical operator returned %d\n",a ||b);
printf("The logical operator returned %d\n",!b);
printf("The logical operator returned %d\n",!a);

    /*bitwise operators
    A=60 B=13
    A=111100
    B=001101*/
int A=60,B=13;
printf("Bitwise and operator returned %d\n",A&B);
printf("Bitwise or operator returned %d\n",A|B);
printf("Bitwise xor operator returned %d\n",A^B);
printf("Bitwise ones complement operator returned %d\n",~B);
printf("Bitwise left shift operator returned %d\n",A<<B);
printf("Bitwise right shift operator returned %d\n",A>>B);

    //assignment operators//
    // =, +=, -=, *=, %=, etc//
int x=5;
x +=6;
printf("%d",x);

    //misc operators - &, *, ?: //
return 0;
}