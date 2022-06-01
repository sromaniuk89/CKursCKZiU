// Zad5.3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

std::string szyfrujTekst(std::string str)
{
    std::string rezultat{};

    for (int i = 0; i < str.length(); ++i)
    {
        rezultat += str[i]-20; //pobieramy znak ze stringa, przesuwamy sie o 20 pozycji tablicy ASCII wstecz 
        //i dodajemy do nowego stringa
    }

    return rezultat;
}

std::string deszyfrujTekst(std::string str)
{
    std::string rezultat{};

    for (int i = 0; i < str.length(); ++i)
    {
        rezultat += str[i] + 20; //pobieramy znak ze stringa, przesuwamy sie o 20 pozycji tablicy ASCII wprzod 
        //i dodajemy do nowego stringa
    }

    return rezultat;
}

int main()
{
    std::cout << szyfrujTekst("rzepa") << "\n";
    std::cout << deszyfrujTekst(szyfrujTekst("rzepa")) << "\n";
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
