

#include <iostream>
#include<string>
#include<sstream>
#include"ModGen.h"

/*
* Class Modelo
* {
* private:
* public:
* static string toJson(Modelo* m);
* bool operator==(Modelo*m)
* static bool compAsc(Modelo*m1,Modelo* m2)
}
return nombre ==m->nombre

*/
void ejemplo1()
{
    ModGen<Modelo>modelos(10);
    modelos.registrar(New ModeloChat("ABC", 128000, 300));

    Modelo* modAbuscar = new ModeloChat("ABC");
    modelo*m = modelos.buscar(modAbuscar)

    cout << modelos.toJson(Modelo::toJson) << endl;
}

string modeloToJson()
int main()
{
    std::cout << "Hello World!\n";
}
