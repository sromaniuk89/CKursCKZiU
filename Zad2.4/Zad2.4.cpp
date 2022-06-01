// Zad2.4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
    //niepolecany sposób inicjalizacji tablicy dwuwymiarowej:
    double num2D[5][5] = {1.0, 2.0, 3.0, 4., 5., 6., 7., 8., 9., 10., 11.,  12.,  13.,  14.,  15.,  16., 17., 18., 19., 20., 21., 22., 23., 24., 25. };

    //ten sposób jest przejrzystszy
    double tab2D[5][5] = { {1., 2., 3., 4., 5.},
    {11., 12., 13., 14., 15.},
    {21., 22., 23., 24., 25.},
    {31., 32., 33., 34., 35.},
    {41., 42., 43., 44., 45.}};

    std::cout << num2D[4][4] << "\n";
    std::cout << tab2D[4][4] << "\n";
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
