#include<stdio.h>
struct VECTOR{
	int VEC[4];
};
int main()
{
	struct VECTOR VEC1,VEC2;
	int I;
	for(I=0;I<4;I++){
		VEC1.VEC[I] = 2*I; //Los valores de este vector seran el doble de su indicde numerico
	}
	for(I=0;I<4;I++){
		printf("%10d",VEC2.VEC[I]); //Este segundo vector no tiene valores, por lo tanto imprimira basura
	}
	VEC2 = VEC1; //Copia de las variables que contienen a los vectores
	printf("\n\n");
	for(I=0;I<4;I++){
		printf("%10d",VEC2.VEC[I]); //El segundo vector imprime ahora los valores del primer vector
	}
}
