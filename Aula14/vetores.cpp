#include <iostream>
using namespace std;

int main (){
  int tam;
  tam=5;

  int vetor[tam]={10,20,30,40,50};
  //int vetor[5]={10,20,30,40,50}

// sizeof(vetor)/4. um modo para saber tamanho do vetor

  for(int i=0; i < tam ; i++){
    cout << "Indice:" << i << "\n";
    cout << "Valor: " << vetor[i] << "\n";
    
  }


  return 0;
}