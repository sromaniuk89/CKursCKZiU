// Zad4.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
    int a, b;
    std::cout << "Podaj 1 liczbe\n";
    std::cin >> a;
    std::cout << "Podaj 2 liczbe\n";
    std::cin >> b;

    if (a == b)
    {
        std::cout << "Sa rowne?: TAK\n";
    }
    else
    {
        std::cout << "Sa rowne?: NIE\n";
    }

    if (a != b)
    {
        std::cout << "Sa rozne?: TAK\n";
    }
    else
    {
        std::cout << "Sa rozne?: NIE\n";
    }

    if (a > b)
    {
        std::cout << "Czy pierwsza jest wieksza?: TAK\n";
    }
    else
    {
        std::cout << "Czy pierwsza jest wieksza?: NIE\n";
    }

    if (a < b)
    {
        std::cout << "Czy pierwsza jest mniejsza?: TAK\n";
    }
    else
    {
        std::cout << "Czy pierwsza jest mniejsza?: NIE\n";
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
