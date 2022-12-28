#include <iostream>
using namespace std;

/*
1.	Napišite program u kojem ćete deklarirati niz od 7 cijelih brojeva. Uz pomoć funkcije:
void unos (int [], int); omogućite unos elemenata u niz;
float prosjecna(int [], int); izračunati prosječnu vrijednost elemenata niza;
bool opadajuci (int [], int); provjeriti jesu li elementi niza poredani u opadajucem poretku
(n1 > n2 > n3 > n4 > n5 > n6 > n7);
*/
void unos(int niz[], int vel)
{
	for (int i = 0; i < vel; i++)
		cin >> niz[i];
}

float prosjecna(int niz[], int vel)
{
	int suma = 0;
	for (int i = 0; i < vel; i++)
		suma += niz[i];
	return float(suma) / vel;
}

bool opadajuci(int niz[], int vel)
{
	for (int i = 0; i < vel-1; i++)
		if (niz[i] < niz[i + 1])
			return false;
	
	return true;
}

void main() {
	const int vel = 7;
	int niz[vel];
	unos(niz, vel);
	cout << "PROSJECNA JE: " << prosjecna(niz, vel)<<endl;
	cout << (opadajuci(niz, vel) ? "opadajuci" : "neopadajuci");
	
	system("pause>0");
}

 
