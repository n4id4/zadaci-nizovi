/*
Napišite program u kojem ćete deklarirati matricu 5x4. Redak u matrici je student, a kolona predmet. Uz pomoć funkcije:

void unos (int [] [4]); omogućite unos samo prolaznih ocjena (6-10) za sve studente;
float prosjek(int []); izračunati prosječnu ocjenu jednog studenta; za kojeg od studenta će se računati prosjek bira korisnik;
int prebroji (int [][4], int); prebrojati koliko studenata ima ocjenu 8 i više na predmetu po izboru korisnika.
*/
#include <iostream>

using namespace std;

void unos(int matrica[][4])
{
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4; j++)
            while (cout << "Unesite prolaznu ocjenu (6 - 10):\n", cin >> matrica[i][j], matrica[i][j] < 6 || matrica[i][j] > 10);
}

float prosjek(int niz[])
{
    int suma = 0;
    for (int i = 0; i < 4; i++)
        suma += niz[i];

    return suma / 1.F / 4;
}

int prebroji(int matrica[][4], int predmet)
{
    int brojac = 0;
    for (int i = 0; i < 5; i++)
        if (matrica[i][predmet] > 7)
            brojac++;

    return brojac;
}

int main()
{
    int matrica[5][4];

    unos(matrica);

    int izbor = 0;

    while (cout << "Izaberite studenta:\n", cin >> izbor, izbor < 1 || izbor > 5);
    cout << "Prosjek odabranog studenta je: " << prosjek(matrica[izbor - 1]) << endl;

    while (cout << "Izaberite predmet:\n", cin >> izbor, izbor < 1 || izbor > 4);
    cout << "Broj studenata na odabranom predmetu sa ocjenom 8 ili vise je " << prebroji(matrica, izbor - 1) << endl;

    system("pause>0");
    return 0;
}
