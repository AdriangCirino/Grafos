#include "Grafo.h"
#include "Aresta.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, C;

    cin >> N >> C;

    Grafo g(N);

    for (int i = 0; i < C; i++) {
        int X, Y;

        cin >> X >> Y;

        g.insere_aresta(Aresta(X, Y));
    }

    int O;

    cin >> O;

    for (int i = 0; i < O; i++) {
        int X, Y;

        cin >> X >> Y;

        vector<int> nao_recebem = g.nao_recebem_mensagem(X, Y);

        cout << X << " " << Y << ":";

        for (int no : nao_recebem) {
            cout << " " << no;
        }

        cout << endl;
    }

    return 0;
}