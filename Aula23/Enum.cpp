#include <iostream>
using namespace std;

int main(){
  //quando não especificado o valor, temos sequencia apartir do ultimo valor mencionado
  enum armas{fuzil=100,revolver=10,rifle=15,escopeta=1};
  armas armaSel; // posso armazenar dentro da variavel armaSel, oque esta dentro de armas.
  armaSel=revolver;
  cout << armaSel << "\n";
}