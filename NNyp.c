/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
#include <stdlib.h>
int main(int argc, char *a[])
{
	//Write code here
	int i,j,k,q,max,t,n,temp,mat;
	int* ptr;

	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
	    ptr = (int*)malloc(n * sizeof(int));
		for(j=0;j<n;j++)
		{
			scanf("%d",&ptr[j]);
		}
    max=ptr[0];
		for(j=1;j<n;j++)
		{
			if(max<ptr[j])
      {
        max=ptr[j];
      }
		}
	
		for(j=0;j<n-2;j++)
		{
			temp=ptr[j];
			for(q=j+2;q<n;q=q+2)
			{
				if(ptr[q]>0 )
				{       
					   
				temp=temp+ptr[q];
				if(max<temp)
				{
				max=temp;
				}
				}
			}
		}    
		for(j=0;j<n;j++)
		{
		  if(max==ptr[j])
			{
				printf("%d\t",max);
				goto h1;
			}
		}
    for(j=0;j<n-2;j++)
		{
      temp=ptr[j];
      for(q=j+2;q<n;q=q+2)
      {
          if(ptr[q]>0 )
          {          
           temp=temp+ptr[q];
           if(max==temp)
            {
              while(q!=j)
              {
              printf("%d",ptr[q]);
              q=q-2;            
              }
              printf("%d",ptr[j]);
              goto h1;
            }
          }
      	}
		}     
      
		h1:  printf("\n");
	}
}
