#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;
//argc armazena parrametros/ numero de parametros
//argv é uma matriz, que armazena ponteiros. ponteiro para matriz de ponteiros de caractere
int main(int argc, char *argv[]){
  if(argc > 1){
    if(!strcmp(argv[1],"sol")){
      cout << "sol detectado" << "\n";
    }else if(!strcmp(argv[1],"nublado")){
      cout << "tempo ruim heim";
    }else{
      cout << "sem tempo?";
    }
  }
  system("pause");
  cout << argv[0] << "\n";
  return 0;
}