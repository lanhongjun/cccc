#include<stdio.h>
int lan(int x)
{ 
	if (x<=0)
	{
	return 0;
	}
	return x+lan(x-1);
} 
 void main()
 {
	int y;
	scanf("%d",&y);
 printf("%d",lan(y));
 } 
