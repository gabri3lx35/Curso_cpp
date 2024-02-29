#include <iostream>

using namespace std;


int main(){
  string veiculo="Carro";
  string *pv;
  pv=&veiculo; // & pega indereço da variavel e adiciona ela no ponteiro pv
 //vantagem é que pode acessar o ponteiro de qualquer lugar/escopo
  cout << &veiculo << "\n";
  cout << pv << "\n";
  *pv="moto"; // no endereço mencionado *pv, adiciona o valor moto. ou seja na variavel veiculo
  cout << veiculo << "\n";
 // um ponteiro armazena um endereço de outra variavel
  return 0;
}