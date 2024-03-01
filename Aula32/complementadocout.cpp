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

cout << "Valor de num em dec: " << num << "\n";
cout << "Valor de num em hex: " << hex << num << "\n";
cout << "Valor de num em oct: " << oct << num << "\n";
cout << "Valor de num em hex: " << setbase(16) << num << "\n";

  return 0;
}