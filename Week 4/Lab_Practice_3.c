#include<stdio.h>
#include<stdbool.h>

bool isPrime(int);
bool isEven(int );
bool isPerfect(int);

int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    bool evenResult = isEven(a);
    bool primeResult = isPrime(a);
    bool perfectResult = isPerfect(a);

    if(evenResult == true){
        printf("Even : +\n");
    }else{
        printf("Even : -\n");
    }

    if(primeResult == true){
        printf("Prime : +\n");
    }else{
        printf("Prime : -\n");
    }

    if(perfectResult == true){
        printf("Perfect : +\n");
    }else{
        printf("Perfect : -\n");
    }
    

    return 0;
}

bool isEven(int a){
    if (a % 2 == 1)
    {
        return true;
    }else{
        return false;
    }
}

bool isPerfect(int a){
    int sum = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
        
    }

    if (sum == a)
    {
        return true;
    }else
    {
        return false;
    }
}

bool isPrime(int a){
    bool result = true;

    if (a == 0 || a ==1)
    {
        return false;
    }
    

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            result = false;
            break;
        }
        
    }
    

}