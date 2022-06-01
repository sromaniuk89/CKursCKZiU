// Zad11.3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

void sortujBabelkowo(float *tab, int n)
{
    float zmTym;

    for (int i = 0; i < n - 1; i++) //w tej petli wykonujemy kolejne przejscia po tablicy
    {
        //w tej petli realizujemy porownania w danym przejsciu
        for (int j = 0; j < n - i - 1; j++) // (jest ich za kazdym przejsciem coraz mniej)
        {
            //sprawdzamy czy liczba po lewej stronie jest wieksza niz liczba po prawej stronie porownania
            if (*(tab + j) > *(tab + j + 1)) 
            {
                zmTym = *(tab + j + 1); //zapamietujemy tymczasowo wartosc po prawej stronie
                *(tab + j + 1) = *(tab + j); //na prawa strone zapisuje liczbe z lewej strony
                *(tab + j) = zmTym;//na lewa strone zapisze liczbe ktora byla po stronie prawej
            }
        }
    }

}

int main()
{
    float tab[5] = { 3.14, -4.51, 17.80, 3.14, 23.0 };

    sortujBabelkowo(tab, 5);

    for (int i = 0; i < 5; ++i)
    {
        std::cout << tab[i] << "; ";
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
