#include "../includes/function.h"

void	msg(void)
{
	yellow("==============================================");
	system("clear");
	green("\n=====------==> "); red("ZCASIMIR'S ATM");
	green(" <==-------======");
	green("\n=====---==>"); red("AUTOMATED TELLER MACHINE");
	green("<==---=====");
	green("\n===-==>"); red("THE AMOUNT IS BEYOND YOUR BALANCE"); green("<==-=="); 
	yellow("\n==============================================");
	yellow("\n==============================================");
	printf("\n");
	sleep(4);
}

void	account_info(t_user user)
{
	char	back[10];
	
	yellow("=================================================");
	system("clear");
	green("\n=====------====> "); red("ZCASIMIR'S ATM"); green(" <====-------=====");
	green("\n=====--===>"); red(" AUTOMATED TELLER  MACHINE "); green("<===--=====");
	green("\n=====-----===>"); red(" ACCOUNT INFORMATION "); green("<===-----=====");
	green("\n=====-----===>"); yellow("  DON'T SHARE THIS!  "); green("<===-----=====");
	yellow("\n=================================================");
	green("\n=====->>"); blue("ACCOUNT NUMBER:\t"); printf("\033[1;31m%06d", user.account);
	green("\n=====->>"); blue("BIC/SWIFT:\t"); red("SWNBFR22");
	green("\n=====->>"); blue("ACCOUNT NAME:\t"); red(user.name);
	green("\n=====->>"); blue("ACCOUNT PHONE:\t"); red(user.phone);
	green("\n=====->>"); blue("USERNAME:\t"); red(user.username);
	green("\n=====->>"); blue("COUNTRY:\t"); red("ANGOLA");
	green("\n=====->>"); blue("AGENCY:\t\t"); red("00100");
	green("\n=====->>"); blue("ADDRESS:\t"); red("AVENIDA ZCASIMIR");
	green("\n=====-----====>"); yellow(" KEEP YOUR DETAILS "); green("<====-----=====");
	green("\n=====-----====>"); yellow("       SAFE        "); green("<====-----=====");
	green("\n=====--====>"); yellow("   THANK YOU FOR USING   "); green("<====--=====");
	green("\n=====-----==> "); yellow("TYPE ANYTHING TO EXIT:\t");
	scanf("%s", back);
	yellow("=================================================");
	green("\n=======----======> "); yellow("GOOD LUCK!");
	green(" <======----========");
	green("\n=======----======> "); yellow("EXITING..."); 
	green(" <======----========");
	yellow("\n=================================================");
	printf("\n");
	sleep(3);
}

void	empty(char	*str)
{
	int	i = 5;
	
	while (str[++i])
		str[i] = '\0';
}

void	transfer(t_user *user)
{
	FILE	*fp;
	t_user	to_user;
	char	number[10];
	float	amount;
	int		is_correct = 0;
	int		tries = 3;
	char	option;
	char	account[100] = "../id/";
	
	while (tries)
	{
		yellow("==============================================");
		system("clear");
		green("\n=====------==> ");  red("ZCASIMIR'S ATM");
		green(" <==-------======");
		green("\n=====---==>"); red("AUTOMATED TELLER MACHINE");
		green("<==---=====");
		green("\n===--==>"); blue("ACCOUNT NUMBER:"); green("\t");
		scanf(" %s", number);
		strcat(account, number);
		fp = fopen(account, "r");
		if (fp)
		{	
			if (!fread(&to_user, sizeof(t_user), 1, fp))
			{
				error(0, "CANNOT READ USER INFO");
				printf("\n");
				fclose(fp);
				sleep(2);
				return ;
			}
			green("===--==>"); blue("ACCOUNT NAME:\t"); red(to_user.name);
			green("\n===---==> "); blue("PRESS <Y> OR <N>? [y/n]:\t");
			scanf(" %c", &option);
			if (option == 'Y' || option == 'y')
			{
				is_correct = 1;
				fclose(fp);
				break ;
			}
			fclose(fp);
		}
		else
		{
			tries -= 1;
			green("======----====>> "); printf("\033[1;33m%d", tries);
			yellow(" TRIES LEFT"); green(" <<====----======");
			green("\n===---==> "); red("< INVALID ACCOUNT NUMBER >");
			green(" <==---===");
			yellow("\n==============================================");
			printf("\n");
			sleep(2);
		}
		empty(account);
	}
	if (is_correct)
	{
		green("===---==>  "); blue("AMOUNT TO TRANSFER:\t");
		scanf("%f", &amount);
		green("===---==> "); blue("PRESS <Y> OR <N>? [y/n]:\t");
		scanf(" %c", &option);
		if (option != 'Y' && option != 'y')
		{
			green("===---==> "); red("TRANSFERATION CANCELLED!");
			printf("\n");
			sleep(2);
			return ;
		}
		if (user->balance < amount)
		{
			msg();
			return ;
		}
		user->balance -= amount;
		to_user.balance += amount;
		yellow("==============================================");
		green("\n=====-----===>"); yellow("TRANSACTION COMPLETE"); green("<===----====");
		green("\n=====--====>"); yellow("  THANK YOU FOR USING  "); green("<===--=====");
		yellow("\n==============================================");
		printf("\n");
		sleep(2);
		fp = fopen(account, "w");
		if (!fp)
		{
			error(0, "CANNOT TRANSFER THE MONEY 1");
			printf("\n");
			sleep(2);
			return;
		}
		if (!fwrite(&to_user, sizeof(t_user), 1, fp))
		{
			error(0, "CANNOT TRANSFER THE MONEY 2");
			printf("\n");
			fclose(fp);
			sleep(2);
			return ;
		}
		fclose(fp);
		return ;
	}
}
