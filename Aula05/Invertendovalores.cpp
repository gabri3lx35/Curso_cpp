#include <iostream>
using namespace std;

int main(){
  int num=10;
  int num2=15;
  cout << num << "\n";

  //invertendo variavel metodo 1 / "tradicional"

  num = num *-1;
  cout << num << "\n";

  //metodo 2
  //valor atual do num = -10
  cout << -num << "\n"; // esse metodo não grava o "invertimento" na variavel
  cout << num << "\n";

  //metodo 3
  num2 =- num2; 
  cout << num2 << "\n";
  
  return 0;
}