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
    int c = 0, d=0;
    int sum = 0;
    while(n!=0){
    	d = n%10;
    	c = factorial(d);
    	sum+=c;
        n=n/10;
    }
    if(sum==x) return 1;
    return 0;
    
}

int factorial(int x){
    if(x<=1) return 1;
    return x*factorial(x-1);
}
