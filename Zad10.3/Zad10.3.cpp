// Zad10.3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

class Punkt
{
    float x, y;

public:
    Punkt()
    {
        x = 0.;
        y = 0.;
    }

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

class Wektor
{
    Punkt pP, pK;

public:
    Wektor(Punkt pP, Punkt pK)
    {
        this->pP = pP;
        this->pK = pK;
    }

    void wyswietlWektor()
    {
        std::cout << "pP(x: " << pP.pobierzX() << "; y: " << pP.pobierzY() << ')'
            << "\tpK(x: " << pK.pobierzX() << "; y: " << pK.pobierzY() << ')' << std::endl;
    }

    void przesun(float dx, float dy)
    {
        pP.przesun(dx, dy);
        pK.przesun(dx, dy);
    }

    float obliczDlugosc()
    {
        return sqrt(pow(pK.pobierzX() - pP.pobierzX(), 2.0) + pow(pK.pobierzY() - pP.pobierzY(), 2.0));
    }
};

int main()
{
    Wektor w1 = Wektor(Punkt(1., 1.), Punkt(3., 3.));

    w1.wyswietlWektor();
    std::cout << w1.obliczDlugosc() << std::endl;
    w1.przesun(2., 2.);
    w1.wyswietlWektor();

    std::cout << w1.obliczDlugosc() << std::endl;
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
