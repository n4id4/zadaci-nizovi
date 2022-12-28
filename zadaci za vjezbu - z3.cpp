#include <iostream>
using namespace std;
/*
3.	Napišite program u kojem ćete kreirati tri cjelobrojna
niza i to – prvi niz od 3 elementa, drugi niz od 4 elementa
i treći niz od 7 elemenata. Uz pomoć funkcije:
•	void unos (int [], int); omogućite unos elemenata
u prvi i drugi niz;
•	void inicijalizacija (int [], int[], int []); 
omogućite inicijalizaciju elemenata trećeg niza tako
što ćete kopirati sve elemente prvog i drugog niza u treći;
•	int sumiraj (int [], int); koja će omogućiti sumiranje
svih elementa niza; korisnik bira niz čije elemente treba sumirati;

*/
void unos(int niz[], int vel)
{
	for (int i = 0; i < vel; i++)
		cin >> niz[i];
}

void inicijalizacija(int niz1[], int niz2[], int niz3[], int vel3)
{
	for (int i = 0; i < vel3; i++)
	{
		if (i < 3)
			niz3[i] = niz1[i];
		else
			niz3[i] = niz2[i-3];
	}
}
int sumiraj(int niz[], int vel)
{
	int suma = 0;
	for (int i = 0; i < vel; i++)
		suma += niz[i];
	return suma;
}

void ispis(int niz[], int vel)
{
	for (int i = 0; i < vel; i++)
		cout << niz[i] << " ";
	cout << endl;
}
void main() {
	const int vel1 = 3, vel2 = 4, vel3 = 7;
	int niz1[vel1], niz2[vel2], niz3[vel3];
	unos(niz1, vel1);
	unos(niz2, vel2);
	system("cls");
	ispis(niz1, vel1);
	cout << "-------------------------------------------\n";
	ispis(niz2, vel2);
	inicijalizacija(niz1, niz2, niz3, vel3);
	ispis(niz3, vel3);

	int izborNiza;
	do{
	cout << "Clanove kojeg niza zelite sabrati?\n";
	cin >> izborNiza;
	} while (izborNiza < 1 || izborNiza>3);

	if (izborNiza == 1)
		cout << "Suma elemenata: " << sumiraj(niz1, vel1);
	else if(izborNiza==2)
		cout << "Suma elemenata: " << sumiraj(niz2, vel2);
	else
		cout << "Suma elemenata: " << sumiraj(niz3, vel3);


	system("pause>0");
}

 
