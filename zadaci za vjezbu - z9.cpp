#include <iostream>
using namespace std;

int brojCifara(int broj)
{
	return log10(broj) + 1;
}

void Unos(int matrica[][8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			//crno polje
			if ((i + j) % 2 == 0)
			{
				do
				{
					matrica[i][j] = rand() % 1000 + 1;
				} while (matrica[i][j]%2!=0 && brojCifara(matrica[i][j])%2==0);
			}
			else
			{
				do
				{
					matrica[i][j] = rand() % 1000 + 1;
				} while (matrica[i][j] % 2 == 0 && brojCifara(matrica[i][j]) % 2 != 0);

			}
		}
	}
}

void ispis(int matrica[][8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout << matrica[i][j] << " ";
		}
		cout << endl;
	}
}

float prosjekIznadGlavne(int matrica[][8])
{
	int suma = 0, brojac = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (j > i && (i + j) % 2 != 0)
			{
				suma += matrica[i][j];
				brojac++;
			}
		}
	}
	return float(suma) / brojac;
}

float prosjekIspodSporedne(int matrica[][8])
{
	int suma = 0, brojac = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (i+j>=8 && (i + j) % 2 == 0)
			{
				suma += matrica[i][j];
				brojac++;
			}
		}
	}
	return float(suma) / brojac;
}

void main() {
	int sahovskaTabla[8][8];
	Unos(sahovskaTabla);
	ispis(sahovskaTabla);
	cout << "Prosjek elemenat iznad glavne dijagonle je: " <<
		prosjekIznadGlavne(sahovskaTabla) << endl;
	cout << "Prosjek elemenat ispod sporedne dijagonle je: " <<
		prosjekIspodSporedne(sahovskaTabla) << endl;
	system("pause>0");
}

 
