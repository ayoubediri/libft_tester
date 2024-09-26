DIR_LIB_FUN= test/Libc_functions
DIR_LIB_ADD= test/Additional_functions
DIR_LIB_BON= test/Bonus_functions

CC=cc
CFLAGS= -Wall -Wextra -Werror
LIB= -L src/ -lft

$(DIR_LIB_FUN)/%/test: $(DIR_LIB_FUN)/%/test.c
	@$(CC) $(CFLAGS) $< $(LIB) -o $@
	@./$@
	@rm -f $@

$(DIR_LIB_ADD)/%/test: $(DIR_LIB_ADD)/%/test.c
	@$(CC) $(CFLAGS) $< $(LIB) -o $@
	@./$@
	@rm -f $@

$(DIR_LIB_BON)/%/test: $(DIR_LIB_BON)/%/test.c
	@$(CC) $(CFLAGS) $< $(LIB) -o $@
	@./$@
	@rm -f $@

.PHONY: test_all
test_all: $(patsubst %/test.c,%/test,$(wildcard $(DIR_LIB_FUN)/*/test.c $(DIR_LIB_ADD)/*/test.c $(DIR_LIB_BON)/*/test.c))

.PHONY: ft_tolower
ft_tolower: $(DIR_LIB_FUN)/tolower/test

.PHONY: ft_toupper
ft_toupper: $(DIR_LIB_FUN)/toupper/test

.PHONY: ft_isalpha
ft_isalpha: $(DIR_LIB_FUN)/isalpha/test

.PHONY: ft_isprint
ft_isprint: $(DIR_LIB_FUN)/isprint/test

.PHONY: ft_strlcat
ft_strlcat: $(DIR_LIB_FUN)/strlcat/test

.PHONY: ft_memccpy
ft_memccpy: $(DIR_LIB_FUN)/memccpy/test

.PHONY: ft_memcpy
ft_memcpy: $(DIR_LIB_FUN)/memcpy/test

.PHONY: ft_bzero
ft_bzero: $(DIR_LIB_FUN)/bzero/test

.PHONY: ft_memset
ft_memset: $(DIR_LIB_FUN)/memset/test

.PHONY: ft_strlcpy
ft_strlcpy: $(DIR_LIB_FUN)/strlcpy/test

.PHONY: ft_strlen
ft_strlen: $(DIR_LIB_FUN)/strlen/test

.PHONY: ft_memmove
ft_memmove: $(DIR_LIB_FUN)/memmove/test

.PHONY: ft_isalnum
ft_isalnum: $(DIR_LIB_FUN)/isalnum/test

.PHONY: ft_strchr
ft_strchr: $(DIR_LIB_FUN)/strchr/test

.PHONY: ft_strrchr
ft_strrchr: $(DIR_LIB_FUN)/strrchr/test

.PHONY: ft_strnstr
ft_strnstr: $(DIR_LIB_FUN)/strnstr/test

.PHONY: ft_isdigit
ft_isdigit: $(DIR_LIB_FUN)/isdigit/test

.PHONY: ft_memcmp
ft_memcmp: $(DIR_LIB_FUN)/memcmp/test

.PHONY: ft_memchr
ft_memchr: $(DIR_LIB_FUN)/memchr/test

.PHONY: ft_atoi
ft_atoi: $(DIR_LIB_FUN)/atoi/test

.PHONY: ft_strncmp
ft_strncmp: $(DIR_LIB_FUN)/strncmp/test

.PHONY: ft_strdup
ft_strdup: $(DIR_LIB_ADD)/strdup/test

.PHONY: Libc_functions
Libc_functions: $(patsubst %/test.c,%/test,$(wildcard $(DIR_LIB_FUN)/*/test.c))

.PHONY: Additional_functions
Additional_functions: $(patsubst %/test.c,%/test,$(wildcard $(DIR_LIB_ADD)/*/test.c))

.PHONY: bonus_function
bonus_function: $(patsubst %/test.c,%/test,$(wildcard $(DIR_LIB_BON)/*/test.c))
