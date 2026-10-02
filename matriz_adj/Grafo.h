#ifndef GRAFO_H
#define GRAFO_H

#include <vector>
#include "Aresta.h"

class Grafo {
public:
    Grafo(int num_vertices);

    int num_vertices();
    int num_arestas();

    bool tem_aresta(Aresta e);
    void insere_aresta(Aresta e);
    bool caminho(int v, int w);
    std::vector<int> nao_recebem_mensagem(int v, int ttl);

private:
    bool caminho(int v, int w, int marcado[], int nivel);

    std::vector<std::vector<int>> matriz_adj_;
    int num_vertices_;
    int num_arestas_;
};

#endif