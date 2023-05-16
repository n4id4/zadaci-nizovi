#include <iostream>
using namespace std;

const int vel=8;

int BrojCifara(int broj)
{
	return (log10(broj) + 1);
}

void Unos(int matrica[][vel])
{
	for (int i = 0; i < vel; i++)
	{
		for (int j = 0; j < vel; j++)
		{
			if ((i + j) % 2 == 0)//crno polje
			{
				do
				{
					matrica[i][j] = rand() % 10000;
				} while (matrica[i][j]%2!=0 
					&& BrojCifara(matrica[i][j])%2==0);
			}
			else //bijelo polje
			{
				do
				{
					matrica[i][j] = rand() % 10000;
				} while (matrica[i][j] % 2 == 0
					&& BrojCifara(matrica[i][j]) % 2 != 0);
			}
		}
	}
}

int SrednjaCifra(int broj)
{
	int brCifara = BrojCifara(broj);
	if (brCifara % 2 != 0)
		broj =(int)(broj / (pow(10, (brCifara / 2)))) % 10;
	else
		broj = ceil(((int)(broj / (pow(10, (brCifara / 2)))) % 10
		+ (int)(broj / (pow(10, (brCifara / 2)-1))) % 10)/2.0f);

	return broj;
}

void Ispis(int matrica[][vel])
{
	for (int i = 0; i < vel; i++)
	{
		for (int j = 0; j < vel; j++)
			if (j > i && (i+j)%2==0)
				cout << SrednjaCifra(matrica[i][j])<<" ";
		cout << endl;
	}
}

void IspisSvih(int matrica[][vel])
{
	for (int i = 0; i < vel; i++)
	{
		for (int j = 0; j < vel; j++)
				cout << (matrica[i][j]) << " ";
		cout << endl;
	}
}

int main()
{
	int matrica[vel][vel];
	Unos(matrica);
	IspisSvih(matrica);
	cout << endl << endl;
	Ispis(matrica);

	system("pause>0");
	return 0;
}
