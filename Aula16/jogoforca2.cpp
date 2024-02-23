#include <iostream>
using namespace std;

int main (){
  char palavra[30],secreta[30],letra[1];
  int tam,i,chances,acertos;
  bool acerto = false;
  bool existeLetra = false;
  tam=0;
  i=0;
  chances=6;
  acertos=0;

  cout << "Seu jogo da forca começa" << "\n";
  cout << "Digite palavra: ";
  cin >> palavra;
  //condição for verdadeira. contar numero de letras e indices
  while(palavra[i] != '\0'){
    i++;
    tam++;
  }
  //
  for(i=0; i < 30; i++){
    secreta[i]='#';
  }
  // > maior que
  // < menor que
  while((chances > 0) && (acertos < tam)){
    cout << "Jogadas Restantes: " << chances << "\n\n";
    for(i=0; i < tam; i++){
      cout << secreta[i];
    }
    //pega as letras
    cout << "\n\nDigite sua letra: ";
    cin >> letra[0];
    //troca # pela letra
  for(i=0; i < tam; i++){
    //secreta palavra tampada, letra é a letra atual digitada
    if(secreta[i] == letra[0]){
      existeLetra = true;
      break;
    }
    if(!existeLetra){
    for(i=0; i < tam; i++){
      if(palavra[i] == letra[0]){
        secreta[i] = palavra[i];

      }
    }
  }
  for(i=0; i < tam; i++){
    if(palavra[i] == letra[0]){
      acerto = true;
      secreta[i] = letra[0];
      acertos++;
    }
  }
  //verefica se tem letra na letra
  }
  if(!acerto){
    chances --;
  }
  existeLetra = false;
  acerto=false;
  system("clear");
  
  if(acertos == tam){
    cout << "GG vc ganhou" << "\n";
  }else if(chances == 0){
    cout << "FFFF" << "\n";
  }
  }
 return 0;
}