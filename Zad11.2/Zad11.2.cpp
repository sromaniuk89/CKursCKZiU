    // Zad11.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

float najwiekszaWartosc(float* tab, int n)
{
    float max=*tab;
    for (int i = 1; i < n; ++i)
    {
        if (max < *(tab + i))
        {
            max = *(tab + i);
        }
    }

    return max;

    //f(n)=1+n-1+1=n+1
    //O(n)
}

int main()
{
    const int n = 50;
    float tab[50] = {};

    for (int i = 0; i < n; ++i)
    {
        tab[i] = (rand() % 1000) / 100.0; 
    }


    std::cout << najwiekszaWartosc(tab,n)<<"\n";
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
