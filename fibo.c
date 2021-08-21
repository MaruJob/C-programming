 #include "stdio.h"
 int fibonacci (int  Term);
 int main(){
       int Term;

       printf("Enter a number: ");
       scanf("%d\n", &Term);
       printf("Fibonacci Term is %d", fibonacci(Term));
 }
 int fibonacci (int  Term){
     if (Term == 0){
         return 0;
     }
     else if (Term == 1){
         return 1;
     }
     else {
         return fibonacci(Term - 1) + fibonacci (Term - 2);
     }
 }