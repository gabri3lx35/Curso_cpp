#include <iostream>
using namespace std;
//Prototipar a função, significa tu vai apresentar a função para o sistema

void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main(){
  soma(1,2);
  string transp[4]{"carro","moto","barco","aviao"};
  int res = soma2(200,100);
  cout << "res: " << res << "\n";

  tr(transp);
  return 0;
}
//void significa que função n vai retornar nada

void texto(){
  cout << "\nOlá, Mundo\n";
}

void soma(int n1, int n2){
  int res;
  res= n1+n2;
  cout << res << "\n";
}

int soma2(int n1, int n2){
  return n1+n2;
}
void tr(string tra[4]){
  for(int i=0; i <4; i++){
      cout << tra[i] << "\n";
  }
}
