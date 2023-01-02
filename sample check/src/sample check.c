/*
 ============================================================================
 Name        : sample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int num1,num2;

	printf("enter 2 number");/* prints !!!Hello World!!! */

	scanf("%d%d",&num1,&num2);
	printf("enter number %d%d",num1,num2);
	int sum=num1+num2;
	printf("result :%d",sum);



	return EXIT_SUCCESS;
}
