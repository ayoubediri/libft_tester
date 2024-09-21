#include <stdio.h>   
#include <string.h>
#include <ctype.h>
#include <string.h>
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
	printf(YELLOW "=                  ft_strrchr                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 0 !!\n");
	char *test_a = "145648132148456325615131234";
	char test_b = '5';
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY "str : [%s]  | to_find : [%c]\n" RESET, test_a, test_b);
	char *res = strrchr(test_a, test_b) ;
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strrchr(test_a, test_b); 
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strrchr                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 1 !!\n");
	char *test_a = "10234";
	char test_b = '1';
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY "str : [%s]  | to_find : [%c]\n" RESET, test_a, test_b);
	char *res = strrchr(test_a, test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strrchr(test_a, test_b);
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strrchr                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 2 !!\n");
	char *test_a = "1234";
	char test_b = '0';
	printf("[+] WATH WE HAVE :");
	printf(HEAVENLY "str : [%s]  | to_find : [%c]\n" RESET, test_a, test_b);
	char *res = strrchr(test_a, test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strrchr(test_a, test_b);
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strrchr                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 3 !!\n");
	char *test_a = "1234";
	char test_b = '\0';
	printf("[+] WATH WE HAVE :");
	printf(HEAVENLY "str : [%s]  | to_find : [%c]\n" RESET, test_a, test_b);
	char *res = strrchr(test_a, test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strrchr(test_a, test_b);
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strrchr                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 4 !!\n");
	char *test_a = "abdefg";
	char test_b = '5';
	printf("[+] WATH WE HAVE :");
	printf(HEAVENLY "str : [%s]  | to_find : [%c]\n" RESET, test_a, test_b);
	char *res = strrchr(test_a, test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strrchr(test_a, test_b);
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strrchr                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 5 !!\n");
	char *test_a = "he what are u doing *-*";
	char test_b = ' ';
	printf("[+] WATH WE HAVE :");
	printf(HEAVENLY "str : [%s]  | to_find : [%c]\n" RESET, test_a, test_b);
	char *res = strrchr(test_a, test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strrchr(test_a, test_b);
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	return (0);
}

int test6()
{
	printf(YELLOW "==============================================\n" RESET);	
	printf(YELLOW "=                  ft_strrchr                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 6 !!\n");
	char *test_a = "good work bro !!";
	char test_b = 'w';
	printf("[+] WATH WE HAVE :");
	printf(HEAVENLY "str : [%s]  | to_find : [%c]\n" RESET, test_a, test_b);
	char *res = strrchr(test_a, test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strrchr(test_a, test_b);
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	return (0);
}

int test7()
{
	printf(YELLOW "==============================================\n" RESET);	
	printf(YELLOW "=                  ft_strrchr                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 7 !!\n");
	char *test_a = "hi good\x4programmer";
	char test_b = '\x4';
	printf("[+] WATH WE HAVE :");
	printf(HEAVENLY "str : [%s]  | to_find : [%c]\n" RESET, test_a, test_b);
	char *res = strrchr(test_a, test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strrchr(test_a, test_b);
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	return (0);
}

int test8()
{
	printf(YELLOW "==============================================\n" RESET);	
	printf(YELLOW "=                  ft_strrchr                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 8 !!\n");
	char *test_a = "121314a115a1167da15zad819";
	char test_b = 'a';
	printf("[+] WATH WE HAVE :");
	printf(HEAVENLY "str : [%s]  | to_find : [%c]\n" RESET, test_a, test_b);
	char *res = strrchr(test_a, test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strrchr(test_a, test_b);
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	return (0);
}
int test9()
{
	printf(YELLOW "==============================================\n" RESET);	
	printf(YELLOW "=                  ft_strrchr                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 9 !!\n");
	char *test_a = "+-+-+-+-+0-0----";
	char test_b = '+';
	printf("[+] WATH WE HAVE :");
	printf(HEAVENLY "str : [%s]  | to_find : [%c]\n" RESET, test_a, test_b);
	char *res = strrchr(test_a, test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strrchr(test_a, test_b);
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	return (0);
}
int test10()
{
	printf(YELLOW "==============================================\n" RESET);	
	printf(YELLOW "=                  ft_strrchr                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 10 !!\n");
	char *test_a = "";
	char test_b = '0';
	printf("[+] WATH WE HAVE :");
	printf(HEAVENLY "str : [%s]  | to_find : [%c]\n" RESET, test_a, test_b);
	char *res = strrchr(test_a, test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strrchr(test_a, test_b);
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	return (0);
}

int test11()
{
	printf(YELLOW "==============================================\n" RESET);	
	printf(YELLOW "=                  ft_strrchr                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 11 !!\n");
	char *test_a = "0";
	char test_b = -1;
	printf("[+] WATH WE HAVE :");
	printf(HEAVENLY "str : [%s]  | to_find : [%c]\n" RESET, test_a, test_b);
	char *res = strrchr(test_a, test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strrchr(test_a, test_b);
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	int t6 = test6();
	sleep(1); 
	int t7 = test7();
	sleep(1); 
	int t8 = test8();
	sleep(1); 
	int t9 = test9();
	sleep(1); 
	int t10 = test10();
	sleep(1); 
	int t11 = test11();
	sleep(1); 
	c = t0 + t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8 + t9 + t10 + t11;
	printf(PERPUL "==============================================\n" RESET);
	if (c == 12)
	{
		printf(GREEN "THE RESULTE IS : [%d/12]\n",c);
		printf("CONGRATULATIONS, YOU HAVE PASSED ALL THE TESTS.\n" RESET);
	}
	else
	{
		printf(RED "THE RESULTE IS : [%d/12]\n",c);
		printf("UNFORTUNATELY, YOUR FUNCTION DID NOT MEET ALL THE TESTS. TRY AGAIN.\n" RESET);
	}
	printf(HEAVENLY "ALL TEST : " RESET);
	((t0 == 0)? printf(RED "TEST0" RESET " , ") : printf(GREEN "TEST0" RESET " , "));
	((t1 == 0)? printf(RED "TEST1" RESET " , ") : printf(GREEN "TEST1" RESET " , "));
	((t2 == 0)? printf(RED "TEST2" RESET " , ") : printf(GREEN "TEST2" RESET " , "));
	((t3 == 0)? printf(RED "TEST3" RESET " , ") : printf(GREEN "TEST3" RESET " , "));
	((t4 == 0)? printf(RED "TEST4" RESET " , ") : printf(GREEN "TEST4" RESET " , "));
	((t5 == 0)? printf(RED "TEST5" RESET " , ") : printf(GREEN "TEST5" RESET " , "));
	((t6 == 0)? printf(RED "TEST6" RESET " , ") : printf(GREEN "TEST6" RESET " , "));
	((t7 == 0)? printf(RED "TEST7" RESET " , ") : printf(GREEN "TEST7" RESET " , "));
	((t8 == 0)? printf(RED "TEST8" RESET " , ") : printf(GREEN "TEST8" RESET " , "));
	((t9 == 0)? printf(RED "TEST9" RESET " , ") : printf(GREEN "TEST9" RESET " , "));
	((t10 == 0)? printf(RED "TEST10" RESET " , ") : printf(GREEN "TEST10" RESET " , "));
	((t11 == 0)? printf(RED "TEST11" RESET ".\n") : printf(GREEN "TEST11" RESET ".\n"));
	printf(PERPUL "==============================================\n\n" RESET);
}
