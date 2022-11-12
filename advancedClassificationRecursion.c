#include <stdio.h>

int lenRec(int);
int sumCountRec(int,int);
int isArmstrong(int);
int isPlaindrme(int);
int isPalHelper(int,int,int,int);
int powR(int,int);


int isArmstrong(int x){
    int len = lenRec(x);
    int a = sumCountRec(x,len);
    if(a==x) return 1;
    return 0;
    
}

int isPalindrome(int x){
    int l = lenRec(x)-1;
    return isPalHelper(x,x/powR(10,l),x%10,l);

}

int isPalHelper(int x,int left,int right,int len){
    if(left!=right) return 0;
    if(len<=2) return 1;  //len is always 1 less than actual len
    
    int newX = x%powR(10,len);   
    newX = newX/10;              

    return isPalHelper(newX,newX/powR(10,len-2),newX%10,len-2);
}

int lenRec(int x){
    if(x==0) return 0;
    return 1 + lenRec(x/10);
}

int sumCountRec(int x,int l){   
    if(x/10==0) return powR(x%10,l);
    return powR(x%10,l) + sumCountRec(x/10,l);
}

int powR(int a,int b){
    if(b<=0) return 1;
    return a*powR(a,b-1);
}

