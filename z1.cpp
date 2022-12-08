#include <iostream>
using namespace std;

/*
2. Napišite program u kojem ćete :

omoguciti unos niza od 5 isključivo malih slova pomocu funkcije: void unos (char [], int);
definirati i upotrijebiti funkciju void promijeni(char [], int [], int); koja će unesene 
karaktere (slova) promijeniti u odgovarajuće cijele brojeve (prema ASCII kodnoj shemi) i
smjestiti ih u zaseban niz.
*/

void unos(int nizBr[], int vel)
{
	for (int i = 0; i < vel; i++)
		cin >> nizBr[i];
}

float prosjecna(int niz[], int vel)
{
	int suma = 0;
	for (int i = 0; i < vel; i++)
	{
		suma += niz[i];
	}
	return float(suma) / vel;
}

bool opadajuci(int niz[], int vel)//12 10 9 2 1
{
	for (int i = 0; i < vel-1; i++)
	{
		if (niz[i] < niz[i + 1])
			return false;
	}
	return true;
}

void ispis(int niz[], int vel = 10)
{
	for (int i = 0; i < vel; i++)
	{
		cout << niz[i] << " ";
	}
	cout << endl;
}

void main() {
	const int vel = 10;
	int niz[vel];

	unos(niz, vel);
	cout << "Prosjecna vrijednost elemenata u nizu je: " << prosjecna(niz, vel) << endl;
	if (opadajuci(niz, vel))
		cout << "Niz je opadajuci.\n";
	else
		cout << "Niz nije opadajuci.\n";

	ispis(niz);
}
