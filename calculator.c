#include<stdio.h>
 int main(){
     
     char op;
     double first,second,result;
    
     printf("enter the operator: ");
     scanf("%c", &op);
     printf("enter the first number: ");
     scanf("%lf", &first);
     printf("enter the second number: ");
     scanf("%lf", &second);
     
     switch (op){
         case'+':
         result = first + second;
         printf("%lf+%lf=%lf", first,second,result);
         break;
         case'-':
         result = first - second;
         printf("%lf-%lf=%lf", first,second,result);
         break;
         case'*':
         result = first + second;
         printf("%lf*%lf=%lf", first,second,result);
         break;
         case'/':
         if (second !=0){
             result = first/second;
             printf("%lf/%lf=%lf", first,second,result);
         }else{
             printf("divison by 0 is not allowed.");
         }
         break;
         
         }
         return 0;
         }
