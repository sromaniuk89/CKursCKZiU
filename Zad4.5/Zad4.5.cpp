// Zad4.5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
    int a, b, w;
    char c;
    std::cout << "Wprowadz 1 liczbe: \n";
    std::cin >> a;
    std::cout << "Wprowadz 2 liczbe: \n";
    std::cin >> b;
    std::cout << "Jaka operacje matematyczna chcesz wykonac?: \n";
    std::cin >> c;

    switch (c) 
    {
        case '+':
            w = a + b;
            break;
        case '-':
            w = a - b;
            break;
        case '*':
            w = a * b;
            break;
        case '/':
            if(b!=0)
            { 
                w = a / b;
            }
            else
            {
                w = 0;
                std::cout << "Dzielnik nie moze byc rowny 0. \n";
            }
            break;
        default:
            w = 0;
            std::cout << "Wprowadzony znak nie moze zostac rozpoznany. \n";
            break;
    }

    std::cout << "Wynik: " << w << "\n";
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
