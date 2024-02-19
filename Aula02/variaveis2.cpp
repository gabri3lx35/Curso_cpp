#include <iostream>
using namespace std;

#define pi 3.1415
#define ola cout << "Olá, Mundo" << "\n";




int main(){
  //declaração de varias variaveis do mesmo tipo(int) de 1 linha.
  int vidas=3, tiros=100, mana=500;
  cout << pi << "\n";
  ola;
  cout << "Numero de vidas: ";
  cin >> vidas;
  cout << "Numero de mana: ";
  cin >> mana;
  cout << "Munição: ";
  cin >> tiros;
  cout << "FIM" << "\n";


  
  return 0;
}