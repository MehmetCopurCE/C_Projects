#include<stdio.h>

int main(){
    float a,b;
    printf("Enter two number: ");
    scanf("%f%f", &a,&b);
    float result = calculateAverage(a,b);
    printf("Result : %f",result);

    return 0;
}

float calculateAverage(float a, float b){
    return (a+b)/2;
}