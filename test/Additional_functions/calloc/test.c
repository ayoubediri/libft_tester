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
	printf(YELLOW "=                  ft_calloc                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 0 !!\n");
	printf("[+] WATH WE HAVE :"); 
    int size = sizeof(char);
	int n = 10;
    printf(HEAVENLY "n : [%d] | sizeof : %d\n\n"RESET ,n, size);
	char *res = calloc(n, size);
	char *y_res = ft_calloc(n, size); 
	if (memcmp(res, y_res, n * size) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		free(res);
		free(y_res);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	free(res);
	free(y_res);
	return (0);
}
int test1()
{
	printf(YELLOW "==============================================\n" RESET);
	printf(YELLOW "=                  ft_calloc                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 1 !!\n");
	printf("[+] WATH WE HAVE :"); 
    int size = sizeof(char *);
	int n = 10;
    printf(HEAVENLY "n : [%d] | sizeof : %d\n\n"RESET ,n, size);
	char *res = calloc(n, size);
	char *y_res = ft_calloc(n, size); 
	if (memcmp(res, y_res, n * size) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		free(res);
		free(y_res);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	free(res);
	free(y_res);
	return (0);
}
int test2()
{
	printf(YELLOW "==============================================\n" RESET);
	printf(YELLOW "=                  ft_calloc                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 2 !!\n");
	printf("[+] WATH WE HAVE :"); 
    int size = sizeof(int);
	int n = 0;
	printf(HEAVENLY "n : [%d] | sizeof : %d\n\n"RESET ,n, size);
	char *res = calloc(n, size);
	char *y_res = ft_calloc(n, size); 
	if (memcmp(res, y_res, n * size) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		free(res);
		free(y_res);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	free(res);
	free(y_res);
	return (0);
}
int test3()
{
	printf(YELLOW "==============================================\n" RESET);
	printf(YELLOW "=                  ft_calloc                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER :  !!\n");
	printf("[+] WATH WE HAVE :"); 
    int size = sizeof(char);
	int n = 1000;
	printf(HEAVENLY "n : [%d] | sizeof : %d\n\n"RESET ,n, size);
	char *res = calloc(n, size);
	char *y_res = ft_calloc(n, size); 
	if (memcmp(res, y_res, n * size) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		free(res);
		free(y_res);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	free(res);
	free(y_res);
	return (0);
}
int test4()
{
	printf(YELLOW "==============================================\n" RESET);
	printf(YELLOW "=                  ft_calloc                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 4 !!\n");
	printf("[+] WATH WE HAVE :"); 
	int n = 100;
    int size = sizeof(int);
	printf(HEAVENLY "n : [%d] | sizeof : %d\n\n"RESET ,n, size);
	char *res = calloc(n, size);
	char *y_res = ft_calloc(n, size); 
	if (memcmp(res, y_res, n * size) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		free(res);
		free(y_res);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	free(res);
	free(y_res);
	return (0);
}
int test5()
{
	printf(YELLOW "==============================================\n" RESET);
	printf(YELLOW "=                  ft_calloc                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 5 !!\n");
	printf("[+] WATH WE HAVE :"); 
	int n = 888;
    int size = sizeof(short);
	printf(HEAVENLY "n : [%d] | sizeof : %d\n\n"RESET ,n, size);
	char *res = calloc(n, size);
	char *y_res = ft_calloc(n, size); 
	if (memcmp(res, y_res, n * size) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		free(res);
		free(y_res);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	free(res);
	free(y_res);
	return (0);
}
int test6()
{
	printf(YELLOW "==============================================\n" RESET);
	printf(YELLOW "=                  ft_calloc                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 6 !!\n");
	printf("[+] WATH WE HAVE :"); 
	int n = 99;
    int size = sizeof(long);
	printf(HEAVENLY "n : [%d] | sizeof : %d\n\n"RESET ,n, size);
	char *res = calloc(n, size);
	char *y_res = ft_calloc(n, size); 
	if (memcmp(res, y_res, n * size) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		free(res);
		free(y_res);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	free(res);
	free(y_res);
	return (0);
}
int test7()
{
	printf(YELLOW "==============================================\n" RESET);
	printf(YELLOW "=                  ft_calloc                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 7 !!\n");
	printf("[+] WATH WE HAVE :"); 
	int n = 1;
    int size = sizeof(char);
	printf(HEAVENLY "n : [%d] | sizeof : %d\n\n"RESET ,n, size);
	char *res = calloc(n, size);
	char *y_res = ft_calloc(n, size); 
	if (memcmp(res, y_res, n * size) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		free(res);
		free(y_res);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	free(res);
	free(y_res);
	return (0);
}
int test8()
{
	printf(YELLOW "==============================================\n" RESET);
	printf(YELLOW "=                  ft_calloc                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 8 !!\n");
	printf("[+] WATH WE HAVE :"); 
	int n = 444;
    int size = sizeof(int);
	printf(HEAVENLY "n : [%d] | sizeof : %d\n\n"RESET ,n, size);
	char *res = calloc(n, size);
	char *y_res = ft_calloc(n, size); 
	if (memcmp(res, y_res, n * size) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		free(res);
		free(y_res);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	free(res);
	free(y_res);
	return (0);
}
int test9()
{
	printf(YELLOW "==============================================\n" RESET);
	printf(YELLOW "=                  ft_calloc                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 9 !!\n");
	printf("[+] WATH WE HAVE :"); 
	int n = 99;
    int size = sizeof(short);
	printf(HEAVENLY "n : [%d] | sizeof : %d\n\n"RESET ,n, size);
	char *res = calloc(n, size);
	char *y_res = ft_calloc(n, size); 
	if (memcmp(res, y_res, n * size) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		free(res);
		free(y_res);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	free(res);
	free(y_res);
	return (0);
}
int test10()
{
	printf(YELLOW "==============================================\n" RESET);
	printf(YELLOW "=                  ft_calloc                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 10 !!\n");
	printf("[+] WATH WE HAVE :"); 
	int n = 5;
    int size = sizeof(int);
	printf(HEAVENLY "n : [%d] | sizeof : %d\n\n"RESET ,n, size);
	char *res = calloc(n, size);
	char *y_res = ft_calloc(n, size); 
	if (memcmp(res, y_res, n * size) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		free(res);
		free(y_res);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	free(res);
	free(y_res);
	return (0);
}
int test11()
{
	printf(YELLOW "==============================================\n" RESET);
	printf(YELLOW "=                  ft_calloc                 =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 11 !!\n");
	printf("[+] WATH WE HAVE :"); 
	int n = 00;
    int size = sizeof(long);
	printf(HEAVENLY "n : [%d] | sizeof : %d\n\n"RESET ,n, size);
	char *res = calloc(n, size);
	char *y_res = ft_calloc(n, size); 
	if (memcmp(res, y_res, n * size) == 0)
	{
		printf(GREEN "THE TEST [ PASS ] ╰(*-*)╯  GOOD JOB !!\n\n" RESET);
		free(res);
		free(y_res);
		return (1);
	}
	else
		printf(RED "THE TEST [ NOT PASS ] ╭(╥_╥)╮ TRY AGINE AND GOOD LUCK !!\n\n" RESET);
	free(res);
	free(y_res);
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