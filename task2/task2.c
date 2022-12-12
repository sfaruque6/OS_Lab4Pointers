#include <stdio.h>
#include <stdlib.h>
# define ops 5

/* IMPLEMENT ME: Declare your functions here */
float add (float a, float b){
	return a + b;
}

float subtract (float a, float b){
	return a - b;
}

float multiply (float a, float b){
	return a * b;
}

float divide (float a, float b){
	return a / b;
}

float ext (float a, float b){
	exit(0);
	return 0;
}


int main (void)
{
	//error: excess elements in array initializer [-Werror]
	float (*ptrs[ops])(float,float) = {add, subtract, multiply, divide, ext};
	int choice;
	float a, b;
	printf("Enter 0 for addition, 1 for subtraction, 2 for multiplication, 3 for division, 4 for exit: \n");
	scanf("%d", &choice);
	printf("Enter the two numbers:\n");
	scanf("%f %f", &a, &b);
	printf("%f", ptrs[choice] (a, b));
	return 0;

	
	/* IMPLEMENT ME: Insert your algorithm here */

	return 0;
}

/* IMPLEMENT ME: Define your functions here */