Last login: Fri Jun 23 22:44:38 on console
teejeyair@Thokozanis-Air ~ % ssh 7fe24a1f2041@7fe24a1f2041.6f1fd736.alx-cod.online
7fe24a1f2041@7fe24a1f2041.6f1fd736.alx-cod.online's password: 
root@7fe24a1f2041:/# cd /root
root@7fe24a1f2041:~# ls
0x01_emacs                    0x02_emacs  0x03_vi                    alx-pre_course                 alx-zero_day  new_school  school             so_cool  zero_day
0x01-variables_if_else_while  0x02_vi     alx-low_level_programming  alx-system_engineering-devops  Betty         practice    school_is_amazing  tmp
root@7fe24a1f2041:~# cd  alx-low_level_programming 
root@7fe24a1f2041:~/alx-low_level_programming# ls
0x00-hello_world  0x01-variables_if_else_while  0x02-functions_nested_loops  0x04-more_functions_nested_loops  README.md
root@7fe24a1f2041:~/alx-low_level_programming# mkdir 0x03-debugging
root@7fe24a1f2041:~/alx-low_level_programming# cd 0x03-debugging
root@7fe24a1f2041:~/alx-low_level_programming/0x03-debugging# vi A README.md 
2 files to edit
root@7fe24a1f2041:~/alx-low_level_programming/0x03-debugging# ls
A
root@7fe24a1f2041:~/alx-low_level_programming/0x03-debugging# vi README.md 
root@7fe24a1f2041:~/alx-low_level_programming/0x03-debugging# vi main.c
root@7fe24a1f2041:~/alx-low_level_programming/0x03-debugging# mv main.c 0-main.c
root@7fe24a1f2041:~/alx-low_level_programming/0x03-debugging# ls
0-main.c  A  README.md
root@7fe24a1f2041:~/alx-low_level_programming/0x03-debugging# cd ..
root@7fe24a1f2041:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops
root@7fe24a1f2041:~/alx-low_level_programming/0x04-more_functions_nested_loops# ls
0-isupper.c         101-print_number.c   1-isdigit.c  3-print_numbers.c       5-more_numbers.c  7-print_diagonal.c  9-fizz_buzz.c  _putchar.c
100-prime_factor.c  10-print_triangle.c  2-mul.c      4-print_most_numbers.c  6-print_line.c    8-print_square.c    main.h         README.md
root@7fe24a1f2041:~/alx-low_level_programming/0x04-more_functions_nested_loops# vi  main.h 




































 * print_numbers - print 0 to 9
 */

void print_numbers(void);

/**
 * print_most_numbers - print 0 to 9, skip 2 and 4
 */

void print_most_numbers(void);

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void);

/**
 * print_line(int n) - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */

void print_line(int n);

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n);

/**
 * print_square - print a square of given size
 * @size: size to draw
 */

void print_square(int size);

/**
 * print_triangle - print traingle with #'s with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size);

/**
 * print_triangle - print traingle with #'s with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size);

/**
 * print_number = print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n);

int main(void);

#endif
