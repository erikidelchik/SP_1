#include <stdio.h>
#include "NumClass.h"


int isArmstrongHelper(int,int);
int isPalindromeHelper(int,int);
int len(int);
int poww(int,int);

 
int isArmstrong(int a){
    int l = len(a);
    int b = isArmstrongHelper(a,l);
    return b==a;
}

int isArmstrongHelper(int b,int l){
    if(b-10<0) return poww(b,l);
    return poww(b%10,l)+ isArmstrongHelper(b/10,l);
}

int isPalindrome(int a){
    if(a-10>=0){
        int l = len(a);
        int new = isPalindromeHelper(a,l);
        return a==new;
    }
    return 1;
}

int isPalindromeHelper(int a,int l){
    if(a-10<0) return a;
    return (a%10)* poww(10,l-1) + isPalindromeHelper(a/10,l-1);

}

int poww(int a,int b){
    if (b<=0) return 1;
    else if(b==1) return a;
    return a * poww(a,b-1);
}

int len(int a){
    if(a-10<0) return 1;
    return 1+len(a/10);
}
