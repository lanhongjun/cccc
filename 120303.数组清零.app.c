#include <stdio.h>
#include <windows.h>
void main()
{int i,o;
int a[2][3]=
	{

		{999,9999,9999},
		{999,999,999}
};
   	for(i=0;i<2;i++)
{
		for(o=0;o<3;o++)
		{
printf("%d ",a[i][o]);
		}
printf("\n");
}
	Sleep(1000);
	for(i=0;i<2;i++)
{
		for(o=0;o<3;o++)
		{
			a[i][o]=0;
printf("%d ",a[i][o]);
		}
printf("\n");
}
	Sleep(1000);
	for(i=0;i<2;i++)
{
		for(o=0;o<3;o++)
		{
			a[i][o]=999;
printf("%d ",a[i][o]);
		}
printf("\n");
}
}
