#include <iostream>
#include <vector>
#include <string>

class Figura {
public:
    virtual ~Figura() = default;
    virtual double area() const = 0;
    virtual std::string nombre() const = 0;
};

class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}
    
    double area() const override {
        return 3.1415926535 * radio * radio;
    }
    
    std::string nombre() const override {
        return "Circulo";
    }
};

class Rectangulo : public Figura {
private:
    double base;
    double altura;
public:
    Rectangulo(double b, double h) : base(b), altura(h) {}
    
    double area() const override {
        return base * altura;
    }
    
    std::string nombre() const override {
        return "Rectangulo";
    }
};

int main() {
    std::vector<Figura*> figuras;

    figuras.push_back(new Circulo(3.0));
    figuras.push_back(new Rectangulo(4.0, 5.0));

    double areaTotal = 0.0;

    for (const Figura* f : figuras) {
        std::cout << f->nombre() << ": " << f->area() << '\n';
        areaTotal += f->area();
    }

    std::cout << "Area total: " << areaTotal << '\n';

    for (Figura* f : figuras) {
        delete f;
    }

    return 0;
}