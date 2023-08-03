#include "main.h"

int main(int argc, char **argv)
{

char *prompt = "(Gshell) $";
char *lineptr;
size_t n = 0;

/* declaring void variables */
(void)argc;
(void)argv;

/*declaring a while infinite loop */
while (1)
{

	printf("%s", prompt);
	getline(&lineptr, &n, stdin);

	printf("%s\n", lineptr);
	 /* free up allocated memory */
	free(lineptr);
}

return (0);
}
