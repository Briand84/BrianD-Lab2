//Brian Dignam Lab 2
#include "mbed.h"

int main(){//runs its own thread in the operating system

printf("Brian Dignam Lab 2\r\n");
 //Declare Variables that are integers
int max_term = 10;
int term_1 = 0;
int term_2= 1;
int next_term = 0;
        for(int i=1; i<=max_term; i++){ //Continious loop whilst i is less then Max term
if (i == 1)
    printf("%d\r\n", term_1); //prints first term
 if (i == 2)
       printf("%d\r\n",term_2); //prints second term
else{
 next_term = term_1 + term_2;
 term_1 = term_2;
 term_2 = next_term;
       printf("%d\r\n", next_term); //result printed on tera-term
 }
}
      printf("\r\n");

      while (true){

      
      }
}
