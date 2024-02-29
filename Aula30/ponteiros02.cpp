#include <iostream>

using namespace std;

int main (){
  int *p, vetor[10];

  p=&vetor[0];
  *p=10;
  cout << vetor[0] << "\n";
  *(p +=1);
  *p=20;
  cout << vetor[1] << "\n";




   /*
  cout << p << "\n";//p=vetor

  p=&vetor[1];
  cout << p << "\n";//Ponteiro sequencial, seguindo o sistema hexadecimal


  p=&vetor[2];
  cout << p << "\n";

  p=&vetor[3];
  cout << p << "\n";

  *(p += 1);
  cout << p << "\n";

  *(p += 1);
  cout << p << "\n";
  */
}