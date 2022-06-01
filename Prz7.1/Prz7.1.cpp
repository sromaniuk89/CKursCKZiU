// Prz7.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::fstream plik;

    //sciezka absolutna rowniez zadziala
    plik.open("test.txt", std::ios::in | std::ios::out); // \\ -> \

    std::cout << plik.is_open() << std::endl; //metoda is_open() sprawdza czy udalo sie otworzyc plik

    if (plik.is_open())
    {
        std::string str{};

        //1
        plik >> str; //operator >> bedzie pobierac kolejne wiersze z mego pliku
        std::cout << str << std::endl;
        
        //2
        getline(plik, str); //getline analizuje inny znak konca linii wiec trzeba uwazac
        std::cout << str << std::endl;
        getline(plik, str);
        std::cout << str << std::endl;
        getline(plik, str);
        std::cout << str << std::endl;

        //3
        std::cout << "Sposob 3:" << std::endl;
        //char temp[10]; //zle - bez inicjalizacji
        char temp[10] = {}; //dobrze - z inicjalizacja (z 0)
        plik.read(temp, 9);
        std::cout << temp << std::endl;

        plik.seekg(0, std::ios_base::end); //ta metoda przesuwam sie na koniec pliku

        plik << "tekst z programu\n";
    }

    plik.close();

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
