#include <iostream>
#include <queue>

using namespace std;
// Queue
int main(){
//empty ver se esta vazio
//size tamanho
//front  carta da frete a primeira
//back  ultima carta
//push
//pop remove carta que esta na frente

  queue <string> veiculos;
  veiculos.push("Carro"); //1
  veiculos.push("Moto"); //2
  veiculos.push("aviao"); //3
  veiculos.push("Bicicleta"); //4

  cout << "Tamanho da Fila: " << veiculos.size() << "\n";
  cout << "Primeiro veiculo: " << veiculos.front() << "\n";
 cout << "Ultimo veiculo: " << veiculos.back() << "\n\n\n";
  while (!veiculos.empty()){
      cout << "Primeiro Veiculo: " << veiculos.front() << "\n";
      veiculos.pop();
  }
  

}