/*
$ cc firstprog.c
 */

/*
$ objdump -D a.out | grep -A5 "main:"
_main:
100000f40:      55      pushq   %rbp
100000f41:      48 89 e5        movq    %rsp, %rbp
100000f44:      48 83 ec 10     subq    $16, %rsp
100000f48:      c7 45 fc 00 00 00 00    movl    $0, -4(%rbp)
100000f4f:      c7 45 f8 00 00 00 00    movl    $0, -8(%rbp)
 */


/*
 * https://stackoverflow.com/questions/10362630/how-can-objdump-emit-intel-syntax
 */

/*
$  objdump -M intel -d a.out | grep -A5 "main:"
 */
#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 10; i++)       // Loop 10 times.
    {
        puts("Hello, world!\n");  // put the string to the output.
    }
    return 0;                   // Tell OS the program exited without errors.
}
