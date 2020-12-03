#include <stdio.h>
void main()
{
int i,o;
int arr2d[2][3]=
{
	{1,2,3},
	{4,5,6}
};
for(i=0;i<2;i++)
{
for(o=0;o<3;o++)
{
printf("%d ",arr2d[i][o]);
}
printf("\n");
}
}
