/*Autor: Nayeli Cruz
Fecha: 06/07/2024
4) Diseñe la función que encuentra el elemento mayor de un vector de enteros.*/

#include <iostream>
using namespace std;

// Función para encontrar el elemento mayor de un arreglo de enteros
int encontrarMayor(int arr[], int tam)
{
//se define una variable con el indice 0 del vector
    int mayor = arr[0];
    //se crea el bucle para iterar en cada elemento del array
    for (int i = 1; i < tam; i++) {
        //condicion que evalua si un elemento del array es mayor que otro
        if (arr[i] > mayor) {
            //de ser asi se cambia la variable declarada con el indice 0 por el nuevo valor mayor
            mayor = arr[i];
        }
    }
    return mayor;
}

//funcion que imprime el vector
void Imprimir(int x[], int total) {
    for (int i = 0; i < total; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4, 10, 6};
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout<<endl<<"Primera Ejecucion"<<endl;
    Imprimir(arr, tam); 
    int mayor = encontrarMayor(arr, tam);
    cout << endl<<"El elemento mayor es: " << mayor << endl;


    int array[] = {-3, -6, -9, -1, -20};
    int tama = sizeof(array) / sizeof(array[0]);
    cout<<endl<<"Segunda Ejecucion"<<endl;
    Imprimir(array, tama);    
    int my = encontrarMayor(array, tama);
    cout << endl<<"El elemento mayor es: " << my << endl;


    int x[] = {-3, -2, -1, 0, 1, 2, 3};
    int TM = sizeof(x) / sizeof(x[0]);
    cout<<endl<<"Tercera Ejecucion"<<endl;
    Imprimir(x, TM);    
    int M = encontrarMayor(x, TM);
    cout << endl<<"El elemento mayor es: " << M << endl;
    return 0;
}