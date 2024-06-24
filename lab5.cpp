#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Crear una matriz cuadrada de números enteros de FxC.  Siendo F y C declaradas como constantes.
Calcular:

    - Promedio general de la matriz.
    - Suma de pares de cada columna
    - Suma de impares de cada fila
    - Posición máximo
    - Posición mínimo
    - Ordenar de forma ascendente la fila 2
    - Ordenar en forma descendente la columna 3
    -  Intercambiar la 2 y 4 columna */

int main(int argc, char const *argv[])
{
    int F = 4, C = 4;
    int matriz[F][C];
    int sumaPares = 0, sumaImpares = 0;
    int maximo, minimo;

    srand(time(0));

    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }

    cout << "Matriz: " << endl;
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (matriz[i][j] % 2 == 0) /*Suma si es que hay numeros impares sacando el resto de la diuvision por 2*/
            {
                sumaPares += matriz[i][j];
            }
            else
            {
                sumaImpares += matriz[i][j];
            }
        }
    }

    maximo = matriz[0][0];
    minimo = matriz[0][0];
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (matriz[i][j] > maximo)
            {
                maximo = matriz[i][j];
            }
            if (matriz[i][j] < minimo)
            {
                minimo = matriz[i][j];
            }
        }
    }

    cout << "Suma de pares: " << sumaPares << endl;
    cout << "Suma de impares: " << sumaImpares << endl;
    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;

    // Ordenar de forma ascendente la fila 2 (fila índice 1)
    for (int i = 0; i < C - 1; i++)
    {
        for (int j = 0; j < C - i - 1; j++)
        {
            if (matriz[1][j] > matriz[1][j + 1])
            {
                int temp = matriz[1][j];
                matriz[1][j] = matriz[1][j + 1];
                matriz[1][j + 1] = temp;
            }
        }
    }

    cout << "Fila 2 ordenada ascendentemente: ";
    for (int j = 0; j < C; j++)
    {
        cout << matriz[1][j] << " ";
    }
    cout << endl;

    // Ordenar en forma descendente la columna 3 (columna índice 2)
    for (int i = 0; i < F - 1; i++)
    {
        for (int j = 0; j < F - i - 1; j++)
        {
            if (matriz[j][2] < matriz[j + 1][2])
            {
                int temp = matriz[j][2];
                matriz[j][2] = matriz[j + 1][2];
                matriz[j + 1][2] = temp;
            }
        }
    }

    cout << "Columna 3 ordenada descendentemente: ";
    for (int i = 0; i < F; i++)
    {
        cout << matriz[i][2] << " ";
    }
    cout << endl;

    cout << "Intercambiando columnas 2 y 4:" << endl;
    for (int i = 0; i < F; i++)
    {
        int temp = matriz[i][1];
        matriz[i][1] = matriz[i][3];
        matriz[i][3] = temp;
    }

    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
