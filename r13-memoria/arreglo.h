#include <cstddef>

class Arreglo { // Se uso IA para la clase
private:
    int* datos;
    std::size_t tam;

public:
    // Constructor normal
    Arreglo(std::size_t tam) : tam(tam), datos(new int[tam]{}) {}

    // 1. DESTRUCTOR
    ~Arreglo() {
        delete[] datos;
    }

    // 2. CONSTRUCTOR DE COPIA
    Arreglo(const Arreglo& otro) : tam(otro.tam), datos(new int[otro.tam]) {
        for (std::size_t i = 0; i < tam; ++i) {
            datos[i] = otro.datos[i];
        }
    }

    // 3. OPERADOR DE ASIGNACIÓN (operator=)
    Arreglo& operator=(const Arreglo& otro) {
        if (this != &otro) {        // Evita la autoasignación (a = a)
            delete[] datos;         // Liberar memoria actual

            tam = otro.tam;
            datos = new int[tam];   // Reservar nueva memoria
            for (std::size_t i = 0; i < tam; ++i) {
                datos[i] = otro.datos[i]; // Copiar elementos
            }
        }
        return *this;
    }
};