#include<stdio.h>
#include<conio.h>
int main()
{
	int roll;
	char name[];
	float marks;
	double id;
	
   printf("int size is = %d Byte\n",sizeof(roll));
   printf("charecter size is = %lu Byte\n",sizeof(name));
   printf("float size is = %lu Byte\n",sizeof(marks));
   printf("double size is = %lu Byte\n",sizeof(id));

  return 0;
  getch();
}
