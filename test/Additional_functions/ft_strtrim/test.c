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


static int to_trim(const char *set, char c);
static char *new_str(const char *s1, size_t start, size_t end);

char *my_strtrim(const char *s1, const char *set)
{
    int i;
    int j;
    
    i = 0;
    j = ft_strlen(s1) - 1;
    if (ft_strlen(s1) == 0)
        return (ft_strdup(""));
    while (to_trim(set, s1[i]))
        i++;
    while (to_trim(set, s1[j]))
        j--;
    return (new_str(s1, i, j - (i - 1)));
}

static char *new_str(const char *s1, size_t start, size_t len)
{
    char *str;
    size_t i;
    
    if (len <= 0 || start >= ft_strlen(s1))
        return (ft_strdup(""));
    str = ft_calloc(len + 1, sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        str[i] = s1[start + i];
        i++;
    }
    return (str);
}

static int to_trim(const char *set, char c)
{
    int i;
    
    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

int test0()
{
	printf(YELLOW "==============================================\n" RESET);
	printf(YELLOW "=                  ft_strtrim                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 0 !!\n");
	char test_a[100] = "     this string!!       ";
	char test_b[] = " ";
    printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY "str : [%s] | sep : [%s]\n" RESET, test_a, test_b);
	char *res =  my_strtrim(test_a,test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strtrim(test_a,test_b); 
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strtrim                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 1 !!\n");
	char test_a[100] = "";
	char test_b[] = "";
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY "str : [%s] | sep : [%s]\n" RESET, test_a, test_b);
	char *res =  my_strtrim(test_a,test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strtrim(test_a,test_b); 
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strtrim                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 2 !!\n");
	char test_a[100] = "*+-**//*-++*0123456789+-*/-*-/+-/*-+/*-+/*-*";
	char test_b[] = "/*-+";
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY "str : [%s] | sep : [%s]\n" RESET, test_a, test_b);
	char *res =  my_strtrim(test_a,test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strtrim(test_a,test_b); 
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strtrim                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER :  !!\n");
	char test_a[100] = "to long string =_=";
	char test_b[] = "";
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY "str : [%s] | sep : [%s]\n" RESET, test_a, test_b);
	char *res =  my_strtrim(test_a,test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strtrim(test_a,test_b); 
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strtrim                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 4 !!\n");
	char test_a[100] = "1111111111111111!!";
	char test_b[] = "123";
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY "str : [%s] | sep : [%s]\n" RESET, test_a, test_b);
	char *res =  my_strtrim(test_a,test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strtrim(test_a,test_b); 
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strtrim                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 5 !!\n");
	char test_a[100] = "11111111111131111411111111111111111111111111111111111111111111111111!!";
	char test_b[] = "1! ";
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY "str : [%s] | sep : [%s]\n" RESET, test_a, test_b);
	char *res =  my_strtrim(test_a,test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strtrim(test_a,test_b); 
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strtrim                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 6 !!\n");
	char test_a[100] = "this easy one";
	char test_b[] = "thisone";
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY "str : [%s] | sep : [%s]\n" RESET, test_a, test_b);
	char *res =  my_strtrim(test_a,test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strtrim(test_a,test_b); 
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strtrim                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 7 !!\n");
	char test_a[100] = "hay hay captine !!!!";
	char test_b[] = "! hay";
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY "str : [%s] | sep : [%s]\n" RESET, test_a, test_b);
	char *res =  my_strtrim(test_a,test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strtrim(test_a,test_b); 
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strtrim                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 8 !!\n");
	char test_a[100] = "can u see what I see";
	char test_b[] = "";
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY "str : [%s] | sep : [%s]\n" RESET, test_a, test_b);
	char *res =  my_strtrim(test_a,test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strtrim(test_a,test_b); 
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strtrim                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 9 !!\n");
	char test_a[100] = "1!@#26&^%$34@$%@5623478one more left234234240+-*/*-+@#$%^&(*)_";
	char test_b[] = "-!@#$%^&*()_+/0123456789";
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY "str : [%s] | sep : [%s]\n" RESET, test_a, test_b);
	char *res =  my_strtrim(test_a,test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strtrim(test_a,test_b); 
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strtrim                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 10 !!\n");
	char test_a[100] = "why this tests is to long!!";
	char test_b[] = "zxcvbnm,.;kjhfdsaqwertyuiop[] /";
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY "str : [%s] | sep : [%s]\n" RESET, test_a, test_b);
	char *res =  my_strtrim(test_a,test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strtrim(test_a,test_b); 
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
	printf(YELLOW "=                  ft_strtrim                =\n" RESET);
	printf(YELLOW "==============================================\n\n" RESET);
	printf("[+] THE TEST NUMBER : 11 !!\n");
	char test_a[100] = "13456780231654+-";
	char test_b[] = "0123465789+-";
	printf("[+] WATH WE HAVE :"); 
	printf(HEAVENLY "str : [%s] | sep : [%s]\n" RESET, test_a, test_b);
	char *res =  my_strtrim(test_a,test_b);
	printf("[+] WATH SHOULD WE GET :");
	printf(HEAVENLY " %s\n" RESET, res);
	char *y_res = ft_strtrim(test_a,test_b); 
	printf("[+] WATH YOURS FUNCTOINS GET :");
	printf(HEAVENLY " %s\n\n" RESET, y_res);
	if (strcmp(res, y_res) == 0)
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
