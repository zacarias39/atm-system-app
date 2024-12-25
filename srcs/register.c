#include "../includes/function.h"

int	check_entries(t_user user, char *phone, char *username)
{
	if ((strlen(user.phone) <= 8 || strlen(user.phone) >= 10) || !str_isdigit(user.phone))
	{
		error(0, INVALID_PHONE);
		return (1);
	}
	if ((strlen(user.pin) <= 3 || strlen(user.pin) >= 5) || !str_isdigit(user.pin))
	{
		error(0, INVALID_PIN);
		return (1);
	}
	if (fopen(strcat(phone, ".dat"), "r"))
	{
		error(0, TAKEN_PHONE);
		return (1);
	}
	if (fopen(username, "r"))
	{
		error(0, TAKEN_USER);
		return (1);
	}
	return (0);
}

int	user_id(void)
{
	FILE	*fp;
	char	digit[11];
	char	*str;
	int		fp1;
	int		user_count;
	int		sucess = 1;
	
	fp = fopen(USER_ID, "rw");
	if (!fp)
	{
		error(1, " ACCOUNT ID");
		return -1;
	}
	sucess = fread(&digit, sizeof(char *), 10, fp);
	if (sucess != 0)
	{
		error(1, " ID TO ARRAY");
		return -1;
	}
	fclose(fp);
	user_count = atoi(digit) + 1;
	str = itoa(user_count);
	fp1 = open(USER_ID, O_RDWR);
	if (fp1 == -1)
	{
		error(1, " ID FILE UNREADABLE");
		return -1;
	}
	write(fp1, str, strlen(str));
	free(str);
	close(fp1);
	return (user_count);
}


void	register_new_user(void)
{
	t_user	user;
	FILE	*fp;
	char	phone[100] = "../phones/";
	char	username[100] = "../users/";
	char	link[200] = "ln ";
	char	option;
	
	
	yellow("=============================================");
	system("clear");
	green("\n=====------==> "); red("ZCASIMIR'S ATM");
	green(" <==-------=====");
	green("\n=====--==>"); red("AUTOMATED TELLER  MACHINE");
		green("<==--=====");
	green("\n=====-----==>"); red("REGISTER AN ACCOUNT"); green("<==-----=====");
	yellow("\n=============================================");
	green("\n==->"); blue("NAME:"); green("\t");
	scanf(" %[^\n]s", user.name);
	yellow("=============================================");
	green("\n==->"); blue("PHONE:"); green("\t");
	scanf("%s", user.phone);
	yellow("=============================================");
	green("\n==->"); blue("USERNAME:"); green("\t");
	scanf("%s", user.username);
	yellow("=============================================");
	green("\n==->"); blue("PIN:"); green("\t");
	scanf("%s", user.pin);
	yellow("=============================================");
	strcat(phone, user.phone);
	strcat(username, user.username);
	if (check_entries(user, phone, username))
	{
		printf("\n");
		sleep(3);
		return ;
	}
	fp = fopen(phone, "w");
	if (!fp)
	{
		error(1, " USER NOT CREATED");
		printf("\n");
		sleep(3);
		return ;
	}
	user.account = user_id();
	if (user.account == -1 || user.account == 0)
	{
		printf("\n");
		fclose(fp);
		sleep(3);
		return ;
	}	
	green("\n==->"); blue("ACCOUNT NUMBER:"); printf("\t\033[1;31m%06d", user.account);
	yellow("\n=============================================");
	user.balance = 0;
	green("\n==->"); blue("WANT TO MAKE A DEPOSIT? [y/n]:\t");
	scanf(" %c", &option);
	yellow("=============================================");
	if (option == 'Y' || option == 'y')
	{
		green("\n==->"); blue("AMOUNT:\t");
		scanf("%f", &user.balance);
		yellow("=============================================");
	}
	green("\n==->"); blue("BALANCE:"); printf("\t%.2f", user.balance);
	yellow("\n=============================================");
	if (!fwrite(&user, sizeof(t_user), 1, fp))
	{
		error(1, "USER NOT REGISTRATED");
		printf("\n");
		fclose(fp);
		sleep(3);
		return ;
	}
	else
	{
		blue("\nUSER REGISTRATED SUCESSFULLY! CODE: SUCESS.");
		yellow("\n=============================================");
		green("\n=======----====> "); yellow("EXITING..."); 
		green("<====----========");
		yellow("\n=============================================");
		printf("\n");
	}
	strcat(link, strcat(phone, " "));
	strcat(link, username);
	system(link);
	fclose(fp);
	sleep(3);
}
