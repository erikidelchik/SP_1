#include <stdio.h>
#include "NumClass.h"

int factorial(int);

int isPrime(int a){
    if (a<=1) return 0;
    for (int i=2;i<a;i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int isStrong(int a){
    if(a<=0) return 0;
    int x1 = a;
    int x2 = 0;
    while (x1>0){
        x2+= factorial(x1%10);
        x1/=10;
    }
    return x2==a;
}

int factorial(int n){
    int x = 1;
    while(n>0){
        x*=n;
        n-=1;
    }
    return x;
}


