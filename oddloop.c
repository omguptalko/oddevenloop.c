//Program to print even and odd using while loop
#include<stdio.h>
void main()
{
 int i=1;
while( i<=10)
{
if  ( i%2==0)
printf("even no.%d\n",i);
else
printf("odd no.%d\n",i);
i++;
}
}