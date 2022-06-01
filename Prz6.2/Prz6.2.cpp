// Prz6.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
    int a = 3;
    int b = 13;

    //int& r; //odwołanie zmienna "r" wymaga inicjatora	
    int& r = a;
    const int& rConst = a;
    //rConst = 7; //referencja jest const wiec wartosci nie da sie zmienic, natomiast z poziomu a juz da sie to zrobic
    a = 7;
    std::cout << "rConst: " << rConst << "\n";


    std::cout << "a: " << a << "\n"; 
    std::cout << "r: " << r << "\n"; //referencji uzywamy tak jak zwyklej zmiennej

    std::cout << "&a: " << &a << "\n";
    std::cout << "&r: " << &r << "\n"; //otrzymmay taki sam adres jak a -> &a==&r
    //stad wniosek ze referencja to jest utworzenie innej nazwy tej samej zmiennej (tego samego miejsca w pamieci) - synonim

    //&r=b; // to nie zadziala, bo referencji nie da sie zmienic po zainicjalizowaniu!!!!
    r = b;
    std::cout << "a: " << a << "\n";

    std::cout << "rConst: " << rConst << "\n";
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
