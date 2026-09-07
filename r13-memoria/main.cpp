#include <iostream>

class Arreglo {
private:
    int* datos;
    std::size_t n;

public:
    // Constructor normal
    Arreglo(std::size_t n) : datos(new int[n]{}), n(n) {
        std::cout << "[+] Constructor: memoria en " << datos << '\n';
    }

    // Destructor
    ~Arreglo() {
        std::cout << "[-] Destructor: liberando " << datos << '\n';
        delete[] datos;
    }

    // 1. Constructor de copia (Copia profunda)
    Arreglo(const Arreglo& otro) : datos(new int[otro.n]), n(otro.n) {
        std::cout << "[+] Constructor de copia: nueva memoria en " << datos << '\n';
        for (std::size_t i = 0; i < n; ++i) {
            datos[i] = otro.datos[i];
        }
    }

    // 2. Operador de asignación
    Arreglo& operator=(const Arreglo& otro) {
        if (this != &otro) {
            delete[] datos;
            n = otro.n;
            datos = new int[n];
            std::cout << "[=] operator=: nueva memoria en " << datos << '\n';
            for (std::size_t i = 0; i < n; ++i) {
                datos[i] = otro.datos[i];
            }
        }
        return *this;
    }

    void set(std::size_t index, int val) { datos[index] = val; }
    int get(std::size_t index) const { return datos[index]; }
    std::size_t tam() const { return n; }
};

int main() {
    Arreglo a(5);
    Arreglo b = a; // Invoca al constructor de copia (memoria separada)

    b.set(0, 99);

    std::cout << "a[0] tras modificar b: " << a.get(0) << " (Esperado: 0)\n";
    std::cout << "b[0]: " << b.get(0) << " (Esperado: 99)\n";

    return 0;
}