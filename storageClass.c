#include<stdio.h>
#include<conio.h>
void add();
void add()
{ 
   auto a = 10;
   static b = 20;
   printf("%d %d\n",a,b);
   a++;
   b++;
}
int main()
{
	add();
	add();
	add();
	add();
	return 0;
	getch();
}
