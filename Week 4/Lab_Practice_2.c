#include<stdio.h>
#include<stdbool.h>

int main(){
    int a,b;
    printf("Enter numbers :");
    scanf("%d%d",&a,&b);
    bool result = isAmicable(a,b);

    if (result = true)
    {
        printf("%d and %d are  Amicable numbers");
    }else{
        printf("%d and %d are not Amicable numbers");
    }
    

    return 0;
}

bool isAmicable(int a, int b){
    int sum1 = 0, sum2 =0;
    for (int i = 1; i < a; i++)
    {
        if(a % i==0)
            sum1 +=i;
    }

    for (int i = 1; i < b; i++)
    {
        if (b % i == 0)
            sum2 +=i;
        
    }
    
    if (sum1 == b && sum2 == b)
    {
        return true;
    }
    else{
        return false;
    }
    
    
}