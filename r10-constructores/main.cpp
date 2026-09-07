#include <iostream>

Sesion global("global");  // constructores y destructor imprimen
int main() {
    Sesion a("a");
    { Sesion b("b"); Sesion c("c", 2); }
    std::cout << "--- medio ---\n";
    Sesion d;
}

// Predicciones
/*
Sesion(global)
Sesion(a)
Sesion(b)
Sesion(c,2)
~Sesion(c)
~Sesion(b)

Sesion()
~Sesion()
~Sesion(a)
~Sesion(global)
*/