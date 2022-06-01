// Prz10.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

struct Uzytkownik //deklarujac nowa strukture -> tworzymy nowy typ zlozony
{
    std::string imie;  //pole imie czyli zmienna imie w strukturze
    std::string haslo; //pole haslo 
    short wiek; 

    bool plec;
    std::string status;
};

void wyswietlUzytkownika(Uzytkownik uzytk)
{
    std::cout << uzytk.imie << "; " << uzytk.haslo << "; " <<
        uzytk.wiek << "; " << uzytk.plec << "; " << uzytk.status << "\n";
}

int main()
{
    Uzytkownik adamAdamowicz = {
        "Adam",
        "qwerty123",
        19,
        true,
        "administrator"
    };

    Uzytkownik tomaszTomaszewicz = {
        "Tomasz",
        "qwerty123",
        21,
        true,
        "uzytkownik"
    };

    wyswietlUzytkownika(adamAdamowicz);
    wyswietlUzytkownika(tomaszTomaszewicz);

    adamAdamowicz.wiek = 20; //w strukturze za pomoca kropki mozemy rowniez modyfikowac pola
    wyswietlUzytkownika(adamAdamowicz);
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
