#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(void)
{
	string cadena;

	while (getline(cin, cadena))
	{
		int N = 1;
		int pts = 0, lineas = 0;
		int auxiliar[1000];
		for (int i = 0; i < cadena.length(); i++)
		{
			if (cadena[i] == '0')
			{auxiliar[i] = 0;}
			if (cadena[i] == '1')
			{pts+=N; auxiliar[i] = 1;}
			if (cadena[i] == '2')
			{pts+=3*N; auxiliar[i] = 2;}
			if (cadena[i] == '3')
			{pts+=6*N; auxiliar[i] = 3;}
			if (cadena[i] == '4')
			{pts+=10*N; auxiliar[i] = 4;}

			lineas+=auxiliar[i];

			if (lineas == 10)
			{
				lineas=0;
				N++;
			}
			if (lineas > 10)
			{
				lineas = lineas - 10;
				N++;
			}
		}
		cout << pts << endl;
	}
}

