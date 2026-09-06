#include <iostream>
#include <limits>

int leerEnRango(const std::string& msg,int lo,int hi){
    int n=0;
    while (true){
        std::cout<<msg<<"\n";
        bool ok = static_cast<bool>(std::cin>>n); 
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        if (ok && n>=lo && n<=hi) return n;
        std::cout<<"Inserta un entero valido"<<"\n";
    }
}

int main(){
    int x=leerEnRango("Inserta un numero entero entre 1 y 100",1,100);
    std::cout<<x;
    return 0;
}