// #ifndef CIRCULO_H

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


#ifndef GRAFO_H

#define GRAFO_H


 class Grafo{
    public:
    // constroi o grafo com um dado numero de vertices sem arestas
    Grafo(int num_vertices); 

    int num_vertices();
    int num_arestas();

    private:
      
    vector<vector<int>> matriz_adj_ ;
    int num_vertices_();
    int num_arestas_();
};

#endif /*  GRAFO_H */
