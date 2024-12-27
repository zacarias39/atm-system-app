#include "../includes/function.h"

float	other_amount(t_user user)
{
	float	amount;
	
	yellow("==============================================");
	system("clear");
	green("\n=====------==> "); red("ZCASIMIR'S ATM");
	green(" <==-------======");
	green("\n=====---==>"); red("AUTOMATED TELLER MACHINE");
	green("<==---=====");
	green("\n=====---==>   "); red(user.name);
	green("\n=====-----==>"); yellow(" AMOUNT TO WITHDRAW ");
	green("<==-----=====");  
	yellow("\n==============================================");
	green("\n=====---==> "); blue("AMOUNT:\t");
	scanf("%f", &amount);
	if (user.balance < amount)
		return (amount);
	yellow("==============================================");
	green("\n=====-----===>"); yellow("TRANSACTION COMPLETE"); green("<===----====");
	green("\n=====--====>"); yellow("  THANK YOU FOR USING  "); green("<===--=====");
	printf("\n");
	sleep(3);
	return (amount);
}

float	select_amount(t_user user)
{
	int	option;
        
	option = 0;
	yellow("==============================================");
	system("clear");
	green("\n=====------==> "); red("ZCASIMIR'S ATM");
	green(" <==-------======");
	green("\n=====---==>"); red("AUTOMATED TELLER MACHINE");
	green("<==---=====");
	green("\n=====---==>   "); red(user.name);
	green("\n=====------==> "); yellow(" SELECT AMOUNT ");
	green(" <==-------=====");  
	yellow("\n==============================================");
	green("\n=="); red("[1]"); green("<<===");  blue("10.000KZ ");
	green("========= "); blue("5.000KZ"); green("===>>"); red("[2]"); green("==");
	green("\n=="); red("[3]"); green("<<==="); blue("25.000KZ "); green("========= ");
	blue("2.000KZ"); green("===>>"); red("[4]"); green("==");
	green("\n=="); red("[5]"); green("<<==="); blue("50.000KZ ");
	green("========= "); blue("  OTHER"); green("===>>"); red("[6]"); green("==");
	green("\n=="); red("[7]"); green("<==--==="); red("ANOTHER TRANSACTION");
	green("<==--===="); red("[7]"); green("==");
	green("\n====["); yellow("OPTION"); green("]:\t");
	scanf("%d", &option);
	yellow("==============================================");
	if (option == 1)
	{	
		green("\n====---==>"); yellow("SELECTED AMOUNT '10.000KZ'");
		green("<==---====");
		yellow("\n==============================================");
		printf("\n");
		sleep(3);
		return (10000);
	}
	else if (option == 2)
	{
		green("\n=====---==>"); yellow("SELECTED AMOUNT '5.000KZ'");
		green("<==---====");
		yellow("\n==============================================");
		printf("\n");
		sleep(3);
		return (5000);
	}
	else if (option == 3)
	{
		green("\n====---==>"); yellow("SELECTED AMOUNT '25.000KZ'");
		green("<==---====");
		yellow("\n==============================================");
		printf("\n");
		sleep(3);
		return (25000);
	}	
	else if (option == 4)
	{
		green("\n=====---==>"); yellow("SELECTED AMOUNT '2.000KZ'");
		green("<==---====");
		yellow("\n==============================================");
		printf("\n");
		sleep(3);
		return (2000);
	}	
	else if (option == 5)
	{
		green("\n====---==>"); yellow("SELECTED AMOUNT '50.000KZ'");
		green("<==---====");
		yellow("\n==============================================");
		printf("\n");
		sleep(3);
		return (50000);
	}
	else if (option == 6)
	{
		green("\n=======----====> "); yellow("BE CAREFUL!");
		green(" <====----========");
		green("\n=====---==> "); yellow("GOING TO 'OTHER AMOUNT'");
		green(" <==---====");
		yellow("\n==============================================");
		printf("\n");
		sleep(3);
		return (other_amount(user));
	}
	else if (option == 7)
	{
		green("\n========----====> "); yellow("GOOD LUCK!");
		green(" <====----========");
		green("\n========----====> "); yellow("EXITING..."); 
		green(" <====----========");
		yellow("\n==============================================");
		printf("\n");
		sleep(3);
		return (0.0);
	}
	return (0.0);
}

void	withdrawal(t_user *user)
{
	int	amount;

	amount = select_amount(*user);
	if (amount <= user->balance)
	{	user->balance -= amount;
	}
	else
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
		sleep(5);
	}
}
