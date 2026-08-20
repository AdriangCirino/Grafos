#include "Aresta.h"
#include "Grafo.h"
#include <exception>
#include <string>
#include <iostream>
using namespace std;

int main() {
    
    Grafo g(6);
    cout << "Tem aresta ("<< e.v1", " << e.v2"):"<<g.tem_aresta(e)<<"\n";
    cout << "Tem aresta 2 , 5:" << g.tem_aresta(Aresta(1,3))<<"\n";


    Grafo h(-1);





}

// #include "Circulo.h"
// #include <iostream>
// #include <stack>

// using namespace std;

// int main() {
//     try {
//         double raio;

//         cout << "Digite o raio do circulo 1: ";
//         cin >> raio;

//         Circulo circulo(raio);

//         circulo.imprime_area();
//         circulo.imprime_perimetro();

        

//         cout << "Digite o raio do circulo 2 : ";
//         cin >> raio;
//         Circulo circulo2(raio);

//         circulo2.imprime_area();
//         circulo2.imprime_perimetro();

        

//         cout << "Digite o raio do circulo 3: ";
//         cin >> raio;
//         Circulo circulo3(raio);
//         circulo3.imprime_area();
//         circulo3.imprime_perimetro();

// stack<int> pilha; 

// pilha.push(12);
// pilha.push(144);

// while (!pilha.empty()) { 
//     int valor = pilha.top();           
//     cout << "Removido da pilha: " << valor << "\n";
//     pilha.pop();                       
// }
//     }
//     catch (const exception &e) {
//         cerr << "exception: " << e.what() << "\n";
//     }

//     return 0;
//}