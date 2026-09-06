#include <iostream>

double pedir(double notas[],double suma){
    for (int i = 0; i < 3; i++) {
        std::cout << "Nota " << i + 1 << ": ";
        std::cin >> notas[i];
        suma += notas[i];
    }
    return suma;
}

double promedio(const double suma){
    double prom=suma/3;
    return prom;
}

bool aprobacion(const double prom){
    return (prom>=70);
}

int main(){
    double notas[3], suma = 0;
    suma=pedir(notas,suma);
    double prom=promedio(suma);
    std::cout << "Promedio: " << prom << '\n';
    bool aprobado=aprobacion(prom);
    if (aprobado) std::cout << "Aprobado\n";
    else            std::cout << "Reprobado\n";

    return 0;
}