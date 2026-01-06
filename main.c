/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=0,a,b,c;
    loop:
    a=n/10;
    b=n%10;
    c=a+b;
    if( n<99){
        
        if(c==7 && n%2!=0){
            printf("%d\n",n);
        }
        n++;
        goto loop;
    }

    return 0;
}
