#include<stdio.h>
int main()
{
int num = 10,*ptr;
ptr=&num;
printf("value of num %d\n",*ptr);
return 0;
}