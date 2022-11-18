#include <stdio.h>


int isArmstrong(int);
int isPalindrome(int);
int powL(int,int);

int isArmstrong(int x){
    if(x==0) return 1;
    int n = x;
    int len = 0;
    int d=0;
    int sum = 0;
    while(n!=0){
        n = n /10;
        len++;
    }
    
    int z = x;
    while(z!=0){
    	d = z%10;
    	sum+=powL(d,len);
    	z = z/10;
    }
    if(sum==x) return 1;
    return 0;

}

int isPalindrome(int x){
    if(x==0) return 1;
    int n = x;
    int len = 0;
    while(n!=0){
        n = n /10;
        len++;
    }
    int left=0,right=0;
    int z = x;
    int new=0;
    while(len>1){
    	right = left%10;
    	left = z/(powL(10,len-1));
    	if(left!=right) return 0;
    	new = z%(powL(10,len-1));
    	new = new %10;
    	z = new;
    	len = len-2;
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
