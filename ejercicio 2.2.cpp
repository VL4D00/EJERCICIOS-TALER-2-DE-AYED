#include<stdio.h>
#include<stdlib.h>
#include<Operaciones.h>

main()
{ 
	int a,b;

	printf("\nIngresar los valores enteros deseados");

	printf("\nIngresar A: ");
	scanf("%d",&a);

	printf("\nIngresar B: ");
	scanf("%d",&b);

	printf("\nLa Suma es: %d",suma(a,b));
	printf("\nLa Resta es: %d",resta(a,b));
	printf("\nLa Multiplicacion es: %d",multiplicacion(a,b));
	
	if(b==0)
	{
		printf("\nNo se puede realizar la division");
	} 		
	else
	{
		printf("\nLa Division es: %.2f",division(a,b));
	}
	printf("\n\n");
	system("pause");
}
