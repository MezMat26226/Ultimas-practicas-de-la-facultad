#include<stdio.h>
struct ejemplo{ /*Declaración del tipo*/
	int A;
	float B;
};
int main()
{
	struct ejemplo primero, segundo;
	primero.A = 4;
	primero.B = 7.5;
	segundo = primero;
	printf("\n %d \t\t %f\n",segundo.A,segundo.B);
}
