#include <iostream>
using namespace std;

int main(){
  //Operador and = &&, retorna valor boleano. vai retornar verdadeiro apenas se tadas as opçoes forem verdadeiras.
  //Operador Or = ||, retorna valor boleano, para ele retornar verdadeiro apenas uma opção verdadeira é suficiente e não todas.
  // Operador Not = !, operador de negação
  int num, num2;
  num=5;
  num2=0;
//maior que >
//menor que <

   if(((num > 4 && num < 7) && (num < 10 || num > 10)) || ((num < 10 || num > 8) && (num == 5 || num > 2) ||(num > 4 && num <7))){
    cout << "1: Valor aceito\n"; 
  }else{
    cout << "1: Valor não aceito\n";
  }

  if(num > 4 && num < 7){
    cout << "2: Valor aceito\n"; 
  }else{
    cout << "2: Valor não aceito\n";
  }



 if(num > 8 || num < 2){
    cout << "3: Valor aceito\n"; 
  }else{
    cout << "3: Valor não aceito\n";
  }

// num = 1, ou seja true, ! negação. ou seja !num2 vira se num2 não for verdadeiro
  if(!num2){
    cout << "4: Valor aceito\n"; 
  }else{
    cout << "4: Valor não aceito\n";
  }

  return 0;
}