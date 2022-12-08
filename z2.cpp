#include <iostream>
using namespace std;

/*
2. Napišite program u kojem ćete :

omoguciti unos niza od 5 isključivo malih slova pomocu funkcije: void unos (char [], int);
definirati i upotrijebiti funkciju void promijeni(char [], int [], int); koja će unesene 
karaktere (slova) promijeniti u odgovarajuće cijele brojeve (prema ASCII kodnoj shemi) i
smjestiti ih u zaseban niz.
*/

void unos(char niz[], int vel)
{
	for (int i = 0; i < vel; i++)
	{
		do
		{
			cin >> niz[i];
		} while (niz[i]<'a'|| niz[i]>'z');
	}
}

void promijeni(char nizK[], int nizB[], int vel)
{
	for (int i = 0; i < vel; i++)
		nizB[i] = nizK[i];
}

void ispisBrojeva(int niz[], int vel)
{
	for (int i = 0; i < vel; i++)
		cout << niz[i] << " ";
	cout << endl;
}

void ispisChar(char niz[], int vel)
{
	for (int i = 0; i < vel; i++)
		cout << niz[i] << " ";
	cout << endl;
}

void main() {
	const int vel = 5;
	char niz[vel];
	unos(niz, vel);
	int nizBr[vel];
	promijeni(niz, nizBr, vel);
	ispisBrojeva(nizBr, vel);
	ispisChar(niz, vel);
}
