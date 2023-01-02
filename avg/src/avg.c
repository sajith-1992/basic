/*
 ============================================================================
 Name        : avg.c
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
float num1,num2,num3;
	printf("enter three number");
	scanf("%f%f%f",&num1,&num2,&num3);
	float avg=(num1+num2+num3)/3;
	printf("result: %f",avg);
	return EXIT_SUCCESS;
}
