// Problema de la I Olimpiada Informática de Extremadura (OIEX 2011)

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>

using namespace std;
 
int main (void)
{
    int n, m, i = 0;
    string ronda;
    cin >> n;
    
    for (i = 1; i <= n; i++)
    {
    	string par_impar, jugador;
    	cin >> m >> par_impar >> jugador;
    	
    	if (m <= n)
    	{
    		cout << "ronda " << i << endl;
    	
    		int a = 0; int b = 0;
    		while (a <= m)
    		{
    			if (par_impar.substr(0) == "pares")
    			{
    				if (jugador.substr(0) == "Cristina")
    				{
    					if ((a+b)%2==0)
    						cout << a << " " << b << endl;

    					b++;
    					if (b > m)
    					{
    						a++; b = 0;
    					}
    				}
    			
    				if (jugador.substr(0) == "Antonio")
    				{
    					if ((a+b)%2!=0)
    						cout << a << " " << b << endl;

    					b++;
    					if (b > m)
    					{
    						a++; b = 0;
    					}
    				}
    			}
    		
    			if (par_impar.substr(0) == "nones")
    			{
    				if (jugador.substr(0) == "Antonio")
    				{
    					if ((a+b)%2==0)
    						cout << a << " " << b << endl;

    					b++;
    					if (b > m)
    					{
    						a++; b = 0;
    					}
    				}
    			
    				if (jugador.substr(0) == "Cristina")
    				{
    					if ((a+b)%2!=0)
    						cout << a << " " << b << endl;

    					b++;
    					if (b > m)
    					{
    						a++; b = 0;
    					}
    				}
    			}
    		}
    		cout << endl;
    	}
    	par_impar.clear(); jugador.clear();
    }
    cout << endl;
}
