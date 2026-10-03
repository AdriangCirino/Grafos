/*
 * Trabalho 1 - Time to Live
 *
 * GEN505 - Grafos - 2026/2
 *
 * Nome:      Emerson Henrique Comar
 * Matricula: 2221101007
 * 
 * Nome:      Adrian Gabriel Cirino
 * Matricula: 20240017215
 */
#include "Grafo.h"
#include "Aresta.h"
#include <iostream>
#include <vector>

/*
Fóruns pesquisados: 
 Entrada de dados: https://cplusplus.com/forum/beginner/104461/
 Métodos do vector: https://cplusplus.com/reference/vector/vector/

*/


int main() {

    int entrada;
    std::vector<int> vetor;

    while (std::cin >> entrada) {
        vetor.push_back(entrada);
    }


    Grafo g(vetor[0]);

    for (int i = 1; i < (int)(vetor[1] * 2); i += 2){
        g.insere_aresta(Aresta((int)vetor[1 + i], (int)vetor[1 + i + 1]));
    }


    int indice_qtd_testes = vetor[1] * 2 + 2;

    for (int i = indice_qtd_testes + 1; i < (int)vetor.size(); i += 2){ 
        std::vector<int> retorno = g.nao_recebem_mensagem(vetor[i], vetor[i + 1]);

        std::cout << vetor[i] << " " << vetor[i + 1] << ":";
        for (int j = 0; j < (int)retorno.size(); j++)
            std::cout << " " << retorno[j] ;

        std::cout << "\n";
    }

    
    
    return 0;
}