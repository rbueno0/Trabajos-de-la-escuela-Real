#include <iostream>
#include <string>

using namespace std;
int main()
{
	int num = 1, cont = 0;
	float sum = 0;
	// != significa diferente
	while (num != 0)
	{
		cout << "introduce un numero: ";
		cin >> num;
		if (num!=0)
		{
			cont = cont + 1;
			sum = sum + num;
		}
	}
	cout << "La media es: " << sum / cont;
	return 0;
}
