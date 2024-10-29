#include<stdio.h>
#include<conio.h>
int main()
{
 int i;
 int num;
 printf("Enter the number");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
   if(i%2==0)
   {
    printf("%d",i);
   }
 }
    getch();
   return 0;

}

