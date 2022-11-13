#include <stdio.h>

int factorial(int);
int isPrime(int);
int isStrong(int);

int isPrime(int x){
    if(x==1) return 1;
    if (x==0) return 0;
    for(int i=2;i<x;i++){
        if(x%i==0) return 0;
    }
    return 1;
}

int isStrong(int x){
    int n = x;
    int c = 0;
    while(n!=0){
        n=n/10;
        c++;
    }

    int a[c];
    int b = x;
    for(int i=0;i<c;i++){
        a[i] = b%10;
        b = b/10;
    }
    int sum = 0;
    for(int i=0;i<c;i++){
        sum+= factorial(a[i]);
    }
    if(sum==x) return 1;
    return 0;
}

int factorial(int x){
    if(x<=1) return 1;
    return x*factorial(x-1);
}
