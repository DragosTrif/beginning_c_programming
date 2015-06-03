#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct entery
{
	char word[15];
	char definition[50];
};

int lookUp(const struct entery dictionary[], const char search[], const int enteries[])
{
	int i;
	//bool equalStrings(const char s1[], const char s2[]);

	for( i = 0; i < enteries; ++i)
	{
		if( strcmp(search, dictionary[i].word) == 0)
		{
			return i;
		}
	}

	return -1;
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

	char word[10];
	int enteries = 10;
	int entery;
	int lookUp(const struct entery dictionary[], const char search[], const int enteries[]);

	printf("Enter word\n");
	scanf("%14s", word);
	entery = lookUp(dictionary, word, enteries);

	if( entery != -1)
	{
		printf("%s\n", dictionary[entery].definition);
	}
	else
	{
		printf("Sorry the word in not in the dictionary\n");
	}

	return 0;
}	
