#include <iostream>
using namespace std;

/*
Napišite program u kojem ćete deklarirati matricu 5x4. Redak u matrici je student, a kolona predmet. Uz pomoć funkcije:
void unos (int [] [4]); omogućite unos samo prolaznih ocjena (6-10) za sve studente;
float prosjek(int []); izračunati prosječnu ocjenu jednog studenta; za kojeg od studenta će se računati prosjek bira korisnik;
int prebroji (int [][4], int); prebrojati koliko studenata ima ocjenu 8 i više na predmetu po izboru korisnika.
*/

const int red = 5, kolona = 4;

void unos(int matrica[][kolona])
{
	for (int i = 0; i < red; i++)
	{
		cout << "Student " << i + 1 << endl;
		for (int j = 0; j < kolona; j++)
		{
			cout << "Unesite ocjenu za predemet " << j + 1 << ": ";
			cin >> matrica[i][j];
			if (matrica[i][j] < 6 || matrica[i][j]>10)
				j--;
		}
	}
}

void ispis(int matrica[][kolona])
{
	for (int i = 0; i < red; i++)
	{
		cout << "Student " << i + 1 << endl;
		cout << "-----------------------------" << endl;
		for (int j = 0; j < kolona; j++)
			cout << "Predmet " << j + 1 << ": " << matrica[i][j] << endl;
		cout << endl;
	}
}

float prosjek(int nizOcjena[])
{
	int suma = 0;
	for (int i = 0; i < kolona; i++)
		suma += nizOcjena[i];
	
	return float(suma) / kolona;
}

int prebroji(int matrica[][kolona], int kolonaPredmet)
{
	int brojac = 0;
	for (int i = 0; i < red; i++)
		if (matrica[i][kolonaPredmet] >= 8)
			brojac++;
	
	return brojac;
}

int main()
{
	int matrica[red][kolona];
	unos(matrica);
	system("cls");
	ispis(matrica);

	int brStd;
	cout << "Unesite broj studenta ciji prosjek vas zanima: "; //napomena: ogranicite unos na samo validne vrijednosti
	cin >> brStd;
	brStd--;
	cout << "Prosjek odabranog studenta je: " << prosjek(matrica[brStd])<<endl;

	int brPr;
	cout << "Unesite broj predmeta koji vas zanima: ";//napomena: ogranicite unos na samo validne vrijednosti
	cin >> brPr;
	brPr--;
	cout << "Broj studenata koji su na odabranom predmetu dobili ocjenu 8 ili vise je: " << prebroji(matrica, brPr) << endl;

	system("pause>0");
	return 0;
}
