#include<stdio.h>
struct NUEVA{
	int ENT;
	char CAR;
	float FLO;
};
void imprimir(struct NUEVA PARAM);
int main(void){
	struct NUEVA ESTR; //Variable local con un tipo global
	ESTR.ENT = 25;
	ESTR.CAR = 'A';
	ESTR.FLO = 9.53;
	imprimir(ESTR);
}
void imprimir(struct NUEVA PARAM){ /*Se reconoce el tipo global*/
	printf("%10d%10c%20f",PARAM.ENT,PARAM.CAR,PARAM.FLO);
}
