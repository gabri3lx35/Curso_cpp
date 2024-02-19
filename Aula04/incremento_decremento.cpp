#include <iostream>
using namespace std;

int main(){
  int n1,n2;
  n1=0;
  n2=10;
  //Incremento de 1 valor em uma variavel, da forma "Normal"
  cout << n1 << "\n";
  n1=n1+1;
  cout << n1 << "\n";
  // Incremento de 5 em 5;
  cout << n2 << "\n";
  n2=n2+5;
  cout << n2 << "\n";
  //Incremento com sintaxe reduzida, igual ao anterior porem escrito de forma mais direta.
  // valor atual de n2 = 15
  n2+=3;
  cout << n2 << "\n";
  //Incremento apenas de 1 em 1, Uma sintaxe reduzida para incrementar 1 em 1
  //Valor atual de n2 = 18
  n2++;
  cout << n2 << "\n";
  //Decremento seguindo a mesma logica
  n2= n2-5;
  n2-=3;
  n2--;
  cout << n2 << "\n";
// e tambem podemos multiplicar ou dividir ou %, com os 2 primeiros exemplos

//ou seja n2 vai receber ele mesmo  multiplicado por 5. (n2=10) n2= 10 * 5
n2= n2 * 5;
//valor atual de n2 = 50
 // 50 * 5 = 100
n2*=2;
cout << n2 << "\n";
//Mesma logica com a divisão
n2 = n2 / 5;
n2/=2;
cout << n2 << "\n";
  return 0;
}