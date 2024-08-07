#include <iostream>
using namespace std;
 
 
 int potencia(int base, int exponente);
 
 int main(){
 	int base, exponente;
 	cout<<"ingrese base "<<endl;
 	cin>>base;
 	cout<<"ingrese exponente" <<endl;
 	cin>>exponente;
 	
 	int resultado = potencia(base, exponente);
 	cout<<"la base es "<<base<<endl<<"exponente "<<exponente<<endl<<"el resultado es: "<<resultado<<endl;
 	return 0;
 }
 
 int potencia(int base, int exponente){
 	long resultado=1;
 	for(int i =0; i< exponente; i++){
 		resultado *=base;
	 }
	 return resultado;
 }
