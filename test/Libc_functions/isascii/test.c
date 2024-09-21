#include <stdio.h>   
#include <string.h>
#include <ctype.h>
#include "../../../src/libft.h"

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"
#define YELLOW "\033[0;33m"
#define HEAVENLY "\033[0;36m"
#define PERPUL "\033[0;35m"

int test0()
{
	printf(YELLOW "==============================================\n" RESET);	
	printf(YELLOW "=                 ft_isascii                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 0 !!\n");
	int test = -1;
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY " %d (in intger form)\n" RESET, test);
	int res = isascii(test) != 0 ;
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %d\n" RESET, res);
	int y_res = ft_isascii(test) != 0; 
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %d\n\n" RESET, y_res);
	if (y_res == res)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	return (0);
}


int test1()
{
	printf(YELLOW "==============================================\n" RESET);	
	printf(YELLOW "=                 ft_isascii                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 1 !!\n");
	int test = 200;
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY " %d (in intger form) \n" RESET, test);
	int res = isascii(test) != 0;
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %d\n" RESET, res);
	int y_res = ft_isascii(test) != 0;
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %d\n\n" RESET, y_res);
	if (y_res == res)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	return (0);
}

int test2()
{
	printf(YELLOW "==============================================\n" RESET);	
	printf(YELLOW "=                 ft_isascii                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 2 !!\n");
	int test = 127;
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY " %d (in intger form) \n" RESET, test);
	int res = isascii(test) != 0;
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %d\n" RESET, res);
	int y_res = ft_isascii(test) != 0;
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %d\n\n" RESET, y_res);
	if (y_res == res)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	return (0);
}
int test3()
{
	printf(YELLOW "==============================================\n" RESET);	
	printf(YELLOW "=                 ft_isascii                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 3 !!\n");
	int test = 128;
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY " %d (in intger form) \n" RESET, test);
	int res = isascii(test) != 0;
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %d\n" RESET, res);
	int y_res = ft_isascii(test) != 0;
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %d\n\n" RESET, y_res);
	if (y_res == res)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	return (0);
}
int test4()
{
	printf(YELLOW "==============================================\n" RESET);	
	printf(YELLOW "=                 ft_isascii                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 4 !!\n");
	int test = 0;
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY " %d (in intger form)\n" RESET, test);
	int res = isascii(test) != 0;
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %d\n" RESET, res);
	int y_res = ft_isascii(test) != 0;
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %d\n\n" RESET, y_res);
	if (y_res == res)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	return (0);
}
int test5()
{
	printf(YELLOW "==============================================\n" RESET);	
	printf(YELLOW "=                 ft_isascii                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 5 !!\n");
	int test = 4000;
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY " %d (in intger form)\n" RESET, test);
	int res = isascii(test) != 0;
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %d\n" RESET, res);
	int y_res = ft_isascii(test) != 0;
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %d\n\n" RESET, y_res);
	if (y_res == res)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	return (0);
}

int main()
{
	int c;
	c = 0;
	int t0 = test0();
	sleep(1);
	int t1 = test1();
	sleep(1);
	int t2 = test2();
	sleep(1);
	int t3 = test3();
	sleep(1);
	int t4 = test4();
	sleep(1);
	int t5 = test5();
	sleep(1);
	c = t0 + t1 + t2 + t3 + t4 + t5;
	printf(PERPUL "==============================================\n" RESET);
	if (c == 6)
	{
		printf(GREEN "THE RESULTE IS : [%d/6]\n",c);
		printf("CONGRATULATIONS, YOU HAVE PASSED ALL THE TESTS.\n" RESET);
	}
	else
	{
		printf(RED "THE RESULTE IS : [%d/6]\n",c);
		printf("UNFORTUNATELY, YOUR FUNCTION DID NOT MEET ALL THE TESTS. TRY AGAIN.\n" RESET);
	}
	printf(HEAVENLY "ALL TEST : " RESET);
	((t0 == 0)? printf(RED "TEST0" RESET " , ") : printf(GREEN "TEST0" RESET " , "));
	((t1 == 0)? printf(RED "TEST1" RESET " , ") : printf(GREEN "TEST1" RESET " , "));
	((t2 == 0)? printf(RED "TEST2" RESET " , ") : printf(GREEN "TEST2" RESET " , "));
	((t3 == 0)? printf(RED "TEST3" RESET " , ") : printf(GREEN "TEST3" RESET " , "));
	((t4 == 0)? printf(RED "TEST4" RESET " , ") : printf(GREEN "TEST4" RESET " , "));
	((t5 == 0)? printf(RED "TEST5" RESET ".\n") : printf(GREEN "TEST5" RESET ".\n"));
	printf(PERPUL "==============================================\n\n" RESET);
}
