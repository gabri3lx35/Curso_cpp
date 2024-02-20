#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  int n1,n2,res;
  
  char opc;
  //marca label para o goto
  inicio:
  system("cls");
  cout << "Digite valor da nota 1: ";
  cin >> n1;
  cout << "Digite valor da nota 1: ";
  cin >> n2;
  res = (n1 + n2);

  if(res >= 60){
    cout <<  "\nAluno Aprovado\n";
  }else if(res >= 40 && res < 60){
    cout << "\nAluno esta de Recu\n";
  }else{
    cout << "\nAluno Reprovado\n";
  }
  cout << "Deseja continuar o programa?: [s/n]\n";
  cin >> opc;

  if(opc == 's' or opc == 'S'){
      //após ser executado ele volta na marca "inicio:", executa programa novamente
      goto inicio;
  }else if(opc == 'n' or opc == 'N'){
    
  }

  return 0;
}