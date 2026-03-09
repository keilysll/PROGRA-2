#include "ModCliente.h"

ModCliente::ModCliente(int tam)
{
	this->tam = tam;
	ind = 0;
	personas = new Cliente * [tam];
}

ModCliente::~ModCliente()
{
	delete[] personas;
}

void ModCliente::registrar(Cliente* p)
{
	if (ind < tam)
	{
		personas[ind] = p;
		ind++;
	}
}

Cliente* ModCliente::buscarCliente(string nombre)
{

	for (int i = 0; i < ind; i++)
	{
		if (personas[i]->getNombre() == nombre)
		{
			return personas[i];
		}
	}
	return NULL;

}

void ModCliente::ordenarCli()
{
        for (int i = 0; i < ind - 1; i++)
        {
            for (int j = 0; j < ind - i - 1; j++)
            {
                if (personas[j]->getNombre() > personas[j + 1]->getNombre())
                {
                    Cliente* aux = personas[j];
                    personas[j] = personas[j + 1];
                    personas[j + 1] = aux;
                }
            }
        }
}



string ModCliente::toJson()
{
    stringstream ss;

    ss << "[";

    for (int i = 0; i < ind; i++)
    {
        ss << personas[i]->toJson();

        if (i < ind - 1)
        {
            ss << ",";
        }
    }

    ss << "]";

    return ss.str();
}