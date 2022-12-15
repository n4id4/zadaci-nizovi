#include <iostream>
using namespace std;

void Unos(int niz[], int vel)
{
	for (int i = 0; i < vel; i++)
		niz[i] = rand() % 100000 + 1;
}

bool isProst(int broj)
{
	for (int i = 2; i < broj; i++)
	{
		if (broj % i == 0)
			return false;
	}
	return true;
}

float procentualnaVr(int niz[], int vel)
{
	int brojac = 0;
	for (int i = 0; i < vel; i++)
	{
		if (isProst(niz[i]))
			brojac++;
	}

	float rezultat = (float(brojac) / vel) * 100;

	return rezultat;
}

void Ispis(int niz[], int vel)
{
	for (int i = 0; i < vel; i++)
		cout << niz[i] << " ";
}

void main() {
	const int vel=100;
	int niz[vel];
	Unos(niz, vel);
	//Ispis(niz, vel);
	cout << "Procentualna vrijednost prostih brojeva u nizu je: " << procentualnaVr(niz, vel);

	system("pause>0");
}
