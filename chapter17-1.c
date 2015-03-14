/*This program presents a menu of choiches (three difrent decades)
gets the users choiches and then presents a secondary menu (sport, entertaiment, politics)
When the users makes  his second choiche it prints info for that decade in the 3 categories */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int choiche1, choiche2;

	printf(" \n\nwath do want to see?\n");
	printf("1. the 1980's\n");
	printf("2. the 1990's\n");
	printf("3. the 2000'S\n");
	printf("4. Quit\n");
	do
	{
		printf("Wats your choiche\n");
		scanf(" %d", &choiche1);
		switch(choiche1)
		{
			case(1):
				{
					printf("\n\nWath would you like to see\n");
					printf("1. Sport\n");
					printf("2. Movies\n");
					printf("3. Politics\n");
					printf("4. Quit\n");

					printf(" Whats your choiche\n");
					scanf(" %d", &choiche2);

					if(choiche2 == 1)
					{
						printf("\n\n the world series of champion\n");
						printf(" of 1980 are :\n");
						printf("1980- New York\n");
						printf("1981-Dallas\n");
						printf("1982-Boston\n");
						break;
					}

					else if(choiche2 == 2)
					{
						printf("\n\n The oscars wining movies are\n");
						printf("1980-Platoon\n");
						printf("1981-out of africa\n");
						printf("1982-Chariots of fire\n");
						break;
					}

					else if(choiche2 == 3)
					{
						printf("\n\n The presidents of the 1980 are\n ");
						printf("1980-Carter\n");
						printf("1980-1988-Regan\n");
						printf("1988-1990-Bush\n");
						break;
					}

					else if(choiche2 == 4)
					{
						exit(1);
					}

					else
					{
						printf("This is not a valid choiche\n");
						break;
					}
			}		

			case(2):
				{
					printf("\n\nWath would you like to see\n");
					printf("1. Sport\n");
					printf("2. Movies\n");
					printf("3. Politics\n");
					printf("4. Quit\n");

					printf(" Whats your choiche\n");
					scanf(" %d", &choiche2);

					if(choiche2 == 1)
					{
						printf("\n\n the world series champions of\n");
						printf(" 1990 are:\n");
						printf(" 1990-Turda\n");
						printf(" 1991-Botosani\n");
						printf(" 1992-Cluj\n");
					}

					else if(choiche2 == 2)
					{
						printf("\n\n the oscar movies of the\n ");
						printf(" 1990 are:\n");
						printf(" 1991-Amantul\n");
						printf(" 1992-Alien\n");
						break;
					}

					else if(choiche2 == 3)
					{
						printf("\n\n the president of Romania\n ");
						printf(" in 1990's were:\n");
						printf("1990-92 Iliescu\n");
						printf("1992-1996 Constantinescu\n");
						printf("1996-2000 iliescu\n");
						break;
					}

					else if(choiche2 == 4)
					{
						exit(2);
					}

					else
					{
						printf(" This is not a valid choiche\n");
						break;
					}
			}		
			case(3):
				{
					printf("\n\nWath would you like to see\n");
					printf("1. Sport\n");	
					printf("2. Movies\n");
					printf("3. Politics\n");
					printf("4. Quit\n");

					printf(" Whats your choiche\n");
					scanf(" %d", &choiche2);

					if(choiche2 == 1)
					{
						printf("\n\n The world chapmpios of\n ");
						printf(" the 2000's are:\n");
						printf("2004-Real Madrid\n");
						printf("2005 Paris Saint Geramin\n");
						printf("2015 Steau Bucuresti\n");
						break;
					}

					else if(choiche2 == 2)
					{
						printf("\n\n the oscar movies of the ");
						printf(" the 2000 are:\n");
						printf("2001 The tainted vail\n ");
						printf("2004 Gladiator\n");
						printf("2005 Troia\n");
						break;
					}

					else if(choiche2 == 3)
					{
						printf("\n\n the president of Romania\n ");
						printf(" in the 2000 where:\n");
						printf("2000-2004 Iliescu\n");
						printf("2004-2015 Basescu\n");
						break;
					}

					else if(choiche2 == 4)
					{
						exit(3);
					}

					else
					{
						printf(" Thats not a valid choiche\n");
						break;
					}
			}
					
			case(4):
				exit(1);		
				default: printf("\n %d is not avalid choiche.\n", choiche1);
						 printf("Try again\n");
						 break;
		}		
	}
	while((choiche1 < 0 ) || (choiche1 > 5)); 
	return 0;	
}