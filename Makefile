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
	@$(CC) $(CFLAGS) $< $(LIB)
	@./$@
	@rm -f $@

$(DIR_LIB_BON)/%/test: $(DIR_LIB_BON)/%/test.c
	@$(CC) $(CFLAGS) $< $(LIB)
	@./$@
	@rm -f $@

.PHONY: test_all
test_all: $(patsubst %/test.c,%/test,$(wildcard $(DIR_LIB_FUN)/*/test.c $(DIR_LIB_ADD)/*/test.c $(DIR_LIB_BON)/*/test.c))

.PHONY: ft_tolower
ft_tolower: $(DIR_LIB_FUN)/tolower/test

.PHONY: ft_toupper
ft_toupper: $(DIR_LIB_FUN)/toupper/test

.PHONY: ft_isprint
ft_isprint: $(DIR_LIB_FUN)/isprint/test

.PHONY: ft_isalnum
ft_isalnum: $(DIR_LIB_FUN)/isalnum/test

.PHONY: Libc_functions
Libc_functions: $(patsubst %/test.c,%/test,$(wildcard $(DIR_LIB_FUN)/*/test.c))

.PHONY: additional_function
additional_function: $(patsubst %/test.c,%/test,$(wildcard $(DIR_LIB_ADD)/*/test.c))

.PHONY: bonus_function
bonus_function: $(patsubst %/test.c,%/test,$(wildcard $(DIR_LIB_BON)/*/test.c))
