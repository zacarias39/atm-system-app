#ifndef FUNCTION_H
# define FUNCTION_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>
# include <errno.h>
# include <fcntl.h>

# define USER_ID "../id/user_count.txt"
# define INVALID_PHONE "PHONE MUST CONTAIN 9 DIGITS"
# define INVALID_PIN "PIN MUST CONTAIN 4 DIGITS"
# define TAKEN_PHONE "USER ALREADY EXIST! CODE: PHONE NUMBER"
# define TAKEN_USER "USER ALREADY EXIST! CODE: USERNAME"

typedef struct s_user
{
	char	name[200];
	char	phone[20];
	char	username[20];
	char	pin[8];
	float	balance;
	int		account;
}	t_user;

void	yellow(char *str);
void	green(char *str);
void	blue(char *str);
void	red(char *str);
void	ft_scanf(char *format, ...);
char	*itoa(int nb);
char	*toUpperCase(char *string);
char	*ft_strcat(char *dest, char *src);
void	error(int display, char *str);
void	register_new_user(void);
void	login(void);
void	atm_services(t_user *user);
void	account_info(t_user user);
void	balance(t_user user);
void	deposit(t_user *user);
void	withdrawal(t_user *user);
int		str_isdigit(char *str);

#endif
