#include<iostream>
using namespace std;

int main(){

 string names2[5];

 for(int i = 0; i < 5 ;i++){
  cout << "Escriba el nombre que desea guardar";
  cin >> names2[i] ;
 }

 for(int i = 0; i < names2->length(); i++)
 {
    cout << names2[i] << endl;
 }

 string names[5]={"Gabriela","Juan","Ivan","Laura","Samuel"};

 for(int i = 0; i < names->length(); i++)
 {
cout << names[i] << endl;
 }

 return 0;
}
