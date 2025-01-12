#include<stdio.h>
void main(int i,int j)
{
	if(j=i){}
	while(i<=8)
	{
		if(i%2==0)
		{
			if(printf("  ")){}
		}
		while(j<=11)
		{
			if(printf("* ",j++)){}
		}
		if(printf("\n\n",j=1,i++)){}
	}
}