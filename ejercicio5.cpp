/*Autor: Nayeli Cruz
Fecha: 06/07/2024
5) Diseñe la función que encuentre el elemento menor de un vector de enteros.*/

#include <iostream>
using namespace std;

// Función para encontrar el elemento menor de enteros
int encontrarMenor(int arr[], int tam)
{
    // Se define una variable con el índice 0 del vector
    int menor = arr[0];
    // Se crea el bucle para iterar en cada elemento del array
    for (int i = 1; i < tam; i++) {
        // Condición que evalúa si un elemento del array es menor que otro
        if (arr[i] < menor) {
            // De ser así, se cambia la variable declarada con el índice 0 por el nuevo valor menor
            menor = arr[i];
        }
    }
    return menor;
}

// Función que imprime el vector
void Imprimir(int x[], int total) {
    for (int i = 0; i < total; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4, 10, 6};
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout << endl << "Primera Ejecucion" << endl;
    Imprimir(arr, tam);
    int menor = encontrarMenor(arr, tam);
    cout << "El elemento menor es: " << menor << endl;

    int array[] = {-3, -6, -9, -1, -20};
    int tama = sizeof(array) / sizeof(array[0]);
    cout << endl << "Segunda Ejecucion" << endl;
    Imprimir(array, tama);
    int mn = encontrarMenor(array, tama);
    cout << "El elemento menor es: " << mn << endl;

    int x[] = {-3, -2, -1, 0, 1, 2, 3};
    int TM = sizeof(x) / sizeof(x[0]);
    cout << endl << "Tercera Ejecucion" << endl;
    Imprimir(x, TM);
    int N = encontrarMenor(x, TM);
    cout << "El elemento menor es: " << N << endl;

    return 0;
}