#include <stdio.h>

//Algoritmo de busca simples. Percorre o vetor inteiro até encontrar o elemento desejado.
//Uma vantagem deste algoritmo é que o vetor não precisa estar ordenado.
//Complexidade: O(n).
int buscaLinear(int *v, int n, int elem){
    for(int i = 0; i < n; i++){
        if(v[i] == elem){
            return i;
        }
    }
    return -1;
}

int main()
{
    int vetor[10] = {83, 9, 27, 7, 20, 5, 2, 0, 26, 10};
    
    int i = buscaLinear(vetor, 10, 99);
    
    if(i >= 0){
        printf("Elemento encontrado na posição %d: %d", i, vetor[i]);
    }
    else{
        printf("Elemento não encontrado!");
    }

    return 0;
}
