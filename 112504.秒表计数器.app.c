#include <windows.h>
#include <stdio.h>
void main()
{
int i;
for (i=0;;i++)
{
Sleep(1000);
printf("第%d秒\n",i);
}
}
