
#include <iostream>
using namespace std;
#include"ValNegExp.h"

void Ej1()
{
	int a, b;
	cout << "Ingresa a:";
	cin >> a;
	cout << "Ingresa b:";
	cin >> b;
	try
	{
		int sum = a + b;
		//if (b == 0) throw - 1;
		if (b == 0) throw string("div cero!");
		int div = a / b;
		int proc = a * b;

		cout << "Suma:" << sum << endl;
		cout << "Div:" << div << endl;
		cout << "Proc:" << proc << endl;
	}
	catch (int err)
	{
		cout << "div cero, error:" << err << endl;
	}
	catch (string err)
	{
		cout << "div cero, error:" << err << endl;
	}

}

void operaciones(int a , int b)
{
	int sum = a + b;
	if (b == 0) throw - 1;
	if (b == 0) throw string("div cero!");
	int div = a / b;
	int proc = a * b;

	cout << "Suma:" << sum << endl;
	cout << "Div:" << div << endl;
	cout << "Proc:" << proc << endl;

}

void Ej2()
{
	int a, b;
	cout << "Ingresa a:";
	cin >> a;
	cout << "Ingresa b:";
	cin >> b;
	try
	{
		operaciones(a, b);
	}
	catch (int err)
	{
		cout << "div cero, error:" << err << endl;
	}
	catch (string err)
	{
		cout << "div cero, error:" << err << endl;
	}

}

int suma(int a, int b)
{
	int sum = a + b;
	return sum;

}
int divi (int a, int b)
{
	if (b == 0) throw string("div cero!");
	int div = a / b;
	
	return div;

}
int proc(int a, int b)
{
	int proc = a * b;
	return proc;

}

void operaciones1(int a, int b)
{
	
	cout << "Suma:" << suma(a,b) << endl;
	cout << "Div:" << divi(a,b) << endl;
	cout << "Proc:" << proc(a,b) << endl;

}

void Ej3()
{
	int a, b;
	cout << "Ingresa a:";
	cin >> a;
	cout << "Ingresa b:";
	cin >> b;
	try
	{
		operaciones(a, b);
	}
	catch (int err)
	{
		cout << "div cero, error:" << err << endl;
	}
	catch (string err)
	{
		cout << "div cero, error:" << err << endl;
	}

}

void Ej4()
{
	int a, b;
	cout << "Ingresa a:";
	cin >> a;
	cout << "Ingresa b:";
	cin >> b;
	try
	{
		if (b < 0 || a < 0) throw exception("valores negativos ");
		int sum = a + b;
		if (b == 0) throw exception("div cero!");
		int div = a / b;
		int proc = a * b;

		cout << "Suma:" << sum << endl;
		cout << "Div:" << div << endl;
		cout << "Proc:" << proc << endl;
	}
	catch (exception& ex)
	{
		cout << "div cero, error:" << ex.what() << endl;
	}

}


void Ej5()
{
	int a, b;
	cout << "Ingresa a:";
	cin >> a;
	cout << "Ingresa b:";
	cin >> b;
	try
	{
		if (b < 0 || a < 0) throw ValNegExp(a,b);
		int sum = a + b;
		if (b == 0) throw exception("div cero!");
		int div = a / b;
		int proc = a * b;

		cout << "Suma:" << sum << endl;
		cout << "Div:" << div << endl;
		cout << "Proc:" << proc << endl;
	}
	catch (ValNegExp& ex)
	{
		cout << "error:" << ex.what() << endl;
	}
	catch (exception& ex)
	{
		cout << "error:" << ex.what() << endl;
	}

}

int main()
{
	Ej5();
}

