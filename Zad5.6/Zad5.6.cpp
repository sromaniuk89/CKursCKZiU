// Zad5.6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

void rysujFigureA(int d=5)
{
    for (int i = 0; i < d; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            std::cout << '*';
        }

        std::cout << std::endl;
    }
}

void rysujFigureB(int d = 5)
{
    for (int i = 0; i < d; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (i != j)
            {
                std::cout << ' ';
            }
            else
            {
                std::cout << '*';
            }
        }

        std::cout << std::endl;
    }
}

void rysujFigureC(int d = 5)
{
    for (int i = 0; i < d; ++i) //tu iterujemy po wierszach
    {
        for (int j = 0; j < d; ++j) //tu iterujemy po kolumnach (znakach w danym wierszu)
        {
            if (i == 0 || i == d - 1 || j == 0 || j == d - 1)
            {
                std::cout << '*';
            }
            else
            {
                std::cout << ' ';
            }
            
        }

        std::cout << std::endl;
    }
}

void rysujFigureD(int d = 5)
{
    for (int i = 0; i < d; ++i)
    {
        for (int j = 0; j < d; ++j)
        {
            if (i == j || i==d-j-1)
            {
                std::cout << '*';
            }
            else
            {
                std::cout << ' ';
            }
        }

        std::cout << std::endl;
    }
}

int main()
{
    rysujFigureA();
    rysujFigureA(3);
    rysujFigureA(7);

    rysujFigureB();
    rysujFigureB(3);

    rysujFigureC();
    rysujFigureC(3);

    rysujFigureD();
    rysujFigureD(3);
    rysujFigureD(4);
    rysujFigureD(14);
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
