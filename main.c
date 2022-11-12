#include <stdio.h>
#include <math.h>
#include "NumClass.h"


int main(){
	int x,y;
	printf("enter first number ");
	scanf("%d",&x);
	printf("enter second number ");
	scanf("%d",&y);
	
	printf("the strong numbers are: ");
	
	for(int i=x;i<=y;i++){
	       if(isStrong(i)==1) printf("%d ",i);
	}
	printf("\n");
	
	
	printf("the ArmStrong numbers are: ");
	
	for(int i=x;i<=y;i++){
	       if(isArmstrong(i)==1) printf("%d ",i);
	}
	printf("\n");
	
	
	printf("the Palindrome numbers are: ");
	
	for(int i=x;i<=y;i++){
	       if(isPalindrome(i)==1) printf("%d ",i);
	}
	printf("\n");
	
	
	printf("the Prime numbers are: ");
	
	for(int i=x;i<=y;i++){
	       if(isPrime(i)==1) printf("%d ",i);
	}
	printf("\n");

}
