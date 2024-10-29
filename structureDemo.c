#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char name[10];
	float marks;
};
int main()
{
  struct student s;
  printf("Enter student data");
  scanf("%d%s%f",&s.roll,&s.name,&s.marks);
  printf("%d\n%s\n%f\n",s.roll,s.name,s.marks);
  return 0;
  getch();
}

