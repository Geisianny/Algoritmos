#include<stdio.h>
#include<stdlib.h>

/* DADO UM VETOR DE INTEIROS E O SEU NUMERO DE ELEMENTOS, INVERTA A POSIÇÃO DOS SEUS ELEMENTOS USANDO RECURSÃO */

void trocar(int v[], int inicio, int fim){

    int aux;

    if(inicio < fim){
        aux = v[inicio];
        v[inicio] = v[fim];
        v[fim] = aux;
        trocar(v,inicio+1,fim-1);

    }
}

int main()
{
    int vet[10]={11,258,13,445,58,67,700,8,9,10},i;

    printf("Sequencia:\n\n");
    for(i=0;i<10;i++){
        printf("%d ",vet[i]);
    }

    printf("\n\ninversao:\n\n");

    trocar(vet,0,9);

    for(i=0;i<10;i++){
        printf("%d ",vet[i]);
    }
    printf("\n");
    return 0;
}
