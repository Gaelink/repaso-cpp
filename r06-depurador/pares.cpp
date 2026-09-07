#include <iostream>

int pares(const int v[], int n) { // B
    int c = 0;
    for (int i = 0; i < n; i++)
        if (v[i] % 2 == 0) c++; // Se inserta un logpoint para revisar las variables. Se observa que en vez de contar pares cuenta impares, se cambia el != por ==.
    return c;
}

int main() {
    int datos[] = {2, 4, 6, 7};
    std::cout << "Total de pares: " << pares(datos, 4) << '\n';
    return 0;
}