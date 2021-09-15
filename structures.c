#include <stdio.h>
struct Student
  {
    int id;
    int marks;
    char fav_char;
  };

int main()
{
  struct Student Chesta , Harsh;
  Chesta.id = 1;
  Harsh.id = 2;
  Chesta.marks = -18;
  Harsh.marks = 0;
  Chesta.fav_char = "s";
  Harsh.fav_char ='h';
  printf("Marks of harsh is %d\n",Harsh.marks);
  printf("Marks of chesta is %d\n",Chesta.marks);
  printf("%c",Chesta.fav_char);
  return 0;
}