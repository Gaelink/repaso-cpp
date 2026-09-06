#include <iostream>

int main(){
    const int N = 5;
    int d[N] = {10, 20, 30, 40, 50};

    int suma = 0;                            // A: sumar todo
    for (int i = 0; i < N; i++) suma += d[i];  // 10+20+30+40+50+d[5](No existe y da un valor basura)

    int cuantos = 0;                         // B: contar > 25
    for (int i = 0; i < N; i++)
        if (d[i] > 25) cuantos++;           // Se salta el primer elemento, cuantos = 3

    int k = 0;                               // C: imprimir todo
    while (k < N) { std::cout << d[k] << ' '; k++; } // La variable de control (k) no se cambia entonces es un ciclo sin fin, solo imprime 10 10 10 10

    return 0;
}