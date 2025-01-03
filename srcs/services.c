#include "../includes/function.h"

void	change_pin(t_user *user)
{
	char	pin[8];
	int		is_correct = 0;
	int		tries = 3;
	
	while (tries)
	{
		yellow("==============================================");
		system("clear");
		green("\n=====------==> ");  red("ZCASIMIR'S ATM");
		green(" <==-------======");
		green("\n=====---==>"); red("AUTOMATED TELLER MACHINE");
		green("<==---=====");
		green("\n=====------==> "); blue("ENTER OLD PIN:"); green("\t");
		scanf(" %s", pin);
		if (strcmp(user->pin, pin) == 0)
		{
			is_correct = 1;
			break ;
		}
		else
		{
			tries -= 1;
			green("\n======----====>> "); printf("\033[1;33m%d", tries);
			yellow(" TRIES LEFT"); green(" <<====----======");
			green("\n===---==> "); red("<<THE PIN IS NOT CORRECT>>");
			green(" <==---===");
			yellow("\n==============================================");
			printf("\n");
			sleep(2);
		}
	}
	if (is_correct)
	{
		green("=====------==> "); blue("ENTER NEW PIN:"); green("\t");
		scanf(" %s", user->pin);
		green("=====--===>"); yellow("   THANK YOU FOR USING  "); green("<===--=====");
		yellow("\n==============================================");
		green("\n=======----====> "); yellow("EXITING..."); 
		green(" <=====----========");
		yellow("\n==============================================");
		printf("\n");
		sleep(2);
		return ;
	}
	main();
}

void	atm_services(t_user *user)
{
	int	option;

	option = 0;
	while (option != 7)
	{
		yellow("==============================================");
		system("clear");
		green("\n=====------==> ");  red("ZCASIMIR'S ATM");
		green(" <==-------======");
		green("\n=====---==>"); red("AUTOMATED TELLER MACHINE");
		green("<==---=====");
		green("\n=====---==>   "); red(toUpperCase(user->name));
		green("\n=====---==>"); red(" SELECT THE TRANSACTION ");
		green("<==---=====");  
		yellow("\n==============================================");
		green("\n=="); red("[1]"); green("<<== "); blue("ACCOUNT INFO");
		green(" ==== "); blue("BALANCE"); green("  ==>>"); red("[2]"); green("==");
		green("\n=="); red("[3]"); green("<<==  "); blue("WITHDRAWAL"); green("  ==== ");
		blue("DEPOSIT"); green("  ==>>"); red("[4]"); green("==");
		green("\n=="); red("[5]"); green("<<==  "); blue("PIN CHANGE");
		green("  ==== "); blue("TRANSFER"); green(" ==>>"); red("[6]"); green("==");
		green("\n=="); red("[7]"); green("=========---====> "); red("EXIT");
		green(" <====---====="); red("[7]"); green("==");
		green("\n====["); yellow("OPTION"); green("]:\t");
		scanf("%d", &option);
		yellow("==============================================");		
		if (option == 1)
		{
			green("\n========----====> "); yellow("BE CAREFUL!");
			green(" <====----=======");
			green("\n====---==> "); yellow("GOING TO 'ACCOUNT INFO'");
			green(" <==---====");
			yellow("\n==============================================");
			printf("\n");
			sleep(1);
			account_info(*user);
		}
		else if (option == 2)
		{
			green("\n========----====> "); yellow("BE CAREFUL!");
			green(" <====----=======");
			green("\n====--==> "); yellow("GOING TO 'VERIFY BALANCE' ");
			green(" <==--====");
			yellow("\n==============================================");
			printf("\n");
			sleep(1);
			balance(*user);
		}
		else if (option == 3)
		{
			green("\n========----====> "); yellow("BE CAREFUL!");
			green(" <====----=======");
			green("\n====--==> "); yellow("GOING TO 'WITHRAWAL MONEY'");
			green(" <==--====");
			yellow("\n==============================================");
			printf("\n");
			sleep(1);
			withdrawal(user);
		}
		else if (option == 4)
		{
			green("\n========----====> "); yellow("BE CAREFUL!");
			green(" <====----=======");
			green("\n====---==> "); yellow("GOING TO 'DEPOSIT MONEY'");
			green(" <==---====");
			yellow("\n==============================================");
			printf("\n");
			sleep(1);
			deposit(user);
		}
		else if (option == 5)
		{
			green("\n========----====> "); yellow("BE CAREFUL!");
			green(" <====----=======");
			green("\n=====---==> "); yellow("GOING TO 'PIN CHANGE'.");
			green(" <==---=====");
			yellow("\n==============================================");
			printf("\n");
			sleep(1);
			change_pin(user);
		}
		else if (option == 6)
		{
			green("\n========----====> "); yellow("BE CAREFUL!");
			green(" <====----=======");
			green("\n====--==> "); yellow("GOING TO 'WITHRAWAL MONEY'");
			green(" <==--====");
			yellow("\n==============================================");
			printf("\n");
			sleep(1);
			withdrawal(user);
		}
		else if (option == 7)
		{
			green("\n=====--===>"); yellow("   THANK YOU FOR USING  "); green("<===--=====");
			yellow("\n==============================================");
			green("\n=======----====> "); yellow("GOOD LUCK!");
			green(" <=====----========");
			green("\n=======----====> "); yellow("EXITING..."); 
			green(" <=====----========");
			yellow("\n==============================================");
			printf("\n");
		}
		else
		{
			printf("\n");
			continue ;
		}
	}
}
