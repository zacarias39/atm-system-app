#include "../includes/function.h"

void	login(void)
{
	t_user	login;
	FILE	*fp;
	char	user[100];
	char	user_name_phone[50];
	char	pin[8];
	int		tries = 3;
	int		is_correct = 0;
	
	while (tries)
	{
		yellow("=============================================");
		system("clear");
		green("\n=====------==> "); red("ZCASIMIR'S ATM");
		green(" <==-------=====");
		green("\n=====--==>"); red("AUTOMATED TELLER  MACHINE");
		green("<==--=====");
		green("\n=====-----==>"); red("LOGIN TO AN ACCOUNT"); green("<==-----=====");
		yellow("\n=============================================");
		green("\n==->"); blue("USERNAME OR PHONE:"); green("\t");
		scanf(" %s", user_name_phone);
		yellow("=============================================");
		green("\n=====-----=====>"); blue("PIN:"); green("\t");
		scanf(" %s", pin);
		yellow("=============================================");
		if (str_isdigit(user_name_phone))
		{
			strcpy(user, "../phones/");
			strcat(user, user_name_phone);
			strcat(user, ".dat");
		}
		else
		{
			strcpy(user, "../users/");
			strcat(user, user_name_phone);
		}
		fp = fopen(user, "r");
		if (!fp)
		{
			error(0, " USER NOT FOUND");
			tries -= 1;
			printf("\n");
			sleep(3);
			continue;
		}
		if (!fread(&login, sizeof(t_user), 1, fp))
		{
			tries -= 1;
			error(0, " CANNOT READ USER INFO");
			printf("\n");
			fclose(fp);
			sleep(3);
			continue;
		}
		if (strcmp(login.pin, pin) == 0)
		{
			is_correct = 1;
			green("\n=======----====> "); yellow("...LOGIN...");
			green(" <====----=======");
			green("\n===--==> "); yellow("GOING TO 'ATM SERVICES PAGE");
			green(" <==--===");
			yellow("\n=============================================");
			printf("\n");
			sleep(1);
			fclose(fp);
			break ;
		}
		else
		{
			tries -= 1;
			green("\n======----====> "); printf("\033[1;33m%d", tries);
			yellow(" TRIES LEFT"); green(" <====----======");
			green("\n====--==> "); red("<<THE PIN IS NOT CORRECT!>>");
			green(" <==--===");
			yellow("\n=============================================");
			printf("\n");
			fclose(fp);
			sleep(2);
		}
	}
	if (is_correct)
	{
		strcpy(user, "../phones/");
		strcat(user, login.phone);
		strcat(user, ".dat");
		fp = fopen(user, "w");
		if (!fp)
		{
			error(0, "USER ALTERATION NOT SAVED");
			printf("\n");
			fclose(fp);
			sleep(3);
			return ;
		}
		atm_services(&login);
		if (!fwrite(&login, sizeof(t_user), 1, fp))
		{
			error(0, "USER ALTERATION NOT SAVED");
			printf("\n");
			fclose(fp);
			sleep(3);
			return ;
		}
		fclose(fp);
	}
	sleep(1);
}
