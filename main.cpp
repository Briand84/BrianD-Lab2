//Brian Dignam Lab 2
#include "mbed.h"

//n = 1 ..... 0
//n = 2 ..... 1
//n = 3 ..... 1
//n = 4 ..... 2

int fib(int n){
    if (n == 1)
    return 0;
    if (n == 2)
    return 1;
    else
    return (fib(n-1)+fib(n-2));

//3rd ....(1+0)=1=1
//4th ....f(3)+f(2)....(1+1)=2
// continues till max term is reached     
}

int main()
{
printf("Lab 2_part 2 - Recursive Function\r\n");
       int max_term = 10;

    for(int i=1; i<=max_term; i++){
        printf("%d\r\n", fib(i));
}   
printf("\r\n");
}