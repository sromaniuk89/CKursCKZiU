// Zad10.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

struct Zwierze
{
	std::string nazwa;
	std::string kolor;
	short waga;
	short wiek;
};

void wyswietlZwierze(Zwierze zw) {
	std::cout << zw.nazwa << "; " << zw.kolor << "; " << zw.waga << "; " << zw.wiek << "\n";
}

int main()
{
	Zwierze pies = {
	"Kundel",
	"czarny",
	5,
	36
	};

	Zwierze kot = {
	"Pers",
	"szary",
	2,
	25
	};

	Zwierze papuga = {
	"Ptaszek",
	"biala",
	3,
	12
	};

	wyswietlZwierze(pies);
	wyswietlZwierze(kot);
	wyswietlZwierze(papuga);
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
