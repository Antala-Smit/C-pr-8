//2. C program to input and print array elements using pointers and find even elements of array.

#include <stdio.h>

void main(){
	int ch[50], no,i, *p=ch;
	
	printf("Enter Size of Array :- ");
	scanf("%d",&no);
	
	for(i=0;i<no;i++){
		printf("a[%d]=",i);
		scanf("%d",&p[i]);
	}
	
	for(i=0;i<no;i++){
		printf("a[%d] :-%d\n",i,ch[i]);
	}
	for(i=0;i<no;i++){
		if(ch[i]%2==0){
			printf("Even Number :- %d",ch[i]);
		}
	}
}
