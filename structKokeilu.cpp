// structKokeilu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
struct Elain {
	string nimi;
	string laji;
	string yla_laji;
	int jalkojenmaara;
	void tulosta(){ 
		cout << "Olen " << laji << ". Nimeni on " << nimi
			<< " kipitän " << jalkojenmaara << " jalalla."
			<< endl;
	}
};
// Tehtävä 1: Pistä koodi toimimaan funktion tulosta_elaintarha-avulla
// Tehtävä 2: Pistä funktio toimimaan siten, että muuttuja elaimienlkm, vaikuttaa johonkin
void tulosta_elaintarha(Elain tarha[20],int elaimienlkm) {
	cout << "Eläintarhassa on nyt eläimet:" << endl;
	int indeksi = 0;
	while (true) {
		if (indeksi == elaimienlkm) { break; }
		cout << "indeksin arvo on " << indeksi << " ";
		tarha[indeksi].tulosta();
		indeksi = indeksi + 1;
	}
}

int main() {
	setlocale(LC_ALL, "fi-FI");
	Elain hamahakki = { "Kalle","hämähäkki","hämähäkkieläimet",8 };
	Elain mursu = { "Jori","mursu","nisäkäs",3 };
	Elain elaintarha[20]; // tyhjä array
	int eka_vapaa_elain_indeksi = 0;
	elaintarha[0] = hamahakki;
	elaintarha[1] = mursu;
	eka_vapaa_elain_indeksi = 2;
	// TEHTÄVÄ , PISTÄ TÄMÄ LUUPIKSI
	while (true) {
		char valinta;
		cout << "Haluatko lisätä uuden lajin? (k/e):";
		cin >> valinta;
		if (valinta == 'k') {
			// lisää if/else blokki, joka lisää yhden kerran uuden lajin
			string nimi, laji, ylalaji;
			int jalat;
			cout << "Anna eläimen nimi:"; cin >> nimi; cout << "Anna eläimen laji:"; cin >> laji;
			cout << "Anna eläimen ylalaji:"; cin >> ylalaji; cout << "Montako jalkaa eläimellä on:"; cin >> jalat;
			// Luodaan annetuista tiedoista uusi struct
			Elain uusi_elain = { nimi,laji,ylalaji,jalat };
			// Lisätään se elaintarhaan
			elaintarha[eka_vapaa_elain_indeksi] = uusi_elain;
			eka_vapaa_elain_indeksi++;
		}
		else {
			break;
		}
		tulosta_elaintarha(elaintarha, eka_vapaa_elain_indeksi);
	} // while loppuu

}
// 
// luo tälle funktio, joka tulostaa 
// hamahakki.tulosta()
// -> "Olen hämähäkki. Nimeni on Kalle kipitän 8 jalalla."


/*
struct Henkilo
{
	string etunimi;
	string sukunimi;
	int ika;
	string lempiruoka;
	void tulostaHenkiloTiedot() {
		cout << etunimi << " " << sukunimi
			<< " on " << ika << " vuotta" << endl;
	}
	// siirrä tervehdiHenkiloa tähän

}; 
void tervehdiHenkiloa(Henkilo henk) {
	cout << "Terve, " << henk.etunimi << "! Tänään syödään " << henk.lempiruoka << "a" << endl;
}
int main()
{
	Henkilo matti = { "Matti","Lahtilampi",86,"sushi" };
	Henkilo jorma = { "Jorma","Laatokka",50, "Kaalilaatikko" };
	matti.tulostaHenkiloTiedot();
	// ja kutsu sitä suoraan tästä
	matti.tervehdiHenkiloa();
}
*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

/*
	int max = 10;           // no longer const
	int* a = new int[max];  // allocated on heap
	int n = 0;

	//--- Read into the array
	while (cin >> a[n]) {
		n++;
		if (n >= max) {
			max = max * 2;            // double the previous size
			int* temp = new int[max]; // create new bigger array.
			for (int i = 0; i < n; i++) {
				temp[i] = a[i];       // copy values to new array.
			}
			delete[] a;              // free old array memory.
			a = temp;                 // now a points to new array.
		}
		for (int i = 0; i < max; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
	*/