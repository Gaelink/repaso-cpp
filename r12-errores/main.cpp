/*
1) p1.cpp:9:7: error: expected initializer before 'origen'
Compilador y sintaxis, no se finalizo una declaración anterior. Falta punto y coma en una linea arriba de la linea 9.
2) /usr/bin/ld: undefined reference to `Cuenta::depositar(double)'
Enlazador, no encuentra el cuerpo de depositar o no se agrego el .cpp que lo contiene.
3) p3.cpp:6:24: error: cannot convert 'std::string' to 'int'
Compilador y tipos, se intento llamar una funcion que pide int pero recibio un string.
4) p4.cpp:3:10: error: 'vector' is not a member of 'std'
Compilador y libreria faltante, falta hacer #include <vector> para agregar la libreria de vector.
5) /usr/bin/ld: multiple definition of `doble(int)'
Enlazador, el cuerpo de doble esta en un header por dos .cpp. Se necesita dejar la declaración en el header y el cuerpo en un .cpp.
*/