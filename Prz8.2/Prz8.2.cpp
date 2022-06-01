// Prz8.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <stdexcept>


void funkcja()
{
    //throw 5;
    throw "cos innego";
    //throw std::logic_error("Cos poszlo nie tak :(");
    //throw std::runtime_error("Cos poszlo nie tak :::(");
}

void test()
{
    try
    {
        std::cout << "Proba pierwsza\n";
        funkcja();
        std::cout << "Proba druga\n";
        funkcja();
    }
    catch (std::runtime_error& e)
    {
        std::cout << "Runtime error: " << e.what() << "  (ale nic nie szkodzi)\n";
    }
    catch (std::exception& e)
    {
        std::cout << "Inny standardowy wyjatek: " << e.what() << '\n';
        // Rzuć złapany wyjątek ponownie
        throw;
        // Nie:
        //throw e;
        // Patrz: czerwona ramka
    }
    catch (int)
    {
        std::cout << "Mowilem, zebys nie rzucal int >:/\n";
        // Rzuć nowy, inny wyjątek
        throw std::logic_error("Nieoczekiwany int");
    }
    catch (...)
    {
        std::cout << "Nieoczekiwany, nieznany wyjatek!\n";
        throw std::logic_error("Zlapano nieznany wyjatek");
    }
}

int main()
{
    try
    {
        test();
    }
    catch (std::runtime_error& e)
    {
        std::cout << "Blad wykonania programu: " << e.what() << '\n';
    }
    catch (std::logic_error& e)
    {
        std::cout << "Blad logiczny programu: " << e.what() << '\n';
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
