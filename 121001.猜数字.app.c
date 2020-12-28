#include<stdio.h>
#include<string.h>
void main()
{
	char a[50];
	char a1[]="天王盖地虎";
	char a2[]="宝塔镇河妖";
	int q,i,o=15;
	printf("天王盖地虎(请输入下一句，输入错误将推出游戏)\n");
	scanf("%s",&a);
	if(strcmp(a,a2)==0)
	{
	printf("你可以开始接下来的游戏了");
	for(q=0;;q++)
	{
	scanf("%d",&i);
	 if(i==o)
		{
			printf("恭喜回答正确,游戏结束");break;
			
		}
	 else if(i>o)
		{
			 printf("太大了");
		}
	else if(i<o)
		{
			printf("太小了");
		}
	}
	}
}
