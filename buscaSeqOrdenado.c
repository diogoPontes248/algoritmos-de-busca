#include <stdio.h>

//Evolução da busca linear. Nesse algoritmo, pressupõe que o vetor esteja ordenado.
//Ou seja, quanto o elemento a ser buscado for menor que a posição atual do vetor, isso significa
//que o elemento não existe dentro do vetor. Permitindo que o algoritmo não percorra o vetor inteiro inutilmente.
//Complexidade: O(n) no pior caso, melhor que a busca linear na maioria dos casos.
int buscaOrdenada(int *v, int n, int elem){
    for(int i = 0; i < n; i++){
        if(v[i] == elem){
            return i;
        }
        else if(elem < v[i]){
            return -1;
        }
        
    }
    return -1;
}

int main()
{
    int vetor[10] = {0, 2, 5, 7, 9, 10, 20, 26, 27, 83};
    
    int i = buscaOrdenada(vetor, 10, 10);
    
    if(i >= 0){
        printf("Elemento encontrado na posição %d: %d", i, vetor[i]);
    }
    else{
        printf("Elemento não encontrado!");
    }

    return 0;
}
