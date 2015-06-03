#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct entery
{
	char word[15];
	char definition[50];
};

int lookUp(const struct entery dictionary[], const char search[], const int entries)
{
	int low = 0;
	int high = entries - 1;
	int mid, result;
	int compareStrings(const char s1[], const char s2[]);



	while(low <= high)
	{
		mid = (low + high) / 2;
		//printf(" %d\n", mid);

		result = strcmp(dictionary[mid].word, search);


	if( result < 0)
		{
			low = mid + 1;
		}
		else if( result > 0)
		{
			high = mid - 1;
			
		}
		else
		{
			return mid;  // found it
		}


	}


	return -1; // not found

}



int main(void)
{
	const struct entery dictionary[100] =
	{
		{"aardvark", "a borowing african mammal"      },
		{"abyss", "a botomlees pit"                   },
		{"acumen", "mentaly sharp; keen"              },
		{"addle", "to become confused"                },
		{"aerie", "high nest"                         },
		{"affix", "to append; attach"                 },
		{"agar", "a jely made from seawed"            },
		{"ahoy", "a nautical call for greteeing"      },
		{"aigrete", "an ornamenta cluster of feathers"},
		{"ajar", "partial opend"                      }

	};

	char word[15];
	int enteries = 10;
	int entery;
	int lookUp(const struct entery dictionary[], const char search[], const int enteries);

	printf("Enter word\n");
	scanf("%14s", word);
	entery = lookUp(dictionary, word, enteries);
	

	if( entery != -1)
	{
		printf("%s\n", dictionary[entery].definition);
	}
	else
	{
		printf("Sorry the word %s in not in the dictionary\n", word);
	}

	return 0;
}	
