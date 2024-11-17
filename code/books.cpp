#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t; cin >> n >> t;

    vector <int> libros(n);

    for (int i = 0; i < n; i++) {
        cin >> libros[i]; //se lee la lista
    }

    int sol = 0;
    int inicio = 0;
    int contador = 0;
    for (int fin = 0; fin < n; fin++) { //por cada libro:
        contador += libros[fin]; //se agregan primeros dos elementos en lista
        while(contador > t and inicio <= fin){ //si se pasa:
            contador -= libros[inicio]; //remover el primer elemento
            inicio++; //recorrer rango
        }
        sol=max(sol, fin - inicio + 1); //definir mayor rango posible
    }
    cout << sol << '\n';
}