#include <iostream>
#include <string>

#include "Veterinaria.h"
#include "Cliente.h"
#include "Mascota.h"
#include"ModCliente.h"
#include"ModMascota.h"
#include"Servicio.h"
#include"Vacuna.h"
#include"Consulta.h"
#include"ModServicio.h"
#include"Atencion.h"
#include"AtencionSimple.h"
#include"ModAtenciones.h"
#include"AtencionDoble.h"

using namespace std;

Veterinaria vete;

int pregunta1() {
    cout << "----Pregunta 1----" << endl;
    // JSON exacto al formato de tu taller
    string esperado = "{\"clientes\":[{\"ci\":1002,\"nombre\":\"Ana\",\"fono\":77772,\"mascotas\":[{\"nombre\":\"Toby\",\"edad\":3}]},{\"ci\":1001,\"nombre\":\"Carlos\",\"fono\":77771,\"mascotas\":[{\"nombre\":\"Rex\",\"edad\":5},{\"nombre\":\"Mimi\",\"edad\":2}]}],\"servicios\":[],\"atenciones\":[]}";
    cout << esperado << endl;

    // Registramos clientes (CI, nombre, fono)
    vete.registrar(new Cliente(1001, "Carlos", 77771));
    vete.registrar(new Cliente(1002, "Ana", 77772));

    // Registramos mascotas (CI_Dueño, nombre, edad)
    vete.registrar(1001, new Mascota("Rex", 5));
    vete.registrar(1001, new Mascota("Mimi", 2));
    vete.registrar(1002, new Mascota("Toby", 3));

    cout << vete.toJson() << endl;
    if (vete.toJson() == esperado) {
        cout << "Resultado: correcto" << endl;
        return 25;
    }
    cout << "Resultado: incorrecto" << endl;
 
    return 0;
}

int pregunta2() {
    cout << "----Pregunta 2----" << endl;
    string esperado = "{\"clientes\":[{\"ci\":1002,\"nombre\":\"Ana\",\"fono\":77772,\"mascotas\":[{\"nombre\":\"Toby\",\"edad\":3}]},{\"ci\":1001,\"nombre\":\"Carlos\",\"fono\":77771,\"mascotas\":[{\"nombre\":\"Rex\",\"edad\":5},{\"nombre\":\"Mimi\",\"edad\":2}]}],\"servicios\":[{\"tipo\":\"Consulta\",\"codigo\":10,\"descripcion\":\"Revision\",\"costo\":50,\"veterinario\":\"Dr.Perez\"},{\"tipo\":\"Vacunacion\",\"codigo\":20,\"descripcion\":\"Rabia\",\"costo\":30,\"vacuna\":\"Vax-X\"}],\"atenciones\":[]}";
    cout << esperado << endl;

    // registrarServicio(new Consulta(codigo, descripcion, costo, veterinario))
    vete.registrarServicio(new Consulta(10, "Revision", 50, "Dr.Perez"));
    // registrarServicio(new Vacunacion(codigo, descripcion, costo, vacuna))
    vete.registrarServicio(new Vacuna(20, "Rabia", 30, "Vax-X"));

    cout << vete.toJson() << endl;
    if (vete.toJson() == esperado) {
        cout << "Resultado: correcto" << endl;
        return 25;
    }
    cout << "Resultado: incorrecto" << endl;
    
    return 0;
}


int pregunta3() {
    cout << "----Pregunta 3----" << endl;
    string esperado = "{\"clientes\":[{\"ci\":1002,\"nombre\":\"Ana\",\"fono\":77772,\"mascotas\":[{\"nombre\":\"Toby\",\"edad\":3}]},{\"ci\":1001,\"nombre\":\"Carlos\",\"fono\":77771,\"mascotas\":[{\"nombre\":\"Rex\",\"edad\":5},{\"nombre\":\"Mimi\",\"edad\":2}]}],\"servicios\":[{\"tipo\":\"Consulta\",\"codigo\":10,\"descripcion\":\"Revision\",\"costo\":50,\"veterinario\":\"Dr.Perez\"},{\"tipo\":\"Vacunacion\",\"codigo\":20,\"descripcion\":\"Rabia\",\"costo\":30,\"vacuna\":\"Vax-X\"}],\"atenciones\":[{\"AtencionSimple\":{\"id\":1,\"cliente\":{\"ci\":1001,\"nombre\":\"Carlos\",\"fono\":77771},\"mascota\":{\"nombre\":\"Rex\",\"edad\":5}},\"atencion\":{\"tipo\":\"Consulta\",\"codigo\":10,\"descripcion\":\"Revision\",\"costo\":50,\"veterinario\":\"Dr.Perez\"}}]}";
    cout << esperado << endl;
    
    // registrarAtencion(idAtencion, codigoServicio, ciCliente, nombreMascota)
    vete.registrarAtencion(1, 10, 1001, "Rex");

    cout << vete.toJson() << endl;
    if (vete.toJson() == esperado) {
        cout << "Resultado: correcto" << endl;
        return 25;
    }
    cout << "Resultado: incorrecto" << endl;
  
    return 0;
}

int pregunta4() {
    cout << "----Pregunta 4----" << endl;
    string esperado = "{\"clientes\":[{\"ci\":1002,\"nombre\":\"Ana\",\"fono\":77772,\"mascotas\":[{\"nombre\":\"Toby\",\"edad\":3}]},{\"ci\":1001,\"nombre\":\"Carlos\",\"fono\":77771,\"mascotas\":[{\"nombre\":\"Rex\",\"edad\":5},{\"nombre\":\"Mimi\",\"edad\":2}]}],\"servicios\":[{\"tipo\":\"Consulta\",\"codigo\":10,\"descripcion\":\"Revision\",\"costo\":50,\"veterinario\":\"Dr.Perez\"},{\"tipo\":\"Vacunacion\",\"codigo\":20,\"descripcion\":\"Rabia\",\"costo\":30,\"vacuna\":\"Vax-X\"}],\"atenciones\":[{\"AtencionSimple\":{\"id\":1,\"cliente\":{\"ci\":1001,\"nombre\":\"Carlos\",\"fono\":77771},\"mascota\":{\"nombre\":\"Rex\",\"edad\":5}},\"atencion\":{\"tipo\":\"Consulta\",\"codigo\":10,\"descripcion\":\"Revision\",\"costo\":50,\"veterinario\":\"Dr.Perez\"}},{\"AtencionPaquete\":{\"id\":2,\"cliente\":{\"ci\":1002,\"nombre\":\"Ana\",\"fono\":77772},\"mascota\":{\"nombre\":\"Toby\",\"edad\":3}},\"atencion1\":{\"tipo\":\"Consulta\",\"codigo\":10,\"descripcion\":\"Revision\",\"costo\":50,\"veterinario\":\"Dr.Perez\"},\"atencion2\":{\"tipo\":\"Vacunacion\",\"codigo\":20,\"descripcion\":\"Rabia\",\"costo\":30,\"vacuna\":\"Vax-X\"}}]}";
    cout << esperado << endl;

    // registrarAtencion(idAtencion, codServ1, codServ2, ciCliente, nombreMascota)
    vete.registrarAtencion(2, 10, 20, 1002, "Toby");

    cout << vete.toJson() << endl;
    if (vete.toJson() == esperado) {
        cout << "Resultado: correcto" << endl;
        return 25;
    }
    cout << "Resultado: incorrecto" << endl;
    return 0;
}

int main() {
    int nota = pregunta1() + pregunta2() + pregunta3() + pregunta4();
    cout << endl << "====================" << endl;
    cout << "===> NOTA FINAL: " << nota << "/100" << endl;
    cout << "====================" << endl;
    return 0;
}