#include<stdio.h>
#include"factorial.h"
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %lld\n", number, factorial(number));

    
    
printf("Enter number to check even/odd :-\n");
int b ;
    scanf("%d",&b);
    if(evenodd(b)==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }


    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (armstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }




    
    
    
    return 0;
    
    
}
