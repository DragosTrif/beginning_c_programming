#include <stdio.h>

int main(void)
{
	int i, j;
	int   p[10];
	
		 
		  for( i = 2; i <= 10; i++)
		  {
		  	p[i] =  0;
		  	printf(" \n%d", p[i]);

		  	for(j = i+1; j <= 10; j++);
		  	{
		  		

		  		p[j] = p[j*i];

		  		if(p[j] <= 10 )
		  		{	
		      		p[j] = 1; 
		      		 
		     		 printf(" %d\n" ,p[j]);
		     	} 

		  	
		 
		  	}
		  	
		  		
		   }  
		  	

		  		
		  	
		  	
		
				
		 
		 
		  
		  
		  	
		  return 0;
}	
