#include <stdio.h>
void main(int i,int j)
{
if(j=i)
while(i<=5)
{
	while(j<=5)                    //12345
	{                              //22345
	                               //44445
	 if(printf("%d ",i,j++)){}
		// if(j++){}
      else
         if(printf("%d ",j++)){}	//55555
		}
	if(printf("\n",j=1,i++)){}
}	
}	