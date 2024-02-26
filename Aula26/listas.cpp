#include <iostream>
#include <list>
using namespace std;


int main(){
  int tam;
  list<int> aula;
  tam=10;
  list<int>::iterator it;

  for(int i = 0; i < tam; i++){
    aula.push_front(i);
  }

  //adicionar item em algum lugar expecifico na lista
  it=aula.begin();
  advance(it,5);
  aula.insert(it,0);

  aula.sort(); //Esse metodo ordena a lista

  aula.reverse(); // Inverter ordem da lista



 cout << "Elemento que esta na frente da lista: " << aula.front() << "\n\n";
 cout << "Ultimo elemento da lista: " << "Nada" << "\n\n";
 cout << "Tamnho da lista: " << aula.size() << "\n\n";
  //push_front adiciona na frente da lista o elemento
  //push_back adiciona ao final da lista o elemento
  
  tam = aula.size();
  for(int i = 0; i < tam; i++){
    cout << aula.front() << "\n"; //front olha o elemento da frente 
    aula.pop_front();
  }
 system("read -p \"Pressione enter para sair\" saindo");
 system("clear");
  return 0;
}


