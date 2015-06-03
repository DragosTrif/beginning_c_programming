#include <stdio.h>

int main(void)
{
	int i, j;
	int   p[10];
	
		 
		  for( i = 2; i <= 10; i++)
		  {
		  	p[i] = i / i;
		  	//printf(" \n%d", p[i]);

		  	for(j = i+1; j <= 10; j++);
		  	{
		  		//i = 2;
		      	p[j] = j*0;
		  		p[j] = p[i*j] ;
		  		printf("%d", p[j]);
		  		
		  		//for(p[j] = p[i*j]; p[j] <= p[i];p[j]++)
		  		//{
		  		
		  			//p[i] = p[j] ;
		  			//printf("\n ");	
		  			//printf(" %d",p[j]);

		  			
		  		//}

		  		/*for(i = 2; i <= 10; i++)
		  		{
		  			if(p[i])
		  			{
		  				printf(" %d", p[i]);
		  			}
		  		}*/
		  	}
		  	
		  		
		   }  
		  	

		  		
		  	
		  	
		
				
		 
		 
		  
		  
		  	
		  return 0;
}	
