#include<stdio.h>
void main()
{
char x;
scanf("%c",&x);
switch(x)
{
	case 'a':printf("向右跑");break;
	case 'd':printf("向左走");break;
	case 'w':printf("向上蹿");break;
	case 's':printf("向下钻");break;
default:printf("输入错误");

}
}
