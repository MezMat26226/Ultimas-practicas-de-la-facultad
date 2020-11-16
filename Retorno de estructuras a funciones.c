#include<stdio.h>
struct FECHA{
	int DIA;
	int MES;
	int ANIO;
};
struct FECHA CORREGIR(struct FECHA);
int main(void){
	struct FECHA HOY;
	printf("Ingrese la fecha con formato DD-MM-AA: ");
	scanf("%d-%d-%d",&HOY.DIA,&HOY.MES,&HOY.ANIO);
	HOY = CORREGIR(HOY);
	printf("\n\nFecha correcta:");
	printf("%02d-%02d-%02d",HOY.DIA,HOY.MES,HOY.ANIO);
}
struct FECHA CORREGIR(struct FECHA DIA){
	if(DIA.DIA == 29 && DIA.MES == 2){
		DIA.DIA = 3;
		DIA.MES = 1;
	}
	return DIA;
}
