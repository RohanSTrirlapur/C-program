#include<stdio.h>
int main()
{
int arr[3][3],i,j,max;
printf("enter elements of the matrxi (3*3):\n");
for(i= 0 ; i < 3 ; i++)
{
for(j= 0 ; j < 3 ; j++)
{
scanf("%d",&arr[i]);
}
}
for(i = 0 ; i < 3 ; i++)
{
for(j = 0 ; j < 3 ; j++)
{
if(arr[i][j] > max)
{
max = arr[i][j];
}
}
}
printf("maximum elements :%d\n");
return 0;
}