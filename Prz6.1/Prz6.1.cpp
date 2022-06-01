// Prz6.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
    int a = 3;

    std::cout << "a: " << a << "\n";

    int* p = &a; //definiuje wskaźnik p typu int i wskazuje na a

    //int* p; //deklaruje wskaźnik p typu int
    //p = &a; //tutaj mowie ze p ma wskazywac na a (pobieram adres a i przypisuje do p)

    std::cout << "&a: " << &a << "\n"; //to samo co p
    std::cout << "p: " << p << "\n"; //to pokaze mi jaki jest adres zmiennej a w pamieci -> to jest wartosc jaka przechowuje wskaznik
    std::cout << "*p: " << *p << "\n"; //operator dereferencji * odnosi sie do WARTOSCI umieszczonej pod wskazywanym adresem
    std::cout << "&p: " << &p << "\n";

    int** pp = &p;
    std::cout << "pp: " << pp << "\n"; 
    std::cout << "*pp: " << *pp << "\n"; 
    std::cout << "**pp: " << **pp << "\n";
    std::cout << "&pp: " << &pp << "\n";

    *p = 5; //zmieniamy wartosc zmiennej a
    std::cout << "a: " << a << "\n"; //5

    int b = 555;

    p = &b;
    std::cout << "*p: " << *p << "\n";
    std::cout << "**pp: " << **pp << "\n";
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
