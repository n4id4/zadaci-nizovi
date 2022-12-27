#include <iostream>
using namespace std;

/*
Napisati program koji će omogućiti unos minimalno trocifrenih cijelih brojeva u jednodimenzionalni niz od 20 elemenata.
Zatim napraviti funkciju koja će u nizu pronaći sve brojeve kojima je prva cifra (početna cifra sa desne strane) parna i ukloniti ih iz niza.
Uklanjanje elemenata niza obavezno uraditi tako da ne ostaju prazni elementi već da se ostatak niza pomjeri kako ne bi bilo praznih elemenata.
Pomjeranje ostatka niza obavezno raditi prilikom uklanjanja elemenata a ne sortiranjem poslije uklanjanja
*/

void izbacivanje(int niz[], int& duzina)
{
	for (int i = 0; i < duzina; i++)
	{
		if ((niz[i] % 10) % 2 == 0)
		{
			for (int j = i; j < duzina; j++)
				niz[j] = niz[j + 1];
			
			i--;
			duzina--;
		}
	}
}

void ispis(int niz[], int duzina)
{
	for (int i = 0; i < duzina; i++)
		cout << niz[i] << " ";
	cout << "\n------------------------------------------------------------" << endl;
}

int main()
{
	const int vel = 20;
	int niz[vel]={101,202,345,678,908,567,123,124,568,908,765,333,122,123,456,789,321,654,7778,1008}; //napomena: implementirat funkciju za unos
	int duzina = vel;
	ispis(niz, duzina);
	izbacivanje(niz, duzina);
	ispis(niz, duzina);
	system("pause>0");
	return 0;
}
