#include <iostream>
using namespace std;

class Carro {
public:
    string marca;
    string modelo;
    int ano;
    
    void info(){
    cout << "Marca do carro: "<< marca << endl;
    cout << "Modelo do carro: "<< modelo << endl;
    }
};

int main () {
    Carro carro1;
    
    carro1.marca = "Toyota";
    carro1.modelo = "Corolla";
    
    carro1.info();
    
    return 0;
}