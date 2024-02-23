#include <iostream>
using namespace std;
void contador(int num);
void contador2(int n1, int cont=0);


int main(){
  contador2(400);

  return 0;
}

void contador(int num){
  for(int i=0; i<=num;i++){
    cout << i << "\n";
  }
}

void contador2(int n1, int cont){
  cout << cont << "\n";
  if(n1 != cont){
    contador2(n1,++cont);
  }
}