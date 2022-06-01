// Prz5.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int suma(int a, int b) //argumenty funkcji są widoczne tylko wewnatrz funkcji
{
    return a + b;
}

int sumaInna(int a, int b) //takim sposobem argumenty sa przekazywane przez kopie
{
    a += 2;
    b *= 2;
    return a + b;
}

int sumaInna(const int a, const int b) //dodajac const mamy pewnosc ze argumenty sie nie zmienia w trakcie dzialania funkcji
{
    //a += 2; // to nie zadziala
    //b *= 2;
    return a + b;
}

int main()
{
    int n1 = 2, n2 = 3;
    std::cout << suma(2,5) << "\n";

    std::cout << sumaInna(n1, n2) << "\n";
    std::cout << n1 << "\n";
    std::cout << n2 << "\n";
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
