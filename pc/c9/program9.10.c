// Modifing the Dictionary program using the binary search

#include <stdio.h>

struct entery
{
	char word[15];
	char definition[50];
};

// Function to compare two chracter strings

int compareStrings(const char s1[], const char s2[])
{
	int i = 0, answer;

	while( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{

		++i;

	}


	if( s1[i] < s2[i])
		{
			answer = -1;
		}
		else if( s1[i] == s2[i])
		{
			answer = 0;
		}
		else
		{
			answer = 1;
		}

	

	return answer;
}

// Function to look up a word inside a dictionary

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

		result = compareStrings(dictionary[mid].word, search);


	if( result == -1)
		{
			low = mid + 1;
		}
		else if( result == 1)
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
