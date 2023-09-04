#include "main.h"
/**
 * countWords - counts num of words in a string
 * @str: string
 * Return: num of words
 */
int countWords(char *str)
{
	int i = 0, words = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}
/**
 * free_all - frees an array of words
 * @words: array of words
 * @num_of_words: number of words
 * Return: void
 */
void free_all(char **words, int num_of_words)
{
	int i;

	for (i = 0; i < num_of_words; i++)
		free(words[i]);
	free(words);
}

/**
* strtow - split string to array of words
* @str: string to be split
* Return: array of words (strings)
*/

char **strtow(char *str)
{
	char **out;
	char *word;
	int i = 0, words = 0, count = 0, start = 0, end, j;

	words = countWords(str);
	if (words == 0)
		return (NULL);
	out = malloc(sizeof(char *) * (words + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || !str[i + 1]))
		{ /* last char of a word */
			end = i + 1;
			word = malloc(sizeof(char) * (end - start + 1));
			if (!word)
			{
				free_all(out, count);
				return (NULL);
			}
			for (j = 0; j < end - start; j++)
				word[j] = str[start + j];
			word[j] = '\0';
			out[count] = word;
			count++;
		}
		else if (str[i] != ' ' && str[i + 1] != ' ')
		{ /* inside a word */
			i++;
			continue;
		}
		else /* searching for a word begining aka s[i] == ' ' && s[i+1] != ' ' */
			start = i + 1;
		i++;
	}
	return (out);
}
