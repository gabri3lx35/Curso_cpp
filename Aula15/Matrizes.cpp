#include <iostream>
using namespace std;

int main(){
  int tamx, tamy;
  tamx=3;
  tamy=4;


  /*int matriz[tamx][tamy];
  matriz[0][0]=0;
  matriz[0][1]=0;
  matriz[0][2]=0;
  matriz[0][3]=0;

  matriz[1][0]=1;
  matriz[1][1]=1;
  matriz[1][2]=1;
  matriz[1][3]=1;

  matriz[2][0]=2;
  matriz[2][1]=2;
  matriz[2][2]=2;
  matriz[2][3]=2;
*/
/*for(int i=0; i < tamx; i++ ){
  cout << "Coluna: " << i << " " << "Linha: 0 " << "Valor: "<< matriz[i][0] << "\n";
  cout << "Coluna: " << i << " " << "Linha: 1 " << "Valor: "<< matriz[i][1] << "\n";
  cout << "Coluna: " << i << " " << "Linha: 2 " << "Valor: "<< matriz[i][2] << "\n";
 
} */

int matriz[tamx][tamy];

for(int x=0; x < tamx; x++){
  for(int y=0; y < tamy; y++){
    cin >>  matriz[x][y];
  }
}


for(int x=0; x < tamx; x++){
  for(int y=0; y < tamy; y++){
     cout << matriz[x][y] << " ";
     // cout << "Coluna: " << x << " " << "Linha: " << y << " " << "Valor: "<< matriz[x][y] << "\n";
  }
  cout << "\n";
}
  return 0;
}
