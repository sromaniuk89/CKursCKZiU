// Zad5.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int pole(int a, int b)
{
	return a * b;
}

int obwod(int a, int b)
{
	return 2 * a + 2 * b;
}

int main()
{
	for (int i = 1; i <= 4; ++i)
	{
		for (int j = 1; j <= 5; ++j) //przyklad petli zagniezdzonej
		{
			std::cout << "Wymiary: " << i << " x " << j << "\n";
			std::cout << "Pole: " << pole(i, j) << "\n";
			std::cout << "Obwod: " << obwod(i, j) << "\n";
			std::cout << std::endl;
		}

		
	}

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
