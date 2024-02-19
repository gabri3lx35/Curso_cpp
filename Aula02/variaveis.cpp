#include <iostream>
using namespace std;

int main(){
  //TIPO  NOME;
  //TIPO NOME = Valor;
  //declaração de variaveis, do tipo int = "inteira" vai receber ex "5,10, 50"

  int vidas=0;
  char letra='A'; // recebe um caractere, ex 'A' com o '' e não ""
  double decimal=4.69; // 4.49999999999 
  float decimal2=4.69; // tem precisão menor, ussando exemplo acima do double em uma saida de 4.4999... o float iria converter para 4.5 --revisar comentario--
  bool vivo=true; // essa variavel bool, receber apenas estado de true ou false, verdadeiro ou falso, 0 ou 1
  string nome=""; // string diferente do char que recebe apenas um caractere, strinh recebe um texto maior dentro de aspas ""

  cout << vidas << "\n";
  cout << letra << "\n";
  cout << decimal << "\n";
  cout << decimal2 << "\n";
  cout << vivo << "\n";
  cout << nome << "\n";

  //caut saida 


  // or
  //cout quebrando as linhas
  cout << vidas << "\n" << letra << "\n" << decimal << "\n" << decimal2 << "\n" << vivo << "\n" << nome << "\n";

  // or teste
  //cout tudo junto
  cout << vidas << letra << decimal << decimal2 << vivo << nome << "\n";
 cout << "está vivo? true or false" << "\n";
 cin >> vivo;


//cin entrada
 cout << "Digite o numero de vidas" << "\n";
 // entrada de dados, que vai altera valor da variavel
 cin >> vidas;

 cout << "Digite um letra" << "\n";
 cin >> letra;

 cout << "digite um numero decimal" << "\n";
 cin >> decimal;

 cout << "esqueci, qual seu nome?" << "\n";
 cin >> nome;

  //mostrando valor das variaveis que foram alteradas
  cout << vidas << " " << letra << " " << decimal << " " << " " << vivo << " " << nome << " " << "\n";

  return 0; 
}