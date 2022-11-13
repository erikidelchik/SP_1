#include <stdio.h>
#include <math.h>
#include "NumClass.h"


int main(){
	
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	
	
	printf("the Armstrong numbers are:");
	
	for(int i=x;i<=y;i++){
	       if(isArmstrong(i)==1) printf(" %d ",i);
	}
	printf("\n");
	
	
	printf("the Palindromes are:");
	
	for(int i=x;i<=y;i++){
	       if(isPalindrome(i)==1) printf(" %d ",i);
	}
	printf("\n");
	
	
	printf("the Prime numbers are:");
	
	for(int i=x;i<=y;i++){
	       if(isPrime(i)==1) printf(" %d ",i);
	}
	printf("\n");
	
	printf("the Strong numbers are:");
	
	for(int i=x;i<=y;i++){
	       if(isStrong(i)==1) printf(" %d ",i);
	}
	printf("\n");

}
