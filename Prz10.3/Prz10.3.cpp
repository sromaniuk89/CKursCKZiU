// Prz10.3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

class Punkt 
{
	//static sprawia ze dane pole badz metoda bedzie statyczna - bedzie dostepna bezposrednio z poziomu klasy ale i obiektu
	static int lPunktow;

public:
	static int ilePunktow() 
	{ 
		return lPunktow; 
	}
};

int Punkt::lPunktow = 3;

int main() 
{
	//metody statyczne moge wywolac bezposrednio na klasie!!
	int ilP = Punkt::ilePunktow(); //uzywam podwojnego dwukropka (::) zeby dostac sie do metody statycznej z poziomu klasy!
	Punkt p1; 
	int ilPTeraz = p1.ilePunktow();//jak chce wywolac metoda na obiekcie statycznym to uzywam kropki (.)

	std::cout << ilP << "; " << ilPTeraz << "\n";

	return 0;
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
