#include <iostream>
#include <string>

using namespace std;

int main()
{
	int Year, Mes, Dias;
	cout << endl;
	cout << endl;
	cout << "CALENDARIO" << endl;
	cout << "__________" << endl;
	cout << endl;
	cout << "Introduce el Year: " << endl;
	cin >> Year;
	cout << "Introduce el mes (numero): " << endl;
	cin >> Mes;

	switch (Mes)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		Dias = 31;
		break;
	case 4: case 6: case 9: case 11:
		Dias = 30;
		break;
	case 2: 
		Dias = 28;
		break;
	default: 
		cout << "Mes no valido" << endl;
		return main();
		break;
	}
	if (Mes>=1 && Mes<=12)
	{
		cout << "El mes " << Mes << " del Year " << Year << " tiene " << Dias << " dias" << endl;
	}
	return main();
}
