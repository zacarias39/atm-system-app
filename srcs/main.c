#include "../includes/function.h"

int	main(void)
{
	int	option;

	option = 0;
	while (option != 3)
	{
		system("clear");
		yellow("=============================================");
		green("\n=====------==> "); red("ZCASIMIR'S ATM"); green(" <==-------=====");
		green("\n=====--==>"); red("AUTOMATED TELLER  MACHINE"); green("<==--====="); 
		yellow("\n=============================================");
		green("\n===="); red("[1]"); green("=====---==> "); blue("LOGIN"); 
		green(" <===---======"); red("[1]"); green("====");
		yellow("\n=============================================");
		green("\n===="); red("[2]"); green("==--==> "); blue("REGISTER A USER");
		green(" <==--=="); red("[2]"); green("====");
		yellow("\n=============================================");
		green("\n===="); red("[3]"); green("=====---===> "); red("EXIT");
		green(" <===---======"); red("[3]"); green("====");
		yellow("\n=============================================");
		green("\n====["); yellow("OPTION"); green("]:\t");
		scanf("%d", &option);
		yellow("=============================================");		
		if (option == 1)
		{
			green("\n========----====> "); yellow("LOOK OUT!"); 
			green(" <====----========");
			green("\n===----====>> "); yellow("GOING TO 'LOGIN'"); 
			green(" <<====----====");
			yellow("\n=============================================");
			printf("\n");
			sleep(1);
			login();
		}
		else if (option == 2)
		{
			green("\n=======----====> "); yellow("BE CAREFUL!");
			green(" <====----=======");
			green("\n===--==> "); yellow("GOING TO 'REGISTER A USER'");
			green(" <==--====");
			yellow("\n=============================================");
			printf("\n");
			sleep(1);
			register_new_user();
		}
		else if (option == 3)
		{
			green("\n=======----====> "); yellow("GOOD LUCK!");
			green(" <====----========");
			green("\n=======----====> "); yellow("EXITING..."); 
			green(" <====----========");
			yellow("\n=============================================");
			printf("\n");
			sleep(1);
		}
	}
	exit(0);
}
