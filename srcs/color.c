#include "../includes/function.h"

void	red(char *str)
{
	printf("\033[1;31m");
	printf("%s", str);
	printf("\033[0m");
}

void	blue(char *str)
{
	printf("\033[1;34m");
	printf("%s", str);
	printf("\033[0m");
}

void	green(char *str)
{
	printf("\033[1;32m");
	printf("%s", str);
	printf("\033[0m");
}

void	yellow (char *str)
{
	printf("\033[1;33m");
	printf("%s", str);
	printf("\033[0m");
}
