#include <iostream>
using namespace std;
  //Quando se declara uma variavel fora de uma função ela pode ser ussada em todo o programa ou seja variavel em escopo global.
  int n1,n2;

int main(){
  //quando se declara varivel dentro de uma função, ela é uma variavel local ou seja vai funcionar apenas no seu escopo.
  int n3,n4;
  // Operadores Matematicos + - / * % (o () tem prioridade em cima de todos os operadores)
  int res;

  n1=11;
  n2=3;
  n3=5;
  n4=2;

  res=((((n1+n2+n3+n4) - 3) / 2) * 2) + n1;
  cout << res << "\n";

 return 0;
}

