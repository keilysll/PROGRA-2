/*
Un operador de telefonia vende diferentes productos a sus clientes
El sistema debe permitir realizar las siguientes operaciones:
- Registrar productos: TV,Internet,Telefonia y Packs(Grupo de productos)
- Registrar ventas
*/
#include "Operador.h"
#include<iostream>
#include<string>
#include<sstream>
#include"Producto.h"
#include"Telefonia.h"
#include"Tv.h"
#include"Internet.h"
using namespace std;
int pregunta1()
{
	cout << "----Pregunta 1----" << endl;
	cout << "Resultado esperado:" << endl;
	cout << "{\"nombre\":\"claro\",\"productos\":[{\"nombre\":\"TV1\",\"descripcion\":\"Plan de tv\",\"canales\":\"1,2,3,4,5,6\",\"precio\":200},{\"nombre\":\"TL1\",\"descripcion\":\"Plan de telefonia\",\"minutos\":180,\"precio\":200},{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"velocidadSubida\":40,\"velocidadSubida\":60,\"precio\":200}],\"ventas\":[{\"numero\":1,\"productos\":[{\"nombre\":\"TV1\",\"descripcion\":\"Plan de tv\",\"canales\":\"1,2,3,4,5,6\",\"precio\":200},{\"nombre\":\"TL1\",\"descripcion\":\"Plan de telefonia\",\"minutos\":180,\"precio\":200}]},{\"numero\":2,\"productos\":[{\"nombre\":\"TL1\",\"descripcion\":\"Plan de telefonia\",\"minutos\":180,\"precio\":200},{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"velocidadSubida\":40,\"velocidadSubida\":60,\"precio\":200}]}]}" << endl;
	Operador claro("claro");
	// Registrar un producto de TV (nombre, precio, descripcion, canales)
	claro.registrarProducto("TV1", 200, "Plan de tv", "1,2,3,4,5,6");
	// Registrar un producto de Telefonia (nombre, precio, descripcion, minutos)
	claro.registrarProducto("TL1", 200, "Plan de telefonia", 180);
	// Registrar un producto de Internet (nombre, precio, descripcion, velocidadSubida,velocidadBajada)
	claro.registrarProducto("IT1", 200, "Plan de internet", 40, 60);
	// Registrar venta(num)
	claro.registrarVenta(1);
	// Registrar venta(num)
	claro.registrarVenta(2);
	// Registrar productos en venta
	claro.registrarProductoEnVenta(1, "TV1");
	claro.registrarProductoEnVenta(1, "TL1");
	claro.registrarProductoEnVenta(2, "TL1");
	claro.registrarProductoEnVenta(2, "IT1");
	cout << "Resultado obtenido:" << endl;
	cout << claro.toJson() << endl;
	if (claro.toJson() == "{\"nombre\":\"claro\",\"productos\":[{\"nombre\":\"TV1\",\"descripcion\":\"Plan de tv\",\"canales\":\"1,2,3,4,5,6\",\"precio\":200},{\"nombre\":\"TL1\",\"descripcion\":\"Plan de telefonia\",\"minutos\":180,\"precio\":200},{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"velocidadSubida\":40,\"velocidadSubida\":60,\"precio\":200}],\"ventas\":[{\"numero\":1,\"productos\":[{\"nombre\":\"TV1\",\"descripcion\":\"Plan de tv\",\"canales\":\"1,2,3,4,5,6\",\"precio\":200},{\"nombre\":\"TL1\",\"descripcion\":\"Plan de telefonia\",\"minutos\":180,\"precio\":200}]},{\"numero\":2,\"productos\":[{\"nombre\":\"TL1\",\"descripcion\":\"Plan de telefonia\",\"minutos\":180,\"precio\":200},{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"velocidadSubida\":40,\"velocidadSubida\":60,\"precio\":200}]}]}")
	{
		cout << "Resultado: correcto" << endl;
		return 20;
	}
	cout << "Resultado: incorrecto" << endl;
	return 0;
}

int pregunta2()
{
	cout << "----Pregunta 2----" << endl;
	cout << "Resultado ESPERADO:" << endl;
	cout << "{\"nombre\":\"claro\",\"productos\":[{\"nombre\":\"TV1\",\"descripcion\":\"Plan de tv\",\"canales\":\"1,2,3,4,5,6\",\"precio\":200},{\"nombre\":\"TL1\",\"descripcion\":\"Plan de telefonia\",\"minutos\":180,\"precio\":200},{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"minutos\":40,\"precio\":200},{\"nombre\":\"PACK Silver\",\"precio\":200,\"desc\":20,\"precio silver\":160,\"internet\":{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"minutos\":40,\"precio\":200},\"tv\":{\"nombre\":\"TV1\",\"descripcion\":\"Plan de tv\",\"canales\":\"1,2,3,4,5,6\",\"precio\":200},\"descuento\":20},{\"nombre\":\"PACK Gold\",\"precio\":500,\"desc\":30,\"precio gold\":350,\"internet\":{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"minutos\":40,\"precio\":200},\"tv\":{\"nombre\":\"TV1\",\"descripcion\":\"Plan de tv\",\"canales\":\"1,2,3,4,5,6\",\"precio\":200},\"telefonia\":{\"nombre\":\"TL1\",\"descripcion\":\"Plan de telefonia\",\"minutos\":180,\"precio\":200},\"descuento\":30}],\"ventas\":[{\"numero\":1,\"productos\":[{\"nombre\":\"PACK Silver\",\"precio\":200,\"desc\":20,\"precio silver\":160,\"internet\":{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"minutos\":40,\"precio\":200},\"tv\":{\"nombre\":\"TV1\",\"descripcion\":\"Plan de tv\",\"canales\":\"1,2,3,4,5,6\",\"precio\":200},\"descuento\":20},{\"nombre\":\"TL1\",\"descripcion\":\"Plan de telefonia\",\"minutos\":180,\"precio\":200}]},{\"numero\":2,\"productos\":[{\"nombre\":\"PACK Gold\",\"precio\":500,\"desc\":30,\"precio gold\":350,\"internet\":{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"minutos\":40,\"precio\":200},\"tv\":{\"nombre\":\"TV1\",\"descripcion\":\"Plan de tv\",\"canales\":\"1,2,3,4,5,6\",\"precio\":200},\"telefonia\":{\"nombre\":\"TL1\",\"descripcion\":\"Plan de telefonia\",\"minutos\":180,\"precio\":200},\"descuento\":30},{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"minutos\":40,\"precio\":200}]}]}" << endl;
	
	Operador claro("claro");
	// Registrar un producto de TV (nombre, precio, descripcion, canales)
	claro.registrarProducto("TV1", 200, "Plan de tv", "1,2,3,4,5,6");
	// Registrar un producto de Telefonia (nombre, precio, descripcion, minutos)
	claro.registrarProducto("TL1", 200, "Plan de telefonia", 180);
	// Registrar un producto de Internet (nombre, precio, descripcion, velocidad)
	claro.registrarProducto("IT1", 200, "Plan de internet", 40);
	// Registrar un pack (nombre, precio, nombre producto internet, nombre producto TV)
	claro.registrarPack("PACK Silver", 200, "IT1", "TV1");
	// Registrar un pack (nombre, precio, nombre producto internet, nombre producto TV, nombre producto Telf)
	claro.registrarPack("PACK Gold", 500, "IT1", "TV1", "TL1");
	// Registrar venta(num)
	claro.registrarVenta(1);
	// Registrar venta(num)
	claro.registrarVenta(2);
	// Registrar productos en venta
	claro.registrarProductoEnVenta(1, "PACK Silver");
	claro.registrarProductoEnVenta(1, "TL1");
	claro.registrarProductoEnVenta(2, "PACK Gold");
	claro.registrarProductoEnVenta(2, "IT1");

	cout << "Resultado OBTENIDO:" << endl;
	cout << claro.toJson() << endl;
	if (claro.toJson() == "{\"nombre\":\"claro\",\"productos\":[{\"nombre\":\"TV1\",\"descripcion\":\"Plan de tv\",\"canales\":\"1,2,3,4,5,6\",\"precio\":200},{\"nombre\":\"TL1\",\"descripcion\":\"Plan de telefonia\",\"minutos\":180,\"precio\":200},{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"minutos\":40,\"precio\":200},{\"nombre\":\"PACK Silver\",\"precio\":200,\"desc\":20,\"precio silver\":160,\"internet\":{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"minutos\":40,\"precio\":200},\"tv\":{\"nombre\":\"TV1\",\"descripcion\":\"Plan de tv\",\"canales\":\"1,2,3,4,5,6\",\"precio\":200},\"descuento\":20},{\"nombre\":\"PACK Gold\",\"precio\":500,\"desc\":30,\"precio gold\":350,\"internet\":{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"minutos\":40,\"precio\":200},\"tv\":{\"nombre\":\"TV1\",\"descripcion\":\"Plan de tv\",\"canales\":\"1,2,3,4,5,6\",\"precio\":200},\"telefonia\":{\"nombre\":\"TL1\",\"descripcion\":\"Plan de telefonia\",\"minutos\":180,\"precio\":200},\"descuento\":30}],\"ventas\":[{\"numero\":1,\"productos\":[{\"nombre\":\"PACK Silver\",\"precio\":200,\"desc\":20,\"precio silver\":160,\"internet\":{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"minutos\":40,\"precio\":200},\"tv\":{\"nombre\":\"TV1\",\"descripcion\":\"Plan de tv\",\"canales\":\"1,2,3,4,5,6\",\"precio\":200},\"descuento\":20},{\"nombre\":\"TL1\",\"descripcion\":\"Plan de telefonia\",\"minutos\":180,\"precio\":200}]},{\"numero\":2,\"productos\":[{\"nombre\":\"PACK Gold\",\"precio\":500,\"desc\":30,\"precio gold\":350,\"internet\":{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"minutos\":40,\"precio\":200},\"tv\":{\"nombre\":\"TV1\",\"descripcion\":\"Plan de tv\",\"canales\":\"1,2,3,4,5,6\",\"precio\":200},\"telefonia\":{\"nombre\":\"TL1\",\"descripcion\":\"Plan de telefonia\",\"minutos\":180,\"precio\":200},\"descuento\":30},{\"nombre\":\"IT1\",\"descripcion\":\"Plan de internet\",\"minutos\":40,\"precio\":200}]}]}")
	{
		cout << "Resultado: correcto" << endl;
		return 40;
	}
	cout << "Resultado: incorrecto" << endl;
	
	return 0;
	
}

int pregunta3()
{
	cout << "----Pregunta 3----" << endl;
	cout << "Resultado esperado:" << endl;
	cout << "950" << endl;
	Operador claro("claro");
	// Registrar un producto de TV (nombre, precio, descripcion, canales)
	claro.registrarProducto("TV1", 200, "Plan de tv", "1,2,3,4,5,6");
	// Registrar un producto de Telefonia (nombre, precio, descripcion, minutos)
	claro.registrarProducto("TL1", 200, "Plan de telefonia", 180);
	// Registrar un producto de Internet (nombre, precio, descripcion, velocidad)
	claro.registrarProducto("IT1", 200, "Plan de internet", 40);
	// Registrar un pack (nombre, precio, nombre producto internet, nombre producto TV)
	claro.registrarPack("PACK Silver", 200, "IT1", "TV1");
	// Registrar un pack (nombre, precio, nombre producto internet, nombre producto TV, nombre producto Telf)
	claro.registrarPack("PACK Gold", 500, "IT1", "TV1", "TL1");
	// Registrar venta(num)
	claro.registrarVenta(1);
	// Registrar venta(num)
	claro.registrarVenta(2);
	// Registrar productos en venta
	claro.registrarProductoEnVenta(1, "PACK Silver");
	claro.registrarProductoEnVenta(1, "TL1");
	claro.registrarProductoEnVenta(2, "PACK Gold");
	claro.registrarProductoEnVenta(2, "IT1");

	cout << "Resultado obtenido:" << endl;
	cout << claro.calcularGanancias() << endl;
	if (claro.calcularGanancias() == 950)
	{
		cout << "Resultado: correcto" << endl;
		return 40;
	}
	cout << "Resultado: incorrecto" << endl;
	
	return 0;
}

int main()
{
	int nota = pregunta1()+pregunta2() + pregunta3();
	cout << endl;
	cout << "====================" << endl;
	cout << "===> NOTA: " << nota << "/100" << endl;
	cout << "====================" << endl;
	system("pause");
	return 0;
}