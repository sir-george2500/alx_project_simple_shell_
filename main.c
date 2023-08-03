#include "main.h"
/**
 * main - Entry point for the Gshell program.
 *
 * @argc: The number of command-line arguments (unused).
 * @argv: An array of pointers to command-line argument strings (unused).
 *
 * Return: 0 on successful execution, -1 on error.
 */
int main(int argc, char **argv)
{

char *prompt = "(Gshell) $";
char *lineptr = NULL, *lineptr_copy = NULL;
size_t n = 0;
ssize_t nchars_read;
const char *delim = " \n";
char *token;
int num_tokens = 0;

/* declaring void variables */
(void)argc;
(void)argv;

/*declaring a while infinite loop */
while (1)
{

	printf("%s", prompt);
	nchars_read = getline(&lineptr, &n, stdin);

	if (nchars_read == -1)
	{
		printf(" Exiting the shell ....\n");
		return (-1);
	}

	lineptr_copy = malloc(sizeof(char) * nchars_read);

	if (lineptr_copy == NULL)
	{
		perror("Memory allocation error");
		return (-1);
	}
	 /* copy lineptr to lineptr_copy */
	strcpy(lineptr_copy, lineptr);

	/****** split the string into a array of words(lineptr) *******/

	/*using strtok to calculate the total number of string */
	token = strtok(lineptr, delim);

	while (token != NULL)
	{
		num_tokens++;
		token = strtok(lineptr, delim);
	}
	num_tokens++;

	 /* Allocate space to hold the array of strings */
	token = strtok(lineptr_copy, delim);

	printf("%s\n", lineptr);
	/* free up allocated memory */
	free(lineptr);

}

return (0);
}
