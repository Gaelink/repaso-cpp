#include <iostream>

void intercambiar1(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}      // por valor
void intercambiar2(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}    // por puntero
void intercambiar3(int& a, int& b){
    int temp=a;
    a=b;
    b=temp;
}    // por referencia

int main(){
    int x=1,y=2;
    intercambiar1(x,y);
    std::cout<<x<<" "<<y<<"\n";
    intercambiar2(&x,&y);
    std::cout<<x<<" "<<y<<"\n";
    intercambiar3(x,y);
    std::cout<<x<<" "<<y<<"\n";

    return 0;
}