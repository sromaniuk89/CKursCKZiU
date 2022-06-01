// Zad1.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

char znak = 'x'; //to jest zmienna globalna

int main()
{
	char znak2 = 'z'; //to jest zmienna lokalna, bo bedzie widoczna tylko wewnatrz main()

	const int stalaWartosc = 3; //const robi stała zmienna
	std::cout << stalaWartosc << std::endl;
	//stalaWartosc = 4; //to nie zadziala bo stalej nie da sie zmienic
	//const int stalaWartosc = 4; //kompilator tez nie pozwoli na redefinicje stalej
	std::cout << stalaWartosc << std::endl;

	std::cout << znak << std::endl;
	std::cout << znak2 << std::endl;

	int a = 123;
	std::cout << a << std::endl;
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
