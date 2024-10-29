#include<stdio.h>
#include<conio.h>
 void sub();
 main()
{
 sub(); //function call
}
 void sub() //function defination
{
 int a,b,c;
 printf("Enter tow number");
 scanf("%d%d",&a,&b);
 c=a-b;
 printf("%d",c);
}
