#include <stdio.h>

int main(void)
{
	int i, j;
	int   p[10];
	
		  
		  for( i = 2; i <= 10; i++)
		  {
		  	p[i] = i / i;
		  	printf(" \n%d", p[i]);

		  	for(j = i+1; j < i; j++);
		  	{
		  		p[i] = 0;

		  		if(p[i*j] = p[i] && p[i*j] < 10)
		  		{
		  			p[i] = p[i*j];
		  		
		  			//p[i] = p[j] ;
		  			printf(" %d ", p[i]);	
		  			

		  			
		  		}

		  		printf(" %d",p[j]);
		  	}
		  	
		  		
		   }  
		  	

		  		
		  	
		  	
		
				
		 
		 
		  
		  
		  	
		  return 0;
}	
