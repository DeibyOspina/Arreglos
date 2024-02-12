// crear dos vecotres de n cantidad de numeros que el usuario diligencie, sumar los numeros o valores dados por el usuario en cada vector. y comprar los valores de los vetores 

#include<iostream>
using namespace std;

int main(){

 int ctn1 = 0;
 int ctn2 = 0;
 int suma1 = 0;
 int suma2 = 0;

 cout << "Cuantos numeros quiere agregar al vector 1:";
 cin >> ctn1;
 cout << "Cuantos numeros quiere agregar al vector 2:";
 cin >> ctn2;

 int num1[ctn1];
 int num2[ctn2]; 

 for(int i = 0; i < ctn1;i++)
 {
  cout << "ingrese el numero que desea en la posicion: " << i;
  cin >> num1[i];
 }

 suma1 =  ;

 for(int i = 0; i < ctn2;i++)
 {
  cout << "ingrese el numero que desea en la posicion:" << i;
  cin >> num2[i];
  
 }

 suma2 = ;

 if(suma1 = suma2){
    cout << "la suma de ambos vectores es igual";
    cout << suma1 << "y" << suma2;
 }else{
    cout << "la suma de ambos vectores es diferente";
    cout << suma1 << "y" << suma2;
}


 return 0;
}

 
