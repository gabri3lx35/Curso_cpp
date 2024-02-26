#include <iostream>
#include <stack>
using namespace std;

int main(){

  stack <string> cartas;

 //.push adiciona elemento dentro de uma pilha
  cartas.push("Rei de copas");
  cartas.push("Rei de espadas");
  cartas.push("Rei de ouros");
  cartas.push("Rei de paus");

  //size tamanho da pilha
  cout << "Tamanho da pilha: " << cartas.size() << "\n";

  cout << "Carta do topo: " << cartas.top() << "\n";
    //.pop retira elemento dentro de uma pilha
  cartas.pop();
  cout << "Tamanho da pilha: " << cartas.size() << "\n";
  ;
  cout << "Carta do topo: " << cartas.top() << "\n";

  //empty se a pilha esta vazia retorna um true, se não false
   if(cartas.empty()){
    cout << "A pilha esta vazia" << "\n";
  }else{
    cout << "A Pilha não esta vazia ela tem: " << cartas.size() << " " << "Elementos" << "\n";
  }
  while (!cartas.empty())
  {
    cartas.pop();
  }

    if(cartas.empty()){
    cout << "A pilha esta vazia" << "\n";
  }else{
    cout << "A Pilha não esta vazia ela tem: " << cartas.size() << " " << "Elementos" << "\n";
  }
  
  return 0;
}