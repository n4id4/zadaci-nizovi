/*
Napisati program koji će omogućiti unos minimalno trocifrenih cijelih brojeva u jednodimenzionalni niz od 20 elemenata. 
Zatim napraviti funkciju koja će u nizu pronaći sve brojeve kojima je prva cifra (početna cifra sa desne strane) parna i ukloniti ih iz niza. 
žUklanjanje elemenata niza obavezno uraditi tako da ne ostaju prazni elementi već da se ostatak niza pomjeri kako ne bi bilo praznih elemenata.
Pomjeranje ostatka niza obavezno raditi prilikom uklanjanja elemenata a ne sortiranjem poslije uklanjanja
*/
#include <iostream>

using namespace std;

void unos(int niz[], int duzina);
void izbacivanje(int niz[], int& duzina);
bool parnaCifra(int broj);
void ispis(int niz[], int duzina);

int main()
{
    int duzina = 20;
    int niz[20];

    unos(niz, duzina);
    ispis(niz, duzina);
    izbacivanje(niz, duzina);
    cout << endl;
    ispis(niz, duzina);

    system("pause>0");
    return 0;
}

void izbacivanje(int niz[], int& duzina)
{
    for (int i = 0; i < duzina; i++)
    {
        if (parnaCifra(niz[i]))
        {
            for (int j = i; j < duzina; j++)
            {
                niz[j] = niz[j + 1];
            }

            i--;
            duzina--;
        }
    }
}

bool parnaCifra(int broj)
{
   

    return broj % 2 == 0;
}

void unos(int niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
    {
        do
        {
            cout << "niz[" << i << "]: " << endl;
            cin >> niz[i];

        } while (niz[i] < 100);
    }
}

void ispis(int niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        cout << niz[i] << " ";
}
