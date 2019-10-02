// $ ./cmdline 123 xyz foo bar
// There were 5 arguments provided:
// argument #0     -       ./cmdline
// argument #1     -       123
// argument #2     -       xyz
// argument #3     -       foo
// argument #4     -       bar

#include <stdio.h>

int main(int arg_count, char *arg_list[]) {
    int i;
    printf("There were %d arguments provided:\n", arg_count);
    for (i = 0; i < arg_count; i++)
        printf("argument #%d\t-\t%s\n", i, arg_list[i]);
}