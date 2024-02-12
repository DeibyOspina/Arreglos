//Crear un vector de n posiciones simulando el juego de buscaminas.mostar cuantas minas hay

#include<iostream>
using namespace std;

int main(){

 int ctns = 0;
 int contador = 0;

 cout << "Cuantos espacio desea que posea el tablero:";
 cin >> ctns;

 string minas[ctns];

 for(int i = 0; i < ctns;i++){
  cout << "ingrese si desea mina o no en la posicion" << i;
  cin >> minas[i];
  if(){
    contador = contador + 1;
  }else{
    contador = contador + 0;
  }
 }

 cout << "la cantidad de minas en el tablero es:" << contador; 

 return 0;
}