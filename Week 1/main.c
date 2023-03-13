#include <stdio.h>
#include <stdlib.h>



int main() {
	
	/* Question 1 
	Write a program that reads three integer parameters (side lengths of the triangle) from the user. And check
whether the triangle is valid or not. Finally, parameters must be greater than zero. Otherwise, the program
must print a warning message.*/
	
	int a,b,c;
	printf("Please enter side lengths of the triangle");  
	scanf("%d%d%d", &a,&b,&c); 				//we take the variables from user
	
	if(a<=0 || b<=0 || c<=0){
		printf("Side length should be positive");
	}else{
		if(a+b>c && c+b>a && a+c>b){
			printf("Triangle is valid");
		}else{
			printf("Triangle is NOT valid");
		}
	}
	

	
	
	/* Question 2
	Any number can be a perfect number if the sum of its positive divisors excluding the number itself is equal to
that number. For example, 28 is a perfect number because 28 is divisible by 1, 2, 4, 7, 14 , 28. So, the sum of
these values is 1+2+4+7+14 = 28
Write a program that checks whether an integer entered by the user is a perfect number. This program should
give a warning message if the entered number is not positive.*/

	int num,sum = 0;
	printf("Please enter a number : ");
	scanf("%d", &num);
	if(num<=0){
		printf("Enter a positive number!")
	}else{
		for(int i = 1; i<num; i++){
			if(num%i == 0){
				sum +=i
			}
		}
		if(sum == num){
			printf("%d is a perfect number", num);
		}else{
			printf("%d is NOT a perfect number", num);
		}
	}

}
