#include<iostream>
using namespace std;

int main(){

 int fn=0;
 cout << "Cuantas frutas quiere agregar a la lista";
 cin >> fn; 
 
 int frutas[fn];
 
 for(int i = 0; i < fn;i++){
  cout << "ingrese la fruta en la posición" << i;
  cin >> frutas[i];
 }

 for(int i = 0; i < fn; i++)
 {
    cout << "las frutass son:"<< frutas[i] << endl;
 }

}

