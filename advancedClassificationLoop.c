#include <stdio.h>


int isArmstrong(int);
int isPalindrome(int);
int powL(int,int);

int isArmstrong(int x){
    if(x==0) return 1;
    int n = x;
    int c = 0;
    while(n!=0){
        n = n /10;
        c++;
    }
    int a[c];

    int b = x;

    for(int i=c-1;i>=0;i--){
        a[i] = b%10;
        b = b/10;
    }

    int sum = 0;
    for(int i=0;i<c;i++){
        sum = sum + powL(a[i],c);
    }
    if(sum == x) return 1;
    return 0;

}

int isPalindrome(int x){
    if(x==0) return 1;
    int n = x;
    int c = 0;
    while(n!=0){
        n = n /10;
        c++;
    }
    int b = x;
    int a[c];

    for(int i=c-1;i>=0;i--){
        a[i] = b%10;
        b = b/10;
    }

    for(int i=0;i<c/2;i++){
        if(a[i]!=a[c-1-i]) return 0;
    }
    return 1;
}

int powL(int b,int c){
    int i=1;
    while(c>0){
        i = i*b;
        c--;
    }
    return i;
}
