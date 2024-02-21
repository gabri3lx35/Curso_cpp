#include <iostream>
using namespace std;

int main(){
/*
  switch (expresão){
    case: const1;
        comandos;
        break;
    default:
      comandos;
  }
*/

  int val;

  cout << "Selecione uma Cor \n";
  cout << "[1,2,3] Verde, [4,5,6] Azul, [7,8,9] Vermelho \n";
  
  cin >> val;

  switch (val){
    case 1:
    case 2:
    case 3:
        cout << "Cor selecionada: Verde\n";
    break;
    case 4:
    case 5:
    case 6:
        cout << "Cor selecionada: Azul\n";
      break;
    case 7:
    case 8:
    case 9:
        cout << "Cor selecionada: Vermelho\n";
        break;
    default:
          cout << val << " Não está na lista de cores \n";
  }
  return 0;
}