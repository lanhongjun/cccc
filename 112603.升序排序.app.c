#include <stdio.h>
void main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a<b && b<c)//321
{
printf("%d\n\n",a);
printf("%d\n\n",b);
printf("%d\n\n",c);
}
else if(a>b && a<c)//231
{
printf("%d\n\n",b);
printf("%d\n\n",a);
printf("%d\n\n",c);
}
else if (a<b && b>c && c>a)
{
printf("%d\n\n",a);
printf("%d\n\n",c);
printf("%d\n\n",b);
}
else if(b>a && a>c)
{
printf("%d\n\n",c);
printf("%d\n\n",a);
printf("%d\n\n",b);
}
else if(a>b && b>c)
{
printf("%d\n\n",c);
printf("%d\n\n",b);
printf("%d\n\n",b);
}
else
{ 
printf("%d\n\n",b);
printf("%d\n\n",c);
printf("%d\n\n",a);
}
}
