#include<stdio.h>
void main(int i,int j)
{
	if(j=i){}
	while(i<=5)
	{
		while(j<=5)
		{
			if(i%2==1&&j%2==0||j%2==1&&i%2==0)
			{
				if(printf("* ",j++)){}
			}
			else
			{
				if(printf("%d ",j++)){}
			}
		}
	if(printf("\n",j=1,i++)){}
	}
}