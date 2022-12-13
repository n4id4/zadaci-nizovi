#include <iostream>
using namespace std;

const int vel = 10;
//1 7 88 55 14 2 3 11 13 4
void Unos(int niz[])
{
    for (int i = 0; i < vel; i++)
        niz[i] = rand() % 100 + 1;
}

void Ispis(int niz[])
{
    for (int i = 0; i < vel; i++)
        cout << niz[i] << " ";
}

bool isProst(int a)
{
    for (int i = 2; i < a; i++)
        if (a % i == 0)
            return false;
    
    return true;
}

float procentualnaVrijednost(int niz[])
{
    int brojac = 0;
    for (int i = 0; i < vel; i++)
        if (isProst(niz[i]))
            brojac++;

    float rezultat = (float(brojac) / vel) * 100;
    return rezultat;
}

int main()
{
    int niz[vel];

    Unos(niz);
    Ispis(niz);
    cout << "Procenat ponavljanja prostog broja u nizu je: " << procentualnaVrijednost(niz) <<"%"<< endl;

    system("pause>0");
    return 0;
}
