#include<stdio.h>
#include <windows.h>
void main()
{int i,o=0,p=0;
for(i=0;;i++)
{
Sleep(1000);
printf("%02d\n",i);


if(61<i)
{
	i=0;
	o=o+1;
}
else
{
	i=i;
}
printf("%02d:",p);

if(o>61)
{
o=0;
p=p+1;
}
else
{
o=o;
}
printf("%02d:",o);
}
}
