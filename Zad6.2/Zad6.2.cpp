// Zad6.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

void sumujTablice1W(int tab1[], int tab2[], int d)
{
    for (int i = 0; i < d; ++i)
    {
        std::cout << tab1[i] + tab2[i] << std::endl;

    }
}

void sumujTablice1W_v2(int *tab1, int *tab2, int d)
{
    for (int i = 0; i < d; ++i)
    {
        //std::cout << tab1[i] + tab2[i] << std::endl;

        std::cout << *(tab1+i) + *(tab2+i) << std::endl; //tab1[i] == *(tab1+i)
    }
}

void wypiszTablice(int* tab, int d)
{
    for (int i = 0; i < d; ++i)
    {
 
        std::cout << "[" << i << "]" << *(tab++) << std::endl; //tab++ - zwieksza o 1 wartosc wskaznika -> 
        //-> przesuwa sie na kolejny element w tablicy
    }
}

int main()
{
    int t1[] = { 1, 2, 3, 4, 5 };
    int t2[] = { 11, 12, 13, 14, 15 };

    sumujTablice1W(t1, t2, 5);
    sumujTablice1W_v2(t1, t2, 5);
    wypiszTablice(t1,5);
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
