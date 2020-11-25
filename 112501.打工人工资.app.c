#include <stdio.h>
void main()
{int a;
scanf("%d",&a);
if (1<=a && a<=100)
{
	printf("贫困打工人");
}
else if (101<=a && a<=1000)
{
	printf("一般打工人");
}
else 
{
	printf("土豪打工人");
}
}
