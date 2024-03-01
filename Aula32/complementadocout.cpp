#include <iostream>
#include <stdio.h>
#include <math.h>
#include<iomanip>
using namespace std;


int main(){
float pi= M_PI;

 printf("Olá, Mundo novamente\n");
 printf("Valor de Pi: %09.2f \n",pi);

int num =10;

cout.precision(3);//limitar variavel pi para 3 digiros 3.14 
cout << "Valor de num em dec: " << num << "\n";
cout << "Valor de num em hex: " << hex << num << "\n";
cout << "Valor de num em oct: " << oct << num << "\n";
cout << "Valor de num em hex: " << setbase(16) << num << "\n";
cout << "Valor de pi: " << pi << "\n";
cout.precision(-1);
cout << "Valor de pi: " << pi << "\n";
//valor de pi em notação cientifica
cout << "Valor de pi: "<< std::scientific << pi << "\n";
//adicionar uma largura
cout << "Valor de pi: " << setw(10) << dec << num << "\n";
//preencher um certo espaço com algum caractere
cout << "Valor de pi: " << setw(10) << setfill('#') << dec << num << "\n";
  return 0;
}