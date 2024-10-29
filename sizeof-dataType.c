#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char name;
	float marks;
	double id;
};
int main()
{ 
struct student s;
printf("int size = %d\n",sizeof(s.roll));
printf("charecter size is = %c\n",sizeof(s.name));
printf("float size is = %f\n",sizeof(s.marks));
printf("%doble size is = %lf\n",sizeof(s.id));

  return 0;
  getch();
}
