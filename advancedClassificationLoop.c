#include <stdio.h>
#include "NumClass.h"

int poww(int,int);
int len(int);



int isArmstrong(int a){
    int x1=a;
    int x2=0;
    for(int i=0;i< len(a);i++){
        x2+=poww(x1%10, len(a));
        x1/=10;
    }
    return x2==a;
}

int isPalindrome(int a){
    int x1=a;
    int x2=0;
    while(x1>0){
        x2+=x1%10* poww(10, len(x1)-1);
        x1/=10;
    }
    return x2==a;


}

int len(int n){
    int l = 0;
    while(n>0){
        n/=10;
        l+=1;
    }
    return l;
}
int poww(int a,int b){
    int n=1;
    while (b>0){
        n*=a;
        b-=1;
    }
    return n;
}
