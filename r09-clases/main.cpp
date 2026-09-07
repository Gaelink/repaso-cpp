#include <iostream>

class Reserva{
    public:
        bool reservaSala(const std::string s){
            if (s.empty()) return false;
            sala=s; 
            return true;
        }
        bool reservaPersonas(const int p){
            if (p<1 || p>20) return false;
            personas=p;
            return true;
        }
        bool reservaHoras(const int inicio, const int fin){
            if (inicio<0 || fin>23 || inicio>=fin) return false;
            horaInicio=inicio;
            horaFin=fin;
            return true;
        }
    private:
        std::string sala="12";
        int personas=10,horaInicio=8,horaFin=12;
};

int main(){

    return 0;
}