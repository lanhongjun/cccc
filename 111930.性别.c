#include <stdio.h>
void main()
{
	int x;
	scanf("%d",&x);
	if(x==0)
		printf("女");
	else if(x==1)
		printf("男");
	else
		printf("输入错误，请重新输入");
}
