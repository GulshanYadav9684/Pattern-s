#include<stdio.h>
void main(int i,int j)
{
	if(j=i){}
	while(i<=5)
	  {
		  while(j<=5)
		  {
			  if(i==j)
			  {
				  if(printf("0 ",j++)){}
			  }
			  else
			  {
				  if(printf("%d ",j++)){}
			  }
		  }
		  if(printf("\n",j=1,i++)){}
	  }
}