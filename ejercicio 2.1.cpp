#include <stdio.h>
#include <stdlib.h>

int FIBONACCI (int n);

int main()
{
    int N;
    printf ("\nIngrese un numero positivo y que sea entero: ");
    scanf ("%d",&N);
     while(N<0)
     {
        printf("\nEl numero ingresado no es valido.");
        
        printf ("\nIngrese un numero positivo y entero: ");
        scanf ("%d",&N);
     }
    printf ("La serie es: \n");
    
    for(int i=0;i<N;i++)
    {   
        printf(" %d ",FIBONACCI(i));    
   }
	
	printf("\n\n");
	system("pause");                                
}

int FIBONACCI (int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else 
    {
        return FIBONACCI(n - 2) + FIBONACCI(n - 1); 
    }                             
}
