#include "../includes/function.h"

void	deposit(t_user *user)
{
	float	amount;
	
	yellow("==============================================");
	system("clear");
	green("\n=====------==> "); red("ZCASIMIR'S ATM");
	green(" <==-------======");
	green("\n=====---==>"); red("AUTOMATED TELLER MACHINE");
	green("<==---=====");
	green("\n=====---==>   "); red(user->name);
	green("\n=====-----==>"); yellow("  INSERT YOUR CASH  ");
	green("<==-----=====");  
	yellow("\n==============================================");
	green("\n=====---==> "); blue("AMOUNT:\t");
	scanf("%f", &amount);
	user->balance += amount;
	yellow("==============================================");
	green("\n=====-----===>"); yellow("TRANSACTION COMPLETE"); green("<===----====");
	green("\n=====--====>"); yellow("  THANK YOU FOR USING  "); green("<===--=====");
	yellow("\n==============================================");
	printf("\n");
	sleep(2);
}
