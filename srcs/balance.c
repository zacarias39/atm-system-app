#include "../includes/function.h"

void	balance(t_user user)
{
	char	back[10];

	yellow("=================================================");
	system("clear");
	green("\n=====------====> "); red("ZCASIMIR'S ATM"); green(" <====-------=====");
	green("\n=====--===>"); red(" AUTOMATED TELLER  MACHINE "); green("<===--=====");
	green("\n=====-----===>"); red("  BALANCE INQUERING  "); green("<===-----=====");
        green("\n=====-----===>"); yellow(" VERIFY YOUR BALANCE "); green("<===-----=====");
	yellow("\n=================================================");
	green("\n=====->>"); blue("ACCOUNT NUMBER:\t\t"); printf("\033[1;31m%06d", user.account);
	green("\n=====->>"); blue("ACCOUNT BALANCE:\t"); printf("\033[1;31m%.2f", user.balance);
	yellow("KZ");
	yellow("\n=================================================");
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
