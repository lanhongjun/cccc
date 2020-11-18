#include <stdio.h>
void main()
{
int a=3,b=4,c=5,x,y;
if (a=b>c && b==c)
{
	printf("1真\n");
}
else 
{
printf("1假\n");
}
if (a||b+c && b-c)
{
	printf("2真\n");
}
else 
{
printf("2假\n");
}
if (!(a>b) && !c||1)
{
	printf("3真\n");
}
else 
{
printf("3假");}
if (!(x=a) && (y=b) && 0)
{
	printf("4真\n");
}
else 
{
printf("4假\n");}
if (!(a+b)+c-1 && b+c/2)
{
	printf("5真\n");
}
else 
{
printf("5假\n");
}
}
