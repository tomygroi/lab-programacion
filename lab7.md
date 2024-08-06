## Facundo Tomás Groizard
# Informe sobre manipulacion de cadenas en C++
## Objetivo
El objetivo de este informe es que los alumnos demuestren su comprensión sobre la
manipulación de cadenas en C++ utilizando tanto arreglos de caracteres (`char[]`) como
la clase `string` de la biblioteca estándar. Deben incluir ejemplos de código,
explicaciones y comentarios sobre las diferencias y ventajas de cada enfoque.
`cpp`
# Instrucciones
El informe debe estar escrito en formato Markdown y debe incluir las siguientes secciones:
## 1. Introducción
* Breve introducción sobre qué son las cadenas de caracteres en C++.
* Diferencias básicas entre `char[]` y `string`
    
    ```cpp
    En C++, una cadena de caracteres es una secuencia de caracteres almacenada en memoria. Existen dos maneras principales de trabajar con cadenas de caracteres en C++:

    1. Cadenas de caracteres en estilo C (C-strings):
        - Son simplemente arreglos de caracteres (char) que terminan con un carácter nulo ('\0').
        - ejemplo, la cadena "Hola" se representa internamente como {'H', 'o', 'l', 'a', '\0'}.
        - Estas cadenas se manipulan mediante funciones de la biblioteca estándar como strcpy(), strlen(), y strcmp().

    2. Cadenas de caracteres en estilo C++ (string):
        - se representan mediante la clase string de la biblioteca estándar de C++ proporciona una interfaz más moderna y conveniente para trabajar con cadenas.
        - Ofrece métodos para concatenar, comparar, buscar y modificar cadenas, y maneja automáticamente la memoria. Por ejemplo, puedes crear una cadena con string saludo = "Hola"; y utilizar métodos como saludo. length() para obtener su longitud o saludo.substr(0, 2) para obtener una subcadena.

    Ambas formas tienen sus usos y ventajas, pero string es generalmente preferida por su facilidad de uso y manejo automático de memoria.
    ```
## 2. Declaración e Inicialización de Cadenas
* Ejemplo de cómo declarar e inicializar una cadena usando `char[]`.
    ```cpp
    #include <iostream>

    int main() {
        // Declaración e inicialización de una cadena de caracteres
        char saludo[] = "Hola, mundo!";

        // Imprimir la cadena
        cout << saludo << endl;

        return 0;
    }
    ```
* Ejemplo de cómo declarar e inicializar una cadena usando `string`.
    ```cpp
    #include <iostream>
    #include <string>  // Necesario para string

    int main() {
        // Declaración e inicialización de una cadena usando string
        string saludo = "Hola, mundo!";

        // Imprimir la cadena
        cout << saludo << endl;

        return 0;
    }
    ```

## 3. Concatenación de Cadenas
* Ejemplo de concatenación usando `char[]` y la función `strcat`.
    ```cpp
    #include <iostream>
    #include <cstring>  // Necesario para la función strcat

    int main() {
        // Declarar y inicializar las cadenas
        char cadena1[50] = "Hola, ";  // Asegúrate de que el tamaño del arreglo sea suficiente
        char cadena2[] = "mundo!";

        // Concatenar cadena2 al final de cadena1
        strcat(cadena1, cadena2);

        // Imprimir el resultado
        cout << cadena1 << endl;

        return 0;
    }
    ```
* Ejemplo de concatenación usando `string` y el operador +.
    ```cpp
    #include <iostream>
    #include <string>  // Necesario para string

    int main() {
        // Declarar e inicializar las cadenas
        string cadena1 = "Hola, ";
        string cadena2 = "mundo!";

        // Concatenar cadenas usando el operador +
        string resultado = cadena1 + cadena2;

        // Imprimir el resultado
        cout << resultado << endl;

        return 0;
    }
    ```

## 4. Longitud de una Cadena
* Ejemplo de cómo obtener la longitud de una cadena usando `char[]` y la función `strlen`.
    ```cpp
    #include <iostream>
    #include <cstring>  // Necesario para la función strlen

    int main() {
        // Declarar e inicializar una cadena de caracteres
        char mensaje[] = "Hola, mundo!";

        // Obtener la longitud de la cadena usando strlen
        size_t longitud = strlen(mensaje);

        // Imprimir la longitud
        cout << "La longitud de la cadena es: " << longitud << endl;

        return 0;
    }
    ```
* Ejemplo de cómo obtener la longitud de una cadena usando `string` y el método `length`.
    ```cpp
    #include <iostream>
    #include <string>  // Necesario para string

    int main() {
        // Declarar e inicializar una cadena usando string
        string mensaje = "Hola, mundo!";

        // Obtener la longitud de la cadena usando el método length()
        size_t longitud = mensaje.length();

        // Imprimir la longitud
        cout << "La longitud de la cadena es: " << longitud << endl;

        return 0;
    }
    ```
## 5. Subcadenas
* Ejemplo de cómo obtener una subcadena usando `string` y el método `substr`.
    ```cpp
    #include <iostream>
    #include <string>  // Necesario para string

    int main() {
        // Declarar e inicializar una cadena usando string
        string mensaje = "Hola, mundo!";

        // Obtener una subcadena desde la posición 0 y con longitud 5
        string subcadena = mensaje.substr(0, 5); // "Hola, "

        // Imprimir la subcadena
        cout << "La subcadena es: " << subcadena << endl;

        return 0;
    }
    ```

## 6. Comparación de Cadenas
* Ejemplo de comparación usando `char[]` y la función `strcmp`.
    ```cpp
    #include <iostream>
    #include <cstring>  // Necesario para la función strcmp

    int main() {
        // Declarar e inicializar dos cadenas de caracteres
        char cadena1[] = "Hola";
        char cadena2[] = "Hola";
        char cadena3[] = "Mundo";

        // Comparar las cadenas
        int resultado1 = strcmp(cadena1, cadena2);  // Comparar "Hola" con "Hola"
        int resultado2 = strcmp(cadena1, cadena3);  // Comparar "Hola" con "Mundo"

        // Interpretar y mostrar el resultado de la comparación
        cout << "Comparando cadena1 con cadena2: " << endl;
        if (resultado1 == 0) {
            cout << "Las cadenas son iguales." << endl;
        } else if (resultado1 < 0) {
            cout << "cadena1 es menor que cadena2." << endl;
        } else {
            cout << "cadena1 es mayor que cadena2." << endl;
        }

        cout << "Comparando cadena1 con cadena3: " << endl;
        if (resultado2 == 0) {
            cout << "Las cadenas son iguales." << endl;
        } else if (resultado2 < 0) {
            cout << "cadena1 es menor que cadena3." << endl;
        } else {
            cout << "cadena1 es mayor que cadena3." << endl;
        }

        return 0;
    }
    ```
* Ejemplo de comparación usando `string` y operadores relacionales.
    ```cpp
    #include <iostream>
    #include <string>  // Necesario para string

    int main() {
        // Declarar e inicializar dos cadenas usando string
        string cadena1 = "Hola";
        string cadena2 = "Hola";
        string cadena3 = "Mundo";

        // Comparar las cadenas usando operadores relacionales
        if (cadena1 == cadena2) {
            cout << "cadena1 es igual a cadena2." << endl;
        } else {
            cout << "cadena1 no es igual a cadena2." << endl;
        }

        if (cadena1 < cadena3) {
            cout << "cadena1 es menor que cadena3." << endl;
        } else {
            cout << "cadena1 no es menor que cadena3." << endl;
        }

        if (cadena1 > cadena3) {
            cout << "cadena1 es mayor que cadena3." << endl;
        } else {
            cout << "cadena1 no es mayor que cadena3." << endl;
        }

        return 0;
    }
    ```

## 7. Otras Operaciones Útiles
* Ejemplo de cómo convertir una cadena a mayúsculas o minúsculas usando `string` y las funciones `toupper` y `tolower`.
    ```cpp
    #include <iostream>
    #include <string>
    #include <cctype>  // Para toupper y tolower

    // Función para convertir una cadena a mayúsculas
    string toUpperCase(const string& input) {
        string result = input;
        for (char& c : result) {
            c = toupper(static_cast<unsigned char>(c));
        }
        return result;
    }

    // Función para convertir una cadena a minúsculas
    string toLowerCase(const string& input) {
        string result = input;
        for (char& c : result) {
            c = tolower(static_cast<unsigned char>(c));
        }
        return result;
    }

    int main() {
        string original = "Hola Mundo";

        string upper = toUpperCase(original);
        string lower = toLowerCase(original);

        cout << "Original: " << original << endl;
        cout << "Mayúsculas: " << upper << endl;
        cout << "Minúsculas: " << lower << endl;

        return 0;
    }

    ```
* Ejemplo de cómo buscar caracteres o subcadenas en una `string` usando el método `find`.
    ```cpp
    #include <iostream>
    #include <string>

    int main() {
        // Cadena en la que realizaremos la búsqueda
        string texto = "Hola, mundo! Bienvenido a C++.";

        // Buscar un carácter en la cadena
        char buscarCaracter = 'm';
        size_t posicionCaracter = texto.find(buscarCaracter);

        if (posicionCaracter != string::npos) {
            cout << "Carácter '" << buscarCaracter << "' encontrado en la posición: " << posicionCaracter << endl;
        } else {
            cout << "Carácter '" << buscarCaracter << "' no encontrado." << endl;
        }

        // Buscar una subcadena en la cadena
        string buscarSubcadena = "mundo";
        size_t posicionSubcadena = texto.find(buscarSubcadena);

        if (posicionSubcadena != string::npos) {
            cout << "Subcadena '" << buscarSubcadena << "' encontrada en la posición: " << posicionSubcadena << endl;
        } else {
            cout << "Subcadena '" << buscarSubcadena << "' no encontrada." << endl;
        }

        // Buscar una subcadena a partir de una posición específica
        string buscarSubcadenaDesde = "Bienvenido";
        size_t posicionDesde = texto.find(buscarSubcadenaDesde, 10);

        if (posicionDesde != string::npos) {
            cout << "Subcadena '" << buscarSubcadenaDesde << "' encontrada a partir de la posición 10 en: " << posicionDesde << endl;
        } else {
            cout << "Subcadena '" << buscarSubcadenaDesde << "' no encontrada a partir de la posición 10." << endl;
        }

        return 0;
    }
    ```
* Conversión de cadenas a números
    ```cpp
    #include <iostream>
    #include <string>

    int main() {
        string strInt = "123";
        string strLong = "123456789";
        string strFloat = "123.456";
        string strDouble = "123.456789";
        
        try {
            // Convertir a entero
            int intValue = stoi(strInt);
            cout << "Entero: " << intValue << endl;

            // Convertir a long
            long longValue = stol(strLong);
            cout << "Long: " << longValue << endl;

            // Convertir a float
            float floatValue = stof(strFloat);
            cout << "Float: " << floatValue << endl;

            // Convertir a double
            double doubleValue = stod(strDouble);
            cout << "Double: " << doubleValue << endl;
            
            // Convertir a long long
            long long longLongValue = stoll(strLong);
            cout << "Long Long: " << longLongValue << endl;
        } catch (const invalid_argument& e) {
            cout << "Error: Argumento no válido" << endl;
        } catch (const out_of_range& e) {
            cout << "Error: Valor fuera de rango" << endl;
        }

        return 0;
    }
    ```
* Pasaje de Cadenas a Funciones en C++
    - Pasaje de Cadenas Usando `char[]`
        ```cpp
        #include <iostream>
        #include <cstring>  // Para strlen

        // Función que toma un arreglo de caracteres como parámetro
        void imprimirCadena(const char str[]) {
            cout << "Cadena: " << str << endl;
        }

        // Función que toma un arreglo de caracteres y su longitud como parámetros
        void contarCaracteres(const char str[], int longitud) {
            cout << "Número de caracteres: " << longitud << endl;
        }

        int main() {
            // Definir una cadena como un arreglo de caracteres
            char miCadena[] = "Hola, Mundo!";
            
            // Pasar el arreglo de caracteres a una función
            imprimirCadena(miCadena);

            // Contar la longitud de la cadena y pasarla a otra función
            int longitud = strlen(miCadena); // Utiliza strlen de <cstring>
            contarCaracteres(miCadena, longitud);

            return 0;
        }
        ```
    - Pasaje de Cadenas Usando `string`
        ```cpp
        #include <iostream>
        #include <string>

        // Función que toma un string por valor
        void imprimirCadena(string str) {
            cout << "Cadena: " << str << endl;
        }

        int main() {
            string miCadena = "Hola, Mundo!";
            
            // Pasar string por valor
            imprimirCadena(miCadena);

            return 0;
        }
        ```
        
## 8. Conclusión
* Resumen de las principales diferencias entre `char[]` y `string`.
```cpp
char[] es más básico y requiere más control manual, mientras que ´string ofrece una interfaz más amigable y segura, facilitando la manipulación de cadenas en C++.
```
* Ventajas y desventajas de usar cada uno.



#### `char[]`
* Ventajas:

  - Control directo de memoria.
  - Potencialmente más eficiente en uso de memoria.

* Desventajas:

  - Mayor propensión a errores de manejo de memoria.
  - Funcionalidad limitada.
  - Más complejo de usar.
#### `string`
* Ventajas:

  - Gestión automática de memoria.
  - Métodos y operadores convenientes.
  - Más seguro y fácil de usar.

* Desventajas:

  - Puede tener una ligera sobrecarga de rendimiento.
  - Menor control directo sobre la memoria.


### Recomiendo usar char[] cuando:

- Necesitas control directo sobre la memoria.
- Trabajas en sistemas con recursos limitados donde la eficiencia es crucial.
- Manipulas datos de tamaño fijo conocido de antemano.
- Estás trabajando en entornos que requieren un uso mínimo de bibliotecas, como sistemas embebidos.

### Recomiendo usar string cuando:

- Prefieres una manipulación de cadenas más segura y sencilla.
- Necesitas funcionalidades avanzadas como concatenación, búsqueda y extracción de subcadenas.
- Trabajas en aplicaciones donde la gestión automática de memoria y la facilidad de uso son más importantes que la eficiencia máxima.
- Prefieres código más legible y mantenible.
## 9. Referencias
* Cualquier referencia utilizada para crear el informe.

    [ChatGPT](https://chat.openai.com)

    [Markdown](https://markdown.es)
    
    [Gemini](https://gemini.google.com)

    [GitHub](https://docs.github.com/es/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
## Criterios de Evaluación
* Estructura y Organización

* Contenido y Comprensión

* Explicaciones y Comentarios

* Formato y Estilo
