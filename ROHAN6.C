#include<stdio.h>
int main()
{
char ch;
printf("enter any character:");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
{
printf("the char is upper,\n");
}
else
{
printf("lower,\n");
}
return 0;
}
