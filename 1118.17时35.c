#include <stdio.h>
void main()
{
int x;
scanf("%d",&x);
if (1>x)
x=x;
else if(1<=x && x<10)
x=2*x-1;
else x=3*-11;
printf("y=%d\n",x);
}
