// Zad1.3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
int a = 3, b = 5; //zmienne globalne

int main()
{
    int c = 7, d = 9;
    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";
    std::cout << d << "\n";

    //a = 1; jezeli w mainie jeszcze nie mam zmiennej lokalnej a, to w taki sposob zmienie wartosc zmiennej globalnej
    int a = 1; //przeslaniam zmienna globalna zmienna lokalna, wartosc zmiennej globalnej a bez zmian 
    
    /* -> taki zapis komentuje wiele linii
    a = 3;
    a = 5;
    a = 8;
    */ //zamiast usuwac program mozna go zakomentowac, bo byc moze jeszcze sie przyda

    std::cout << a << "\n";
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
