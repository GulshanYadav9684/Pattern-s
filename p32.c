#include<stdio.h>
void main(int i,int j,int k)
{
	if(k=j=i){}
	while(i<=8)
	{
		while(k<=i)
		{
			if(printf(" ",k++)){}
		}
		while(j<=11)
		{
			if(printf("* ",j++)){}
		}
		if(printf("\n",j=1,i++,k=1)){}
	}
}