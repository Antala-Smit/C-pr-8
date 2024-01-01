//1. C program to swap two numbers using pointers

#include<stdio.h>

void main(){
	int a, b;
	printf("Enter Value of A :- ");
	scanf("%d",&a);
	printf("Enter Value of B :- ");
	scanf("%d",&b);	
	swap(&a,&b);
}

void swap(int *p,int *q){
	int c;
	c=*p;
	*p=*q;
	*q=c;
	
	printf("\nswap two numbers\n");
	printf("Value of A = %u\n",*p);
	printf("Value of B = %u\n",*q);
}
