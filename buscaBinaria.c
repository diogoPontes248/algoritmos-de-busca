#include <stdio.h>

//Um dos melhores algoritmos de busca. Exige que o vetor esteja ordenado.
//O objetivo deste algoritmo é comparar o elemento central do vetor com o elemento desejado.
//Se o elemento for menor que o central, então o algoritmo irá buscar na parte esquerda do vetor,
//ignorando completamente o lado direito do vetor.
//Se forem iguais, então encontramos o elemento e retornamos o índice.
//Se o central for menor, busca no lado direito do vetor.
//Dessa forma, a cada iteração o tamanho do vetor é reduzido pela metade, tecnica conhecida como dividir para conquistar.
//Complexidade: O(log(n)).
int buscaBinaria(int *v, int n, int elem){
    int inicio, meio, fim;
    inicio = 0;
    fim = n - 1;
    while(inicio <= fim){
        meio = (inicio + fim) / 2;
        if(elem < v[meio]){
            fim = meio - 1;
        }
        else if(elem > v[meio]){
            inicio = meio + 1;
        }
        else{
            return meio;
        }
    }
    return -1;
}

int main()
{
    int vetor[10] = {0, 2, 5, 7, 9, 10, 20, 26, 27, 83};
    
    int i = buscaBinaria(vetor, 10, 10);
    
    if(i >= 0){
        printf("Elemento encontrado na posição %d: %d", i, vetor[i]);
    }
    else{
        printf("Elemento não encontrado!");
    }

    return 0;
}
