#include <iostream>
using namespace std;

int main() {
	//Deklaracja zmiennnych
	int wybrana, moja;
	
	moja = 32;
	
	//Pytanie u�ytkownika o warto��
	cout << "Podaj twoja liczbe (od 1 do 50)" << endl;
	cin >> wybrana;
	
	//Sprawdzanie czy wybrana mie�ci si� w zakresie
	if (wybrana < 1 || wybrana > 50) {
		cout << "Twoja liczba nie miesci sie w zakresie" << endl;
		return 0;
	}
	
	//Sprawdzanie czyli liczba jest wi�ksza czy mniejsza
	if (wybrana > moja) {
		cout << "Twoja liczba jest wieksza od mojej" << endl;
	} else if (wybrana < moja) {
		cout << "Twoja liczba jest mniejsza od mojej" << endl;
	} else if (wybrana == moja) {
		cout << "Gratulacje! Zgadles moja liczbe!" << endl;
	}
	
	return 0;
}
