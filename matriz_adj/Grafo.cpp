#include "Grafo.h"
#include "Aresta.h"
#include <iostream>
#include <stdexcept>
#include <queue>

using namespace std;

Grafo::Grafo(int num_vertices) {
    if (num_vertices <= 0) {
        throw invalid_argument("Erro no construtor Grafo(int): o numero de vertices " +
                               to_string(num_vertices) + " eh invalido!");
    }

    matriz_adj_.resize(num_vertices);

    for (int i = 0; i < num_vertices; i++) {
        matriz_adj_[i].resize(num_vertices, 0);
    }

    num_vertices_ = num_vertices;
    num_arestas_ = 0;
}

int Grafo::num_vertices() {
    return num_vertices_;
}

int Grafo::num_arestas() {
    return num_arestas_;
}

bool Grafo::tem_aresta(Aresta e) {
    if (e.v1 < 0 || e.v1 >= num_vertices_ ||
        e.v2 < 0 || e.v2 >= num_vertices_) {
        return false;
    }

    return matriz_adj_[e.v1][e.v2] != 0;
}

void Grafo::insere_aresta(Aresta e) {
    if (e.v1 < 0 || e.v1 >= num_vertices_ ||
        e.v2 < 0 || e.v2 >= num_vertices_) {
        throw invalid_argument("Erro em insere_aresta: vertices invalidos (" +
                               to_string(e.v1) + ", " +
                               to_string(e.v2) + ")!");
    }

    if (!tem_aresta(e)) {
        matriz_adj_[e.v1][e.v2] = 1;
        matriz_adj_[e.v2][e.v1] = 1;
        num_arestas_++;
    }
}

bool Grafo::caminho(int v, int w) {
    int* marcado = new int[num_vertices_];

    for (int i = 0; i < num_vertices_; i++) {
        marcado[i] = 0;
    }

    bool resultado = caminho(v, w, marcado, 0);

    delete[] marcado;

    return resultado;
}

bool Grafo::caminho(int v, int w, int marcado[], int nivel) {
    for (int i = 0; i < nivel; i++) {
        cout << "--";
    }

    cout << "caminho(" << v << ", " << w << ")" << endl;

    if (v == w) {
        return true;
    }

    marcado[v] = 1;

    for (int u = 0; u < num_vertices_; u++) {
        if (matriz_adj_[v][u] != 0) {
            if (marcado[u] == 0) {
                if (caminho(u, w, marcado, nivel + 1)) {
                    return true;
                }
            }
        }
    }

    return false;
}

vector<int> Grafo::nao_recebem_mensagem(int v, int ttl) {
    vector<int> distancia(num_vertices_, -1);
    queue<int> fila;

    distancia[v] = 0;
    fila.push(v);

    while (!fila.empty()) {
        int atual = fila.front();
        fila.pop();

        for (int u = 0; u < num_vertices_; u++) {
            if (matriz_adj_[atual][u] != 0 && distancia[u] == -1) {
                distancia[u] = distancia[atual] + 1;

                if (distancia[u] <= ttl) {
                    fila.push(u);
                }
            }
        }
    }

    vector<int> nao_recebem;

    for (int i = 0; i < num_vertices_; i++) {
        if (distancia[i] == -1 || distancia[i] > ttl) {
            nao_recebem.push_back(i);
        }
    }

    return nao_recebem;
}