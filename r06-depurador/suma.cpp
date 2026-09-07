#include <iostream>

int suma(const int v[], int n) { // Al usar F5 y tener un breakpoint en el for y avanzar con F10, en el momento que intenta sumar v[3] como es un valor fuera del arreglo, suma valor basura. Se quita el = del <=
    int s = 0;
    for (int i = 0; i < n; i++)
        s += v[i];
    return s;
}

int main() {
    int datos[] = {10, 20, 30};
    std::cout << "Suma: " << suma(datos, 3) << '\n';
    return 0;
}