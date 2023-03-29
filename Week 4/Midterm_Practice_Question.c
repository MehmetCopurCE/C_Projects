#include<stdio.h>
/* Question: In this question, you are asked

*/
int factorial(int);
double harmonic(int);
int lucas(int);
int cube(int);
double result(int);

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    printf("Z[%d] : %f", n, result(n));
    result(n);

    return 0;
}

// Factorial Function
int factorial(int n){
    int result = 1;
    if(n == 0){
        return result;
    }    
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

// Harmonic Function
double harmonic(int n){
    double sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
        int result = (double) i/factorial(i+1); // burada type casting yapmamız lazım
        sum += result;

    }

    return sum;
    
}

// Lucas Function
int lucas(int n){

    if (n==0)
    {
        return 2;
    }else if(n == 1)
    {
        return 1;
    }else
    {
        return lucas(n-1) + lucas(n-2);
    }
    
}

// Cube Fanctions
int cube(int n){
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        int result;
        if (n % 2 == 1)
        {
            result = n*n*n;
            sum += result;
        }else
        {
            result = -(n*n*n);
            sum += result;
        }
        
    }

    return sum;
    
}

// Result Function
double result(int n){
    double harmonicResult = harmonic(n);
    double lucasResult = lucas(n);
    double cubeResult = cube(n);

    double result = harmonicResult + lucasResult + cubeResult;
    return result;
}
