#include <iostream>
using namespace std;
/*2. Escriba una función que reciba dos números reales positivos como parámetros y
devuelva el máximo de los dos valores.
*/
float maximo(float a,float b) {
if (a > b) {
return a;
} else {
return b;
}
}

int main() {
float num1, num2;
while(true){
cout << "Ingrese el primer numero: "<<endl;
cin >> num1;
if (num1 <= 0) {
cout << "Error: El numero debe ser positivo." <<endl;
} else {
break;
}
}
while(true){
cout << "Ingrese el segundo numero: "<<endl;
cin >> num2;
if (num2 <= 0) {
cout << "Error: El numero debe ser positivo." <<endl;
} else {
break;
}
}
cout << "El maximo de los dos numeros entre "<< num1 <<" y "<< num2<<" es: " << maximo(num1, num2);
return 0;
}
