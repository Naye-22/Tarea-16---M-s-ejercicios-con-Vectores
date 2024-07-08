/*Autor: Nayeli Cruz
Fecha: 06/07/2024
2) Función que invierte los elementos de un vector */

#include<iostream>
using namespace std;

void Invertir( int x[],int total)
{
    int k = 0;
    int j = total;
    while(k<j){
        int aux = x [k];
        x[k]= x[j];
        x[j] = aux;
        k++;
        j--;

    }
}

// se define la funcion que imprime los elementos del vector
void Imprimir(int x[], int total) {
    for (int i = 0; i < total; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}

int main() {
    int x1[] = {10, 6, 34, 4, 2, 7, 15};
    int total = sizeof(x1) / sizeof(x1[0]); // calcula el tamaño del array correctamente
    cout<<endl<<"--Primer Ejecucion--";    
    cout <<endl<< "Vector Original: ";
    Imprimir(x1, total); // imprime el vector original
    Invertir(x1, total);
    cout << "Vector Invertido: ";
    Imprimir(x1, total); // imprime el vector invertido


    int x2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tl = sizeof(x2) / sizeof(x2[0]); // calcula el tamaño del array correctamente
    cout<<endl<<endl<<"--Segunda Ejecucion--";    
    cout <<endl<< "Vector Original: ";
    Imprimir(x2, tl); // imprime el vector original
    Invertir(x2, tl);
    cout << "Vector Invertido: ";
    Imprimir(x2, tl); // imprime el vector invertido


    int x3[] = {2, 4, 6, 8, 10, 12};
    int TOTAL = sizeof(x3) / sizeof(x3[0]); // calcula el tamaño del array correctamente
    cout<<endl<<endl<<"--Tercera Ejecucion--";    
    cout <<endl<< "Vector Original: ";
    Imprimir(x3, TOTAL); // imprime el vector original
    Invertir(x3, TOTAL);
    cout << "Vector Invertido: ";
    Imprimir(x3, TOTAL); // imprime el vector invertido
    return 0;
}