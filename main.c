#include "main.h"

int main(int argc, char **argv)
{
char *prompt = "(Gshell) $";
char *lineptr;
size_t n = 0;

/* declaring void variables */
(void)argc;
(void)argv;
printf("%s", prompt);
getline(&lineptr, &n, stdin);
printf("%s\n", lineptr);
free(lineptr);

return (0);
}
