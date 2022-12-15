#include <iostream>
using namespace std;

const int vel = 3;
void Unos(int matrica[][vel])
{
	for (int i = 0; i < vel; i++)
	{
		for (int j = 0; j < vel; j++)
		{
			cin >> matrica[i][j];
		}
	}
}

void Ispis(int matrica[][vel])
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

int sumaNaGlavnoj(int matrica[][vel])
{
	int suma = 0;
	for (int i = 0; i < vel; i++)
	{
		for (int j = 0; j < vel; j++)
		{
			if (i == j)
				suma += matrica[i][j];
		}
	}
	return suma;
}

int sumaNaSporednoj(int matrica[][vel])
{
	int suma = 0;
	for (int i = 0; i < vel; i++)
	{
		for (int j = 0; j < vel; j++)
		{
			if (i + j==vel-1)
				suma += matrica[i][j];
		}
	}
	return suma;
}

// prosjcnu vrijednost svih elemnata iznd glavne dijagonale
// sumu svih elemenata na parnim pozicijama koji se ne nalaze na sorednoj dijagonali
//prosjecnu vrijednost elemanata na neparnim pozicijama ispod sporedne dijagonale 

//prosjecnu vrijednost svih elemnata na neparnim pozicijama koji se ne nalaze na glavnoj dijagonli

float prosjecnaNeparnihNaGlavnoj(int matrica[][vel])
{
	int suma = 0, brojac = 0;

	for (int i = 0; i < vel; i++)
	{
		for (int j = 0; j < vel; j++)
		{
			if (i!=j && (i+j)%2!=0)
			{
				brojac++;
				suma += matrica[i][j];
			}
		}
	}
	return float(suma) / brojac;
}

float prosjecnaNeparnih(int matrica[][vel])
{
	int suma = 0, brojac = 0;

	for (int i = 0; i < vel; i++)
	{
		for (int j = 0; j < vel; j++)
		{
			if (i + j >= vel && (i + j) % 2 != 0)
			{
				brojac++;
				suma += matrica[i][j];
			}
		}
	}
	return float(suma) / brojac;
}

int sumaParnihPozicija(int matrica[][vel]) 
{
	int suma = 0;
	for (int i = 0; i < vel; i++)
	{
		for (int j = 0; j < vel; j++)
		{
			if (i + j != vel - 1 && (i + j) % 2 == 0)
				suma += matrica[i][j];
		}
	}
	return suma;
}

float ProsjecnaIznadGlavne(int matrica[][vel])
{
	int suma = 0, brojac= 0;
	for (int i = 0; i < vel; i++)
	{
		for (int j = 0; j < vel; j++)
		{
			if (j > i)
			{
				brojac++;
				suma += matrica[i][j];
			}
		}
	}
	return float(suma) / brojac;
}

void main() {
	int matrica[vel][vel];
	Unos(matrica);
	Ispis(matrica);
	cout << "Suma elemenata na glavnoj dijagoali je: " << sumaNaGlavnoj(matrica) << endl;
	cout << "Prosjecna vrijednost elemenata iznad glavne dijagonale je: " << ProsjecnaIznadGlavne(matrica) << endl;
	cout << "Suma elemenata na parnim pozicijama koji se ne nalaze na sporednoj dijagonali je: " << sumaParnihPozicija(matrica) << endl;

	system("pause>0");
}
