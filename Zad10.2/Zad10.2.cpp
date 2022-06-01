// Zad10.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

class Punkt
{
    float x, y;

public:
    Punkt(float x, float y)
    {
        this->x = x;
        this->y = y;
    }

    void przesun(float dx, float dy)
    {
        x += dx;
        y += dy;
    }

    void wyswietlPolozenie()
    {
        std::cout << "x: " << x << "; y: " << y << std::endl;
    }

    float pobierzX()
    {
        return x;
    }

    float pobierzY()
    {
        return y;
    }
};

int main()
{
    Punkt p1 = Punkt(3., 4.);
    p1.wyswietlPolozenie();
    p1.przesun(1., 1.);
    p1.wyswietlPolozenie();
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
