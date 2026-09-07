#include <iostream>

int maximo(const int v[], int n) { // C
    int mejor=v[0]; // Un breakpoint muestra que mejor muestra basura. Se cambia por mejor=v[0]
    for (int i = 0; i < n; i++)
        if (v[i] > mejor)
            mejor = v[i];
    return mejor;
}

int main() {
    int datos[] = {5, 12, 8};
    std::cout << "El maximo es: " << maximo(datos, 3) << '\n';
    return 0;
}