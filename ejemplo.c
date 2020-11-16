#include<stdio.h>
struct {
	int A;
	char B;
	int C;
}prueba;
int main()
{
	printf("int\t\t%d\n",sizeof(int) );
	printf("char\t\t%d\n",sizeof(char) );
	printf("prueba\t\t%d\n",sizeof(prueba) );
}
