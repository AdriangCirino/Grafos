#include "Grafo.h"
#include "Aresta.h"
#include <iostream>

using namespace std;

Grafo::Grafo(int num_vertices){

    if (num_vertices <= 0) {
        throw(invalid_argument("Erro no construtor Grafo(int): o numero de vertices  " +
           to_string(num_vertices) + " eh invalido!"));
    }

    matriz_adj_.resize(num_vertices);
     for (int i = 0 ; i < num_vertices ; i++ ){
        matriz_adj_[i].resize(num_vertices);
        }

  num_vertices_ = num_vertices;
  num_arestas_ = 0; 
}
int Grafo::num_vertices(){
    return num_vertices_;
}
 
int Grafo::num_arestas(){
    return num_arestas_;
}

bool Grafo::tem_aresta(Aresta e){
    if(matriz_adj_[e.v1][e.v2] != 0){
        return true;
    }
        return false;
}
























// Circulo::Circulo(double raio) {
//     if (raio <= 0) {
//         throw(invalid_argument("Erro no construtor Circulo(double): o raio " +
//             to_string(raio) + " eh invalido!"));
//     }

//     raio_ = raio;
// }

// double Circulo:: calcula_perimetro(){
//      return (2 * 3.1416 * raio_);

// };

// void Circulo::imprime_perimetro() {
//     cout << "Perimetro: " << calcula_perimetro() << "\n";
// }

// double Circulo::calcula_area() {
//     return (3.1416 * raio_ * raio_);
// }

// void Circulo::imprime_area() {
//     cout << "Area: " << calcula_area() << "\n";
    
// }
