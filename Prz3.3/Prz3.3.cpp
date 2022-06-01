// Prz3.3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
    int i = 3;
    std::cout << i << std::endl;

    //dla ifa 0-> false a wartosci niezerowe -> true
    //if zadziala gdy warunek jest true
    if (i==5) //sprawdzamy wartość zmiennej i
    {
        int i = 7; //przysłonięcie zmiennej i
        int z = 7;
        std::cout << i * z << std::endl;
    }

    std::cout << i << std::endl;

    if (i > 4) //sprawdzamy wartość zmiennej i
    {
        std::cout << "Wartosc jest wieksza niz 4" << std::endl;
    }
    else //ten blok zostanie wykonany kiedy warunek nie jest spelniony
    {
        std::cout << "Wartosc nie jest wieksza niz 4" << std::endl;
    }

    int n;
    std::cin >> n;

    if (n > 0)
    {
        std::cout << "Podana wartosc jest dodatnia" << std::endl;
    }
    else if (n < 0)
    {
        std::cout << "Podana wartosc jest ujemna" << std::endl;
    }
    else
    {
        std::cout << "Podales 0" << std::endl;
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
