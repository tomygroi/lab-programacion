
#include <iostream>
using namespace std;
/*4. Escribir una función que reciba un carácter como argumento y retorne true si es vocal y false en caso contrarios.*/
//bool para convertir el valor en booleano (true or false)
//tolower para convertir a minuscula
bool esVocal(char caracter) {
switch (tolower(caracter)) {
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
return true;
default:
return false;
}
}

int main() {
char caracter;
cout << "Ingrese un caracter: ";
cin >> caracter;
if (esVocal(caracter)) {
cout << "Es una vocal" << endl;
} else {
cout << "No es una vocal" << endl;
}
return 0;
}

