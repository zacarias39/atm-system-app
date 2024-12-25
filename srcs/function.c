#include "../includes/function.h"

char	*toUpperCase(char *string)
{
	char	*str;

	str = string;
	while (*string)
	{
    		if (*string >= 'a' && *string <= 'z') 
			*string = *string - 32;
		string++;
	}
	return (str);
}

void	error(int display, char *str)
{
	if (display == 1)
		red("\nUSER REGISTRATION FAILED! CODE: ");
	else
		green("\n==->"); 
	red(str); red(".");
	yellow("\n=============================================");
	yellow("\n=============================================");
}

int	str_isdigit(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	nblen(int nb)
{
	int	i;
	
	i = 0;
	while (nb > 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

char	*itoa(int nb)
{
	char	*str;
	int	len;
	
	len = nblen(nb);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (nb > 0)
	{
		str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
