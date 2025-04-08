
#include <stdio.h>
#include<math.h>
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int evenodd(int b){
        if(b%2==0){
            return 0;
        }
        return 1;
    
}

int armstrong(int number) {
    int sum = 0, temp = number, digit_count = 0, remainder;

   
    while (temp != 0) {
        digit_count++;
        temp /= 10;
    }

    
    temp = number;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digit_count);
        temp /= 10;
    }

 
    if (sum == number) {
        return 1;  
    }
    return 0; 
}


		
		
		
		
		
		
		
		
	
	
	
	

