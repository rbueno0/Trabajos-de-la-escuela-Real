#include <iostream>
#include <string>

using namespace std;

int main()
{
	//double necesita decimales a huevo :v
	double a, b;
	int c;
	cout << "Introduce el primer valor: " << endl;
	cin >> a;
	cout << endl;
	cout << "Introduce el segundo valor: " << endl;
	cin >> b;
	cout << endl;
	cout << "Que operacion deseas realizar: 1(Suma), 2(Producto), 3(Division), 4(Resta) : ";
	cin >> c;
	switch (c)
	{
	case 1:
		cout << endl;
		cout << "El resultado es: " << a + b << endl;
		break;
	case 2:
		cout << endl;
		cout << "El resultado es: " << a * b << endl;
		break;
	case 3:
		cout << endl;
		cout << "El resultado es: " << a / b << endl;
		break;
	case 4:
		cout << endl;
		cout << "El resultado es: " << a - b << endl;
		break;
	default:
		cout << "Opcion no reconocida";
		break;
	}
	return 0;
}
