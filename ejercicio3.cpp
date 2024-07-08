/*Autor: Nayeli Cruz
Fecha: 06/07/2024
3) Se tiene un vector de N nombres de personas. Diseñe la función que ordena este vector 
usando el algoritmo de ordenación secuencial. 
Debe usar el mismo modelo de ordenación visto en clases (con pequeños ajustes). */

#include<iostream>
using namespace std;

// Función para comparar dos cadenas de caracteres
int compararCadenas(const char* cadenauno, const char* cadenados)
{
    while (*cadenauno && (*cadenauno == *cadenados))
    {
        cadenauno++;
        cadenados++;
    }
    return *(unsigned char*)cadenauno - *(unsigned char*)cadenados;
}

void Ordenar(char* nombres[], int total)
{
    for (int i = 0; i < total; i++)//bucle para cada elemento
    {
        for (int k = i + 1; k < total; k++)//bucle para cada para cada indie del elemento
        {
            //si nombres[i] es mayor que nombres[k] y se realiza el intercambio de punteros.
            if (compararCadenas(nombres[i], nombres[k]) > 0)
            {
                // intercambiar los valores
                char* aux = nombres[i];
                nombres[i] = nombres[k];
                nombres[k] = aux;
            }
        }
    }
}   

// Mostrar los nombres ordenados
void Imprimir(char* nombres[], int total){
    for (int i = 0; i < total; i++) {
        cout << nombres[i]<<" ";
    }
}

int main() {
    char* nombres[] = {"Mercedes", "Pablo", "Nayeli", "Farit"};//se define el vector
    int total = sizeof(nombres) / sizeof(nombres[0]);
    cout<<"Array Desordenado"<<endl;
    Imprimir(nombres, total);
    cout<<endl<<"Array Ordenado"<<endl;
    Ordenar(nombres, total);
    Imprimir(nombres, total);
    return 0;
}