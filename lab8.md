```Facundo Tomás Groizard```

# Test sobre estructuras y arreglos de estructuras
1. Dada la siguiente definición de una estructura de datos, ¿cómo se declara un vector de 10 elementos de tipo `product` y se asignan valores al primer elemento?
```cpp
    struct product{
        int id;
        string name;
        char description[100];
        float price;
        int quantity;
    };
```
2. Indique qué afirmación en relación con el siguiente programa es correcta:
```cpp
struct person{
        char name[50];
        int age;
    };

    struct filming {
        char place[50];
        float budget;
    };

    struct movie {
        struct person director;
        struct person actor1;
        struct person actor2;
        struct filming location;
    };

```

* ~~a) Se producirá un error de compilación porque la estructura `person` está repetida
en tres miembros de la estructura `movie`.~~
* ~~b) Se produce un error de compilación porque un miembro de una estructura no
puede ser otra estructura.~~
* ~~c) La  sentencia `strcpy(my_movie.director.name, "Federico Fellini");`genera un error en tiempo de compilación.~~
* **d) Todas las afirmaciones anteriores son falsas.**

``En C++, es completamente válido que una estructura contenga otras estructuras como miembros, y la estructura person puede ser utilizada múltiples veces sin problemas. Además, la sentencia strcpy(my_movie.director.name, "Federico Fellini"); es correcta y no debería generar un error en tiempo de compilación, siempre y cuando se incluya la cabecera <cstring>.``

3. Utilizando la estructura del punto 1a, analizá el siguiente programa.
```cpp
    cout << "enter product: " << endl;
    struct product p1;
    cout <<"enter id" << endl;
    cin >> p1.id;
    cout << "enter name" << endl;
    getline(cin, p1.name);
    cout << "enter description" << endl;
    cin.getline(p1.description, 100);
    cout << "enter price" << endl;
    cin >> p1.price;
    cout << "enter quantity" << endl;
    cin >> p1.quantity;
    cout << p1.id << endl;
    cout << p1.name << endl;
    cout << p1.description << endl;
    cout << p1.price << endl;
    cout << p1.quantity << endl;
    cout << "------------------" << endl;
```
* Ejecuta el codigo en el compilador
* Funciona correctamente? **Si**/~~No~~
* En caso que no funcione, dar una solucion y fundamentarla.
### Solución:

```cpp
    cout << "enter product: " << endl;
    struct product p1;
    cout <<"enter id" << endl;
    cin >> p1.id;
    cin.ignore(); // <-- Limpia el buffer para que no ignore el getline
    cout << "enter name" << endl;
    getline(cin, p1.name);
    cout << "enter description" << endl;
    cin.getline(p1.description, 100);
    cout << "enter price" << endl;
    cin >> p1.price;
    cout << "enter quantity" << endl;
    cin >> p1.quantity;
    cout << p1.id << endl;
    cout << p1.name << endl;
    cout << p1.description << endl;
    cout << p1.price << endl;
    cout << p1.quantity << endl;
    cout << "------------------" << endl;
```

# Ejercicio práctico
Te piden que realices un programa para la gestion de una biblioteca.
Los datos de los libros son los siguiente:
* título
* autor
* ISBN (cadena de 17 caracteres) 
* prestado (true/false)

Escribir el programa en C++ que:

* Defina una estructura para almacenar los datos de cualquier libro.
* Ingresa los datos de 2 libros por teclado y almacenarlos en un arreglo
* Verificar que los datos ingresados no representan ejemplares de un mismo tipo
* Imprimir los datos por pantalla
#### ***Nota*** 
Utilizar funciones para todas las operaciones
```cpp
#include <iostream>
#include <string>

using namespace std;

// Estructura para almacenar los datos de un libro
struct Book {
    string titulo;
    string autor;
    string isbn; // ISBN como cadena de 17 caracteres
    bool prestado;
};

// Función para ingresar los datos de un libro
void inputBook(Book &book) {
    cout << "Titulo: ";
    getline(cin, book.titulo);
    cout << "Autor: ";
    getline(cin, book.autor);
    cout << "ISBN (17 caracteres): ";
    getline(cin, book.isbn);
    cout << "¿Prestado? (T/F): ";
    cin >> book.prestado;
    cin.ignore(); // Limpiar el buffer de entrada
}

// Función para verificar si dos libros tienen el mismo ISBN
bool isDuplicate(const Book &book1, const Book &book2) {
    return book1.isbn == book2.isbn;
}

// Función para imprimir los datos de un libro
void printBook(const Book &book) {
    cout << "Titulo: " << book.titulo << endl;
    cout << "Autor: " << book.autor << endl;
    cout << "ISBN: " << book.isbn << endl;
    cout << "¿Prestado?: " << (book.prestado ? "Yes" : "No") << endl;
}

int main() {
    Book books[2];

    // Ingreso de datos para el primer libro
    cout << "Introduce los detalles del libro 1:" << endl;
    inputBook(books[0]);

    // Ingreso de datos para el segundo libro
    cout << "Introduze los detalles del libro 2:" << endl;
    inputBook(books[1]);

    // Impresión de datos
    cout << "\n Detalles del libro 1:" << endl;
    printBook(books[0]);

    cout << "\n Detalles del libro 2:" << endl;
    printBook(books[1]);

    return 0;
}
```