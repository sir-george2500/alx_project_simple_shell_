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
char *lineptr;
size_t n = 0;
ssize_t nchars_read;

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

	printf("%s\n", lineptr);
	 /* free up allocated memory */
	free(lineptr);
}

return (0);
}
