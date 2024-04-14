#include<stdio.h>
#include<unistd.h>

void main(){
	printf("Hello World!\n");
	fork();
	printf("I am after forking");
	printf("\nI am process %d.\n", getpid());
}

