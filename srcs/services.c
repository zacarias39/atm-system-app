#include "../includes/function.h"

void	atm_services(t_user user)
{
	int	option;

	option = 0;
	while (option != 7)
	{
		yellow("==============================================");
		system("clear");
		green("\n=====------==> "); red("ZCASIMIR'S ATM");
		green(" <==-------======");
		green("\n=====---==>"); red("AUTOMATED TELLER MACHINE");
		green("<==---=====");
		green("\n=====---==>   "); red(toUpperCase(user.name));
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
			green("\n========----====> "); yellow("LOOK OUT!");
			green(" <====----========");
			green("\n====---==> "); yellow("GOING TO 'ACCOUNT INFO'");
			green(" <==---====");
			yellow("\n=================================================");
			printf("\n");
			sleep(2);
			account_info(user);
		}
		else if (option == 2)
		{
			green("\n=======----====> "); yellow("BE CAREFUL!");
			green(" <====----=======");
			green("\n===--==> "); yellow("GOING TO 'VERIFY BALANCE' ");
			green(" <==--====");
			yellow("\n=================================================");
			printf("\n");
			sleep(2);
			balance(user);
		}
		else if (option == 3)
		{
			green("\n=======----====> "); yellow("BE CAREFUL!");
			green(" <====----=======");
			green("\n====--==> "); yellow("GOING TO 'WITHRAWAL MONEY'");
			green(" <==--====");
			yellow("\n=================================================");
			printf("\n");
			sleep(2);
			withdrawal(&user);
		}
		else if (option == 4)
		{
			green("\n=======----====> "); yellow("BE CAREFUL!");
			green(" <====----=======");
			green("\n====--==> "); yellow("GOING TO 'WITHRAWAL MONEY'");
			green(" <==--====");
			yellow("\n=================================================");
			printf("\n");
			sleep(2);
			withdrawal(&user);
		}
		else if (option == 5)
		{
			green("\n=======----====> "); yellow("BE CAREFUL!");
			green(" <====----=======");
			green("\n====--==> "); yellow("GOING TO 'WITHRAWAL MONEY'");
			green(" <==--====");
			yellow("\n=================================================");
			printf("\n");
			sleep(2);
			withdrawal(&user);
		}
		else if (option == 6)
		{
			green("\n=======----====> "); yellow("BE CAREFUL!");
			green(" <====----=======");
			green("\n====--==> "); yellow("GOING TO 'WITHRAWAL MONEY'");
			green(" <==--====");
			yellow("\n=================================================");
			printf("\n");
			sleep(2);
			withdrawal(&user);
		}
		else if (option == 7)
		{
			green("\n=====--====>"); yellow("   THANK YOU FOR USING   "); green("<====--=====");
			yellow("\n=================================================");
			green("\n=======----======> "); yellow("GOOD LUCK!");
			green(" <======----========");
			green("\n=======----======> "); yellow("EXITING..."); 
			green(" <======----========");
			yellow("\n=================================================");
			printf("\n");
			sleep(2);
		}
	}
}
