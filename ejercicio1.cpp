/*Autor: Nayeli Cruz
Fecha: 06/07/2024
1) Función de búsqueda de elementos en un vector de enteros: 
versión 1(devuelve true/false) y versión 2(devuelve posición del elemento encontrado).*/

#include <iostream>

using namespace std;
// buscar un elemento del vector, devuelve true s lo encuentra y false si no lo encuentra
bool buscar(int vector[], int total, int elemento)
{
    for (int k = 0; k < total; k++)
    {
        if (vector[k] == elemento)
            return true;
    }
    return false;
}
// busca un elemento en el vector

int buscarv2(int vactor[], int total, int elemento)
{
    for (int k = 0; k < total; k++)
    {
        if (vactor[k] == elemento)
            return k;
    }
    return -1;
}
int main()
{

    const int max = 10;
    int vector[max];
    // Inicializar uno a uno los elementos del vector
    vector[0] = 20;
    vector[1] = 2;
    vector[2] = 74;
    vector[3] = 4;
    vector[4] = 14;
    vector[5] = 15;
    vector[6] = 1;
    vector[7] = 55;
    vector[8] = 40;
    vector[9] = 19;
    int x = 4;
    bool res = buscar(vector, max, x);
    if (res)
        cout << endl
             << "el elemento" << x << " si esxicte";
    else
        cout << endl
             << "el elemento" << x << " no esxicte";

    x = 100;
    if (buscar(vector, max, x))
        cout << endl
             << "el elemento" << x << " si esxicte";
    else
        cout << endl
             << "el elemento" << x << " no esxicte";

    x = 19;
    int pos = buscarv2(vector, max, x);
    if (pos >= 0)
        cout << endl
             << "elemento" << vector[pos] << " encontrado en la posicion " << pos;
    else
        cout << endl
             << "el elemento" << x << " no esxicte en el vector";
    return 0;
}