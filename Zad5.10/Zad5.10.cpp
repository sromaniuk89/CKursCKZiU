// Zad5.10.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int ciagFibonacciego(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        //rekurencja pozwala nam łatwiej tworzyc rozwiazania, ale niekoniecznie beda one szybsze
        //rekurencja nie jest optymalnym rozwiazaniem dla problemow rozgaleziajacych sie
        return ciagFibonacciego(n - 2) + ciagFibonacciego(n - 1);

    }
}

int main()
{
    for (int i = 0; i < 100; ++i)
        std::cout << i << ": " << ciagFibonacciego(i) << "\n";

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
