#include <iostream>
using namespace std;

int main() {
	//Deklarujemy zmienn� "liczba"
	float liczba;

	//Pytamy u�ytkownika o liczb�
	cout << "Podaj liczbe";
	cin >> liczbaStartowa;

	/*
	Gdybym chcia�, m�g�bym u�y� abs(liczba) z biblioteki cmath, jednak�e ten rozdzia� dotyczy konstrukcji if/else, wi�c:
	*/

	//Obliczamy warto�� bezwzgl�dn� liczby
	float liczbaAbs
	if (liczba < 0) {
		//Je�eli liczba jest ujemna, mno�ymy przez -1
		liczbaAbs = liczba * (-1);
	}
	else {
		//Je�eli jest dodatnia, to zostawiamy tak jak jest
		liczbaAbs = liczba;
	}

	//Wy�wietlamy u�ytkownikowi warto�� absolutn� liczby	
	cout << "Wartosc absolutna liczby " << liczba << " to " << liczbaAbs;
    return 0;
}