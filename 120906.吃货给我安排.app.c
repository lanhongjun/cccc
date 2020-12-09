#include<stdio.h>
#include<string.h>
void main ()
{ char s[50];
	char s1[]="春节";
	char s2[]="端午节";
	char s3[]="中秋节";
	char s4[]="元宵节";
	scanf("%s",&s);
	if(strcmp(s,s1)==0)
	{
	printf("给我安排饺子");
	}
	else if(strcmp(s,s2)==0)
	{
	printf("给我安排粽子");
	}
	else if(strcmp(s,s3)==0)
	{
	printf("给我安排月饼");
	}
	else if(strcmp(s,s4)==0)
	{
	printf("给安排元宵");
	}
	
}
