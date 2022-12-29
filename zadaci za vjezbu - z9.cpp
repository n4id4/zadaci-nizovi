#include <iostream>
using namespace std;
const int vel = 8;

int brojCifara(int broj)
{
	return log10(broj) + 1;
}

void unos(int matrica[][vel])
{
	for (int i = 0; i < vel; i++)
	{
		for (int j = 0; j < vel; j++)
		{
			if ((i + j) % 2 == 0)
			{
				do
				{
					matrica[i][j]=rand()%10000+1;
				} while (matrica[i][j]%2!=0 || brojCifara(matrica[i][j])%2==0);
			}
			else
			{
				do
				{
					matrica[i][j] = rand() % 10000 + 1;
				} while (matrica[i][j] % 2 == 0 || brojCifara(matrica[i][j]) % 2 != 0);

			}
		}
	}
}

void ispis(int matrica[][vel])
{
	for (int i = 0; i < vel; i++)
	{
		for (int j = 0; j < vel; j++)
		{
			cout << matrica[i][j] << " ";
		}
		cout << endl;
	}
}

float prosjekIznadGlavne(int matrica[][vel])
{
	int suma = 0, brojac = 0;
	for (int i = 0; i < vel; i++)
	{
		for (int j = 0; j < vel; j++)
		{
			if ((i + j) % 2 != 0 && j>i)
			{
				suma += matrica[i][j];
				brojac++;
			}
		}
	}
	return float(suma) / brojac;
}

float prosjekIspodSporedne(int matrica[][vel])
{
	int suma = 0, brojac = 0;
	for (int i = 0; i < vel; i++)
	{
		for (int j = 0; j < vel; j++)
		{
			if ((i + j) % 2 == 0 && (i+j)>=vel)
			{
				suma += matrica[i][j];
				brojac++;
			}
		}
	}
	return float(suma) / brojac;
}

void main() {
	
	int sahovskaTabla[vel][vel];
	unos(sahovskaTabla);
	ispis(sahovskaTabla);
	cout << "Prosjek svih elemnata na bijelim poljima iznad glavne dijagonale je:" <<
		prosjekIznadGlavne(sahovskaTabla) << endl;
	cout << "Prosjek svih elemnata na crnim poljima ispod sporedn dijagonale je:" <<
		prosjekIspodSporedne(sahovskaTabla) << endl;

	system("pause>0");
}

 
