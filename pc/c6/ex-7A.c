#include <stdio.h>

int main(void)
{
	int i, j;
	int   p[10];
	
		  
		  for( i = 2; i <= 10; i++)
		  {
		  	p[i] = 1;
		  	printf(" \n%d", p[i]);

		  	for(j = i; j*i <= 10; j++);
		  	{
		  		
		  		if(p[i*j] <= i)
		  		{
		  			p[j] = 0;
		  		
		  			p[i] = p[i * p[j]] ;
		  			//printf("\n ");	
		  			printf(" %d",p[i]);

		  			
		  		}
		  	}
		  	
		  		
		   }  
		  	

		  		
		  	
		  	
		
				
		 
		 
		  
		  
		  	
		  return 0;
}	
