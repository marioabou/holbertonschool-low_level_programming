Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 402 bytes | 402.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/marioabou/holbertonschool-low_level_programming.git
   c272627..68f32f3  master -> master
root@65051705e1fd:/holbertonschool-low_level_programming/functions_nested_loops# vi 10-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int n;

n = add(89, 9);
printf("%d\n", n);
return (0);
}
