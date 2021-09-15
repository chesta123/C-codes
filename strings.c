#include <stdio.h>
#include <string.h>
int main()
{
    char name[7] = {'c','h','e','s','t','a','\0'};
    char str1[7] ,str2[65] , str3[45];
    strcpy(str1,name);
    strcpy(str2,"x");
    printf("%s\n",str2);
    printf("%d\n", str1);  //Doubt - what is the meaning of output of this line//
    printf("%d\n",strcmp(str1,str2));
    printf(name);
  return 0;
}