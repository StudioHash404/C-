#include<iostream>
using namespace std;

//definição de classe
class Pessoa {
public:
    //attibutos
    string nome;
    int idade;
    //método (função) que aprwsentaa pessoa
    void apresentar() {
        cout << "Olá, meu nome é " << nome << " minha idade é " <<idade << endl;
    }
};
int main()
{
    //criando um objeto
    Pessoa p1;

    p1.nome = "João";
    p1.idade = 18;

    //chamar metodo
    p1.apresentar();

    return 0;
}