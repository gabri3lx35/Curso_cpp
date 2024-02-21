#include <iostream>
using namespace std;

int main(){
   int val;

  cout << "Selecione um Transporte \n";
  cout << "[1] Carro, [2] Moto, [3] Aviao, [4] Helicoptero \n";
  
  cin >> val;

  switch (val){
    case 1:
    case 2:
        cout << "Transporte Terrestre\n";
        switch(val){
          case 1:
            cout << "Carro Selecionado\n";
            break;
          case 2:
           cout << "Moto Selecionado\n";
            break;
        }
    break;
    case 3:
    case 4:
        cout << "Transporte Aereo\n";
        switch(val){
          case 3:
             cout << "Aviao Selecionado\n";
             break;
          case 4:
             cout << "Helicoptero Selecionado\n";
             break;
        }
        break;

    default:
          cout << val << " Opão invalida \n";
  }
  return 0;
}