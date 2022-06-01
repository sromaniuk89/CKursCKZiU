// Zad6.3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

void sumujTablice2W(int tab1[][3], int tab2[][3], int d)
{
    for (int i = 0; i < d; ++i)
    {
        for (int j = 0; j < d; ++j)
        {
            std::cout << tab1[i][j] + tab2[i][j] << "; ";
        }

        std::cout << std::endl;
    }
}

void sumujTablice2W_v2(int* tab1, int* tab2, int d1, int d2)
{
    for (int i = 0; i < d1; ++i)
    {
        for (int j = 0; j < d2; ++j)
        {
            std::cout << *(tab1++) + *(tab2++) << "; ";
        }

        std::cout << std::endl;
    }
}

void sumujTablice2W_v2(int* tab1, int* tab2, int * wynik, int d1, int d2)
{
    for (int i = 0; i < d1; ++i)
    {
        for (int j = 0; j < d2; ++j)
        {
            *(wynik++) = *(tab1++) + *(tab2++);
        }
    }
}

void wyswietlTablice2W(int* tab, int d1, int d2)
{
    for (int i = 0; i < d1; ++i)
    {
        for (int j = 0; j < d2; ++j)
        {
            std::cout << *(tab++) << "; ";
        }

        std::cout << std::endl;
    }
}

int main()
{
    int t1[3][3] = { {1, 2, 3}, {4,5,6}, {7,8,9} };
    int t2[3][3] = { {31, 32, 33}, {34,35,36}, {37,38,39} };
    int sum1[3][3] = {}; //klamry inicjalizuja tablice zerami

    int t3[2][2] = { {1,2},{3,4} };
    int t4[2][2] = { {11,12},{13,14} };
    int sum2[2][2] = {}; //klamry inicjalizuja tablice zerami

    sumujTablice2W(t1, t2, 3);
    std::cout << std::endl;
    sumujTablice2W_v2(t1[0], t2[0], 3, 3); //t1[][]==**t1 -> t1[]==*t1 
    sumujTablice2W_v2(t3[0], t4[0], 2, 2);

    sumujTablice2W_v2(t1[0], t2[0], sum1[0], 3, 3);
    sumujTablice2W_v2(t3[0], t4[0], sum2[0], 2, 2);

    wyswietlTablice2W(sum1[0], 3, 3);
    wyswietlTablice2W(sum2[0], 2, 2);
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
