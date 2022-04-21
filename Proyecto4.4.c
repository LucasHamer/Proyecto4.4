#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N1,N2,N3;

    printf("Ingrese el primer numero: ");
    scanf("%d",&N1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&N2);
    printf("Ingrese el tercer numero: ");
    scanf("%d",&N3);

    if(N1>N3 && N2>N3)
    {
        printf("Mayores al tercero");
    }
    else if(N1==N2 && N3==N1)
    {
        printf("Tres iguales");
    }
    else if(N1<N3 || N2<N3)
    {
        printf("Alguno es menor");
    }
    else
    {
        printf("No se cumple ninguna caracteristica");
    }

    return 0;
}
