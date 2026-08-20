#ifndef GRAFO_H

#define GRAFO_H

#include <vector>
#include "Aresta.h"
 class Grafo{
    public:
    //constroi o grafo com um dado numero de vertices sem arestas
    Grafo(int num_vertices); 

    int num_vertices();
    int num_arestas();

    bool tem_aresta(Aresta e);


    // insere uma aresta no grafo caso ainda nao exista e nao seja um laco 
    void insere_aresta(Aresta e);
    
    // se a aresta nao existe segue e n remove nada, se a aresta existe no grafo inverte e no valor espelho replica a inverção
    void remove_aresta(Aresta e);

    private:
      
    std::vector<std::vector<int>> matriz_adj_ ;

    int num_vertices_;
    int num_arestas_;
};

#endif /*  GRAFO_H */

//--------------------------------------------------------------
// #ifndef Circulo_H

// #define CIRCULO_H
//class Circulo {
//public:
   // Circulo(double raio);
    
   // double calcula_area();
   // void imprime_area();

    //exec 1
  //  double calcula_perimetro();
  //  void imprime_perimetro();
//private:
  //  double raio_;
//};
//#endif /* CIRCULO_H */