#include "../includes/function.h"

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
	green("\n=====->>"); blue("ACCOUNT NAME:\t"); red(user.name);
	green("\n=====->>"); blue("ACCOUNT PHONE:\t"); red(user.phone);
	green("\n=====->>"); blue(" USERNAME:\t"); red(user.username);
	green("\n=====-----====>"); yellow(" KEEP YOUR DETAILS "); green("<====-----=====");
	green("\n=====-----====>"); yellow("       SAFE        "); green("<====-----=====");
	green("\n=====--====>"); yellow("   THANK YOU FOR USING   "); green("<====--=====");
	green("\n=====-----==> "); yellow("TYPE ANYTHING TO EXIT:\t");
	scanf("%s", back);
	yellow("\n=================================================");
	green("\n=======----======> "); yellow("GOOD LUCK!");
	green(" <======----========");
	green("\n=======----======> "); yellow("EXITING..."); 
	green(" <======----========");
	yellow("\n=================================================");
	printf("\n");
	sleep(3);
}