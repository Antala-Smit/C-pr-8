//3. C Program to find length of string using pointer

#include<stdio.h>
#include<string.h>

void main(){
	char ch[50];
	int no;
	
	printf("Enter String :- ");
	scanf("%s",ch);
	
	no=str(ch);
	printf("length of string :- %d",no);
	
}

int str(char *p){
	int count=0,i;
	for(i=0;i<*p!='\0';i++){
		count++;
		p++;
	}
	return count;
}
