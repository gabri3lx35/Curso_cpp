#include <iostream>

using namespace std;
void  somar(float *ptvar, float valor);
 void ptar(float *ptv);

int main (){
  float num=0;
  float vetor[5];
  //variavel num esta passando seu endereço para o ponteiro var
  somar(&num,15);
  cout << num << "\n";
  //quando é um vetor não precisa expecificar o endereço
  ptar(vetor);
  for(int i=0; i < 5; i++){
    cout << vetor[i] << "\n";
  }
  
}
 void  somar(float *ptvar, float valor){
  *ptvar+=valor;
 }

 void ptar(float *ptv){
  //Não precisa colocar ponteiro quando for vetor 
  ptv[0]=0;
  ptv[1]=0;
  ptv[2]=0;
  ptv[3]=0;
  ptv[4]=0;

 }