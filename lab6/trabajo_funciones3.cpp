#include <iostream>
using namespace std;
/*3. Escribir una función que reciba dos argumentos enteros y devuelva true si son divisibles y false si no lo son.
*/
//bool para convertir el valor en booleano (true or false)
bool divisibles(int a, int b){
if(a%b==0){
return true;
}else{
return false;
}
}

int main(){
int a,b;
cout<<"Ingrese el primer numero: " <<endl;
cin>>a;
cout<<"Ingrese el segundo numero: "<<endl;
cin>>b;
if(divisibles(a,b)){
cout<<"True: Son divisibles";
}else{
cout<<"False: No son divisibles";
}
return 0;
}
