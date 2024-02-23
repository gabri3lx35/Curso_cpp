#include <iostream>
using namespace std;
//vai usar argumento ometido, apenas quando n for informado o valor na declaração.
void imp(string txt="Valor ometido/Sem texto");

int main(){
  imp();

  return 0;
}

void imp(string txt){
  cout << "\n" << txt << "\n";
}