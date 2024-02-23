#include <iostream>
using namespace std;
/*
joga da forca:
entra com palavra secreta
cin pedindo a palvra secreta
cin pedindo letras, comparando com as letras da "palavra secreta"


char	1 byte	1 byte
short	2 bytes	2 bytes
int	4 bytes	4 bytes
long	4 bytes	

*/
int main(){

  char palavra[30],secreta[30],letra[1];
  int tam, i,chances,acertos;
  bool acerto;
  tam=0;
  i=0;
  chances=6;
  acertos=0;

  cout << "Seu jogo da forca começa" << "\n";
  cout << "Mande seu amigo fechar os olhos, Digite a Palavra: ";
  cin >> palavra;
//enquanto valor de palavra[i] for diferente de espaço. add +1
  while (palavra[i] != '\0')
  {
    i++;
    tam++;
  }

  for(i=0; i < 30; i++ ){
    secreta[i]='-';
  }

  while((chances > 0) && (acertos < tam)){
    cout << "Jogadas Restantes: " << chances << "\n\n";
    for(i=0; i < tam; i++){
        cout << secreta[i];
    }
    cout << "\n\nDigite sua letra: ";
    cin >> letra[0];
    for(i=0; i < tam; i++){
      if(palavra[i] == letra[0]){
        acerto=true;
        secreta[i]=palavra[i];
        acertos++;
      }
    }
    bool existeLetra = false;
      for (i = 0; i < tam; i++) {
          if (secreta[i] == letra[0]){
              existeLetra = true;
              break;
            }
        }
        if (!existeLetra) {
            for (i = 0; i < tam; i++) {
                if (palavra[i] == letra[0]) {
                    acerto = true;
                    secreta[i] = palavra[i];
                    acertos++;
                }
            }
if (!acerto){ 
  chances--;
}
acerto=false;
system("clear");
 

  if(acertos == tam){
    cout << "gg" << "\n";
  }else{
    cout << "FF" << "\n";
    system("clear");
  }

  }

/*
  for(int i=0; i < 10; i++){
      cin >> palavra[i];
  }

  for(int i=0; i < tamP; i++){
    cout << palavra[i];
  }
*/
  return 0;
}
}