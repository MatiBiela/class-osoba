#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Osoba {
	public:
		string imie;
		string nazwisko;
		int pesel;
		
		virtual void wprowadz() = 0;
		virtual void wypisz() = 0;
		void wprowadzO();
		void wypiszO();
};

void Osoba::wprowadzO()
{
	cout << "Wprowadz imie, nazwisko, pesel" << endl;
	cout << "Imie: " << endl;
	cin >> imie;
	cout << "Nazwisko: " << endl;
	cin >> nazwisko;
	cout << "Pesel: " << endl; 
	cin >> pesel;
	
}

void Osoba::wypiszO() {
	cout << imie << " " << nazwisko << " " << pesel << " ";
}
class Nauczyciel 
	:public Osoba
{
		public:
			string przedmiot;
			
			void wprowadz();
			void wypisz();
};

void Nauczyciel::wprowadz() {
	wprowadzO();
	cout << "Wprowadz przedmiot: " << endl;
	cin >> przedmiot;
}

void Nauczyciel::wypisz(){
	wypiszO();
	cout << przedmiot << endl;
}
class Dyrektor 
	:public Osoba
{
	public:
		string nazwa_szkoly;
		
		void wprowadz();
		void wypisz();
};

void Dyrektor::wprowadz(){
	wprowadzO();
	cout << "Wprowadz nazwe szkoly: " << endl;
	cin >> nazwa_szkoly;
}

void Dyrektor::wypisz(){
	wypiszO();
	cout << nazwa_szkoly << endl;
}
class Uczen
	:public Osoba
{
	public:
		string klasa;
		
		void wprowadz();
		void wypisz();
};

void Uczen::wprowadz(){
	wprowadzO();
	cout << "Wprowadz klase: " << endl;
	cin >> klasa;
}

void Uczen::wypisz(){
	wypiszO();
	cout << klasa << endl;
}

class Wychowawca 
	:Nauczyciel
{
	public:
		string klasa;
		
		void wprowadz();
		void wypisz();
};

void Wychowawca::wprowadz(){
	wprowadzO();
	cout << "Wprowadz klase wychowawcza: " << endl;
	cin >> klasa;
}

void Wychowawca::wypisz(){
	wypiszO();
	cout << klasa << endl;
}


int main(int argc, char** argv) {
	
	
	Nauczyciel n;
	n.wprowadz();
	n.wypisz();
	
	Dyrektor d;
	d.wprowadz();
	d.wypisz(); 
	
	Uczen u;
	u.wprowadz();
	u.wypisz(); 
	
	Wychowawca w;
	w.wprowadz();
	w.wypisz();
	
	
	
	
	return 0;
}
