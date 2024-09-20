# libft_tester
tester for libft 42 project
# HOW TO USE THE PROJECTE:

1- first you shoulde copy this in your terminal:
```
git clone https://github.com/ayoubediri/libft_tester.git
```
2- after that you shoulde copy your libft.a file and libft.h file in src dirctory
```
cp your_path_libft.a src/.
cp your_path_libft.h src/.
```
that all.

after you do the step 2 you can test all your functions by useing this commend :
```
make test_all
```
or you can spcifice one target function by her name :
- exmple :
```
make ft_tolower
```
or you can spcifice one part of the project by this tree commned :
- for Libc functions part:
```
make Libc_functions
```
- for Additional functions part
```
make Additional_functions
```
- for Bonus functions part
```
make Bonus_functions
```
