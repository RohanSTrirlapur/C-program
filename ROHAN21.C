#include<stdio.h>
int main()
{
int i,num,rev;
clrscr();
printf("enter number\n");
scanf("%d",&num);
for(; num !=0;num/=10)
{
rev=rev*10+num%10;
printf("%d\n",i);
}
return 0;
}