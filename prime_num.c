// program will print all prime numbers up to 1000


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>




int main(){

    int p;
    int i;

    int primes[1000] = {0};
    int primeindex = 2;

    bool isPrime;

    // hardcode frist 2 prime numbers

    primes[0] = 2;
    primes[1] = 3;

    // outer for loop

    for(p = 5;p <= 1000; p = p + 2){
        isPrime = true;

        for(i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if(p % primes[i] == 0)
                isPrime = false;
        
        if(isPrime == true)
        {
            primes[primeindex] = p;
            ++primeindex;
        }

    }

    for(i = 0; i < primeindex; ++i)
        printf("%d ",primes[i]);

    return(0);
}