#include<stdio.h>
#define MAX 3
int main ()
{
  int numeros[MAX];
  int contador=0;
  int orden;
  int contador2=0;
  int numero=0;
  for(contador=0;contador<MAX;contador=contador+1) {
        printf("ingresa los valores %d\n",contador+1);
        scanf(" %d",&numeros[contador]);

    }

       for(contador=0;contador<MAX;contador++) {

    }
     orden=0;
    for(contador=MAX;contador>0 && orden==0;contador--)
    {
        orden=1;
        for(contador2=0;contador2<contador;contador2++)
        {
            if(numeros[contador2]>numeros[contador2+1])
            {
                numero = numeros[contador2];
                numeros[contador2] = numeros[contador2+1];
                numeros[contador2+1]=numero;
                orden=0;
            }
        }
    }
    for(contador=0;contador<MAX;contador++)
    {
        printf(" %d",numeros[contador]);
    }
    for(contador=0;contador<MAX;contador++)
    {
            if(*contador=0<*contador=1&&*contador=1<*contador=1<*contador=2)
            {
                printf("CAB");
            }
    }

}
