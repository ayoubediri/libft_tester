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

void n_print(void *arr, size_t n)
{
	size_t i = 0;
	unsigned char *p = arr;
	while (i < n)
		printf(HEAVENLY "%c" RESET,p[i++]);
	printf("\n");
}

int test0()
{
	printf(YELLOW "==============================================\n" RESET);	
	printf(YELLOW "=                  ft_memccpy                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 0 !!\n");
	char test_a[100];
	char test_c[100];
	char test_b[100] = "this is just test!!";
	unsigned int n = 40;
	unsigned int c = ' ';
	printf("[+] WATH WE HAVE : "); 
	printf(HEAVENLY " str : [%s] | n : [%d] | c : [%c]\n" RESET, test_b, n, c);
	char *ac1 = memccpy(test_a, test_b, c, n);
	unsigned int df1 = (ac1 == NULL ? 0 : ac1 - test_a);
	printf("[+] WATH SHOULD WE GET : ");
	n_print(test_a, df1);
	char *ac2 = ft_memccpy(test_c, test_b, c, n); 	
	unsigned int df2 = (ac2 == NULL ? 0 : ac2 - test_c);
	printf("[+] WATH YOURS FUNCTOINS GET : ");
	n_print(test_c, df2);
	if ((df2 == df1) && (memcmp(test_a, test_c, df1) == 0))
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
	printf(YELLOW "=                  ft_memccpy                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 1 !!\n");
	char test_a[100] = "good work";
	char test_c[100] = "good work";
	char test_b[100] = "for null";
	unsigned int n = 20;
	unsigned int c = '\0';
	printf("[+] WATH WE HAVE : "); 
	printf(HEAVENLY " str : [%s] | n : [%d] | c : [%c]\n" RESET, test_b, n, c);
	char *ac1 = memccpy(test_a, test_b, c, n);
	unsigned int df1 = (ac1 == NULL ? 0 : ac1 - test_a);
	printf("[+] WATH SHOULD WE GET : ");
	n_print(test_a, df1);
	char *ac2 = ft_memccpy(test_c, test_b, c, n); 	
	unsigned int df2 = (ac2 == NULL ? 0 : ac2 - test_c);
	printf("[+] WATH YOURS FUNCTOINS GET : ");
	n_print(test_c, df2);
	if ((df2 == df1) && (memcmp(test_a, test_c, df1) == 0))
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
	printf(YELLOW "=                  ft_memccpy                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 2 !!\n");
	char test_a[100];
	char test_c[100];
	char test_b[100] = "1234567890";
	unsigned int n = 40;
	unsigned int c = 'a';
	printf("[+] WATH WE HAVE : "); 
	printf(HEAVENLY " str : [%s] | n : [%d] | c : [%c]\n" RESET, test_b, n, c);
	char *ac1 = memccpy(test_a, test_b, c, n);
	unsigned int df1 = (ac1 == NULL ? 0 : ac1 - test_a);
	printf("[+] WATH SHOULD WE GET : ");
	n_print(test_a, df1);
	char *ac2 = ft_memccpy(test_c, test_b, c, n); 	
	unsigned int df2 = (ac2 == NULL ? 0 : ac2 - test_c);
	printf("[+] WATH YOURS FUNCTOINS GET : ");
	n_print(test_c, df2);
	if ((df2 == df1) && (memcmp(test_a, test_c, df1) == 0))
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
	printf(YELLOW "=                  ft_memccpy                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 3 !!\n");
	char test_a[100];
	char test_c[100];
	char test_b[100] = "I HAVE THE : 0";
	unsigned int n = 10;
	unsigned int c = '0';
	printf("[+] WATH WE HAVE : "); 
	printf(HEAVENLY " str : [%s] | n : [%d] | c : [%c]\n" RESET, test_b, n, c);
	char *ac1 = memccpy(test_a, test_b, c, n);
	unsigned int df1 = (ac1 == NULL ? 0 : ac1 - test_a);
	printf("[+] WATH SHOULD WE GET : ");
	n_print(test_a, df1);
	char *ac2 = ft_memccpy(test_c, test_b, c, n); 	
	unsigned int df2 = (ac2 == NULL ? 0 : ac2 - test_c);
	printf("[+] WATH YOURS FUNCTOINS GET : ");
	n_print(test_c, df2);
	if ((df2 == df1) && (memcmp(test_a, test_c, df1) == 0))
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
	printf(YELLOW "=                  ft_memccpy                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 4 !!\n");
	char test_a[100];
	char test_c[100];
	char test_b[100] = "";
	unsigned int n = 5;
	unsigned int c = 'o';
	printf("[+] WATH WE HAVE : "); 
	printf(HEAVENLY " str : [%s] | n : [%d] | c : [%c]\n" RESET, test_b, n, c);
	char *ac1 = memccpy(test_a, test_b, c, n);
	unsigned int df1 = (ac1 == NULL ? 0 : ac1 - test_a);
	printf("[+] WATH SHOULD WE GET : ");
	n_print(test_a, df1);
	char *ac2 = ft_memccpy(test_c, test_b, c, n); 	
	unsigned int df2 = (ac2 == NULL ? 0 : ac2 - test_c);
	printf("[+] WATH YOURS FUNCTOINS GET : ");
	n_print(test_c, df2);
	if ((df2 == df1) && (memcmp(test_a, test_c, df1) == 0))
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
	printf(YELLOW "=                  ft_memccpy                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 5 !!\n");
	char test_a[100];
	char test_c[100];
	char test_b[100] = "no pain,no gain";
	unsigned int n = 0;
	unsigned int c = ',';
	printf("[+] WATH WE HAVE : "); 
	printf(HEAVENLY " str : [%s] | n : [%d] | c : [%c]\n" RESET, test_b, n, c);
	char *ac1 = memccpy(test_a, test_b, c, n);
	unsigned int df1 = (ac1 == NULL ? 0 : ac1 - test_a);
	printf("[+] WATH SHOULD WE GET : ");
	n_print(test_a, df1);
	char *ac2 = ft_memccpy(test_c, test_b, c, n); 	
	unsigned int df2 = (ac2 == NULL ? 0 : ac2 - test_c);
	printf("[+] WATH YOURS FUNCTOINS GET : ");
	n_print(test_c, df2);
	if ((df2 == df1) && (memcmp(test_a, test_c, df1) == 0))
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
	printf(YELLOW "=                  ft_memccpy                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 6 !!\n");
	char test_a[100];
	char test_c[100];
	char test_b[100] = "===+++++++";
	unsigned int n = 10;
	unsigned int c = '+';
	printf("[+] WATH WE HAVE : "); 
	printf(HEAVENLY " str : [%s] | n : [%d] | c : [%c]\n" RESET, test_b, n, c);
	char *ac1 = memccpy(test_a, test_b, c, n);
	unsigned int df1 = (ac1 == NULL ? 0 : ac1 - test_a);
	printf("[+] WATH SHOULD WE GET : ");
	n_print(test_a, df1);
	char *ac2 = ft_memccpy(test_c, test_b, c, n); 	
	unsigned int df2 = (ac2 == NULL ? 0 : ac2 - test_c);
	printf("[+] WATH YOURS FUNCTOINS GET : ");
	n_print(test_c, df2);
	if ((df2 == df1) && (memcmp(test_a, test_c, df1) == 0))
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
	printf(YELLOW "=                  ft_memccpy                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 7 !!\n");
	char test_a[100];
	char test_c[100];
	char test_b[100] = "no one listen to me,can u listen to me plz!!";
	unsigned int n = 3;
	unsigned int c = ' ';
	printf("[+] WATH WE HAVE : "); 
	printf(HEAVENLY " str : [%s] | n : [%d] | c : [%c]\n" RESET, test_b, n, c);
	char *ac1 = memccpy(test_a, test_b, c, n);
	unsigned int df1 = (ac1 == NULL ? 0 : ac1 - test_a);
	printf("[+] WATH SHOULD WE GET : ");
	n_print(test_a, df1);
	char *ac2 = ft_memccpy(test_c, test_b, c, n); 	
	unsigned int df2 = (ac2 == NULL ? 0 : ac2 - test_c);
	printf("[+] WATH YOURS FUNCTOINS GET : ");
	n_print(test_c, df2);
	if ((df2 == df1) && (memcmp(test_a, test_c, df1) == 0))
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
	printf(YELLOW "=                  ft_memccpy                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 8 !!\n");
	char test_a[100];
	char test_c[100];
	char test_b[100] = "0123456789";
	unsigned int n = 10;
	unsigned int c = '9';
	printf("[+] WATH WE HAVE : "); 
	printf(HEAVENLY " str : [%s] | n : [%d] | c : [%c]\n" RESET, test_b, n, c);
	char *ac1 = memccpy(test_a, test_b, c, n);
	unsigned int df1 = (ac1 == NULL ? 0 : ac1 - test_a);
	printf("[+] WATH SHOULD WE GET : ");
	n_print(test_a, df1);
	char *ac2 = ft_memccpy(test_c, test_b, c, n); 	
	unsigned int df2 = (ac2 == NULL ? 0 : ac2 - test_c);
	printf("[+] WATH YOURS FUNCTOINS GET : ");
	n_print(test_c, df2);
	if ((df2 == df1) && (memcmp(test_a, test_c, df1) == 0))
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
	printf(YELLOW "=                  ft_memccpy                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 9 !!\n");
	char test_a[100];
	char test_c[100];
	char test_b[100] = "hello world!!";
	unsigned int n = 12;
	unsigned int c = 'h';
	printf("[+] WATH WE HAVE : "); 
	printf(HEAVENLY " str : [%s] | n : [%d] | c : [%c]\n" RESET, test_b, n, c);
	char *ac1 = memccpy(test_a, test_b, c, n);
	unsigned int df1 = (ac1 == NULL ? 0 : ac1 - test_a);
	printf("[+] WATH SHOULD WE GET : ");
	n_print(test_a, df1);
	char *ac2 = ft_memccpy(test_c, test_b, c, n); 	
	unsigned int df2 = (ac2 == NULL ? 0 : ac2 - test_c);
	printf("[+] WATH YOURS FUNCTOINS GET : ");
	n_print(test_c, df2);
	if ((df2 == df1) && (memcmp(test_a, test_c, df1) == 0))
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
	printf(YELLOW "=                  ft_memccpy                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 10 !!\n");
	char test_a[100];
	char test_c[100];
	char test_b[100] = "there is no I in the phrase";
	unsigned int n = 90;
	unsigned int c = 'I';
	printf("[+] WATH WE HAVE : "); 
	printf(HEAVENLY " str : [%s] | n : [%d] | c : [%c]\n" RESET, test_b, n, c);
	char *ac1 = memccpy(test_a, test_b, c, n);
	unsigned int df1 = (ac1 == NULL ? 0 : ac1 - test_a);
	printf("[+] WATH SHOULD WE GET : ");
	n_print(test_a, df1);
	char *ac2 = ft_memccpy(test_c, test_b, c, n); 	
	unsigned int df2 = (ac2 == NULL ? 0 : ac2 - test_c);
	printf("[+] WATH YOURS FUNCTOINS GET : ");
	n_print(test_c, df2);
	if ((df2 == df1) && (memcmp(test_a, test_c, df1) == 0))
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
	printf(YELLOW "=                  ft_memccpy                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 11 !!\n");
	int test_a[100];
	int test_c[100];
	int test_b[100] = {1,2,3,4,5,6,7,8,9};
	unsigned int n = 100;
	unsigned int c = 5;
	printf("[+] WATH WE HAVE : "); 
	printf(HEAVENLY " int : [{1,2,3,4,5,6,7,8,9}] | n : [%d] | n : [%c]\n" RESET, n, c);
	int *ac1 = memccpy(test_a, test_b, c, n);
	unsigned int df1 = (ac1 == NULL ? 0 : ac1 - test_a)/4;
	printf("[+] WATH SHOULD WE GET : ");
	n_print(test_a, df1);
	int *ac2 = ft_memccpy(test_c, test_b, c, n); 	
	unsigned int df2 = (ac2 == NULL ? 0 : ac2 - test_c)/4;
	printf("[+] WATH YOURS FUNCTOINS GET : ");
	n_print(test_c, df2);
	if ((df2 == df1) && (memcmp(test_a, test_c, df1) == 0))
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
