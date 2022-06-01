// Zad5.8.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int obliczSilnie(int n)
{
    //5! = 5*4*3*2*1
    //n! = n*(n-1)! = n*(n-1)*(n-2)! = .... n*(n-1)*(n-2) * .... * 1 -> 1 u nas jest warunkiem koncowym
    //przy rekurencji pamietamy o warunku koncowym!!!!!
    //1! = 1 <- to jest u nas wiedza podstawowa, ktora bedzie warunkiem koncowym
    if(n<=1) //warunek koncowy - wiedza podstawowa
    {
        return n;
    }
    else
    {
        return n * obliczSilnie(n - 1); //w kazdym wywolaniu funkcja wykonuje 1 krok obliczen
    }
    //3! = 3*2! = 3*2*1! = 3*2*1= 3*2 = 6
    //4! = 4*3! = 4*3*2! = 4*3*2*1!= 4*3*2*1 = 4*3*2 = 4*6 = 24
}

int main()
{
    for(int i = 0; i<10; ++i)
        std::cout << obliczSilnie(i) << "\n";
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
