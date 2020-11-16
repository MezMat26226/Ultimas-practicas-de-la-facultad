#include<stdio.h>
int main(void)
{
	struct {
		int ENT;
		char CAR;
		float FLO;
	}ESTR;
	ESTR.ENT = 7;
	ESTR.CAR = 'A';
	ESTR.FLO = 9.765;
	imprimir (ESTR); //Llamada a la función
}
void imprimir (struct{
	int A;
	char B;
	float C;
}PARAM){
	printf("%10d%10c%20f",PARAM.A,PARAM.B,PARAM.C);
}
//Los campos de las estructuras tienen que estar odenados correctamente al transferirlos a una función
