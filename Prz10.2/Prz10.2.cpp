// Prz10.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

class Osoba
{
    //jezeli na poczatku klasy nie ma modyfikatora dostepu -> to domyslnie jest private!!!
    std::string imie = "Karol"; //pole prywatne - do tego pola nie ma dostepu spoza klasy. Metody tej klasy maja do tego pola dostep

public: //modyfikator dostepu public sprawia ze pola oraz metody po nim zdefiniowane beda publiczne
    int wiek;

    void ustawImie(std::string imie) //setter
    {
        //this wskazuje na obiekt na ktorym dana metoda zostala wywolana
        this->imie = imie; //this->imie mowi kompilatorowi ze chodzi nam o pole imie klasy w ktorej sie znajdujemy!!!
    }

    //getter
    void wyswietlImie() //ta metoda przynalezy do klasy Osoba i jest publiczna!!!
    {
        std::cout << imie << "\n"; //jezeli imie nie jest przesloniete argumentem to mozemy nie uzywac strzalki :)
    }

    void ustawWiek(int wiek); //tylko deklaracja metody ustawWiek
};

void Osoba::ustawWiek(int wiek) //definicja metody ustawWiek poza klasą
{
    this->wiek = wiek;
}

int main()
{
    //ten obiekt wiadomo ze nalezy utworzyc juz na etapie kompilacji (statycznie)
    Osoba karol;
    karol.wiek = 21;

    std::cout << karol.wiek << "\n";
    //std::cout << karol.imie << "\n"; // to nie zadziala bo imie klasy Osoba jest prywatne!!!
    karol.wyswietlImie();
    karol.ustawWiek(23);
    std::cout << karol.wiek << "\n";

    //deklarowanie dynamiczne:
    //operator new tworzy nam obiekt w sposob dynamiczny - czyli obiekty moga byc tworzone w trakcie dzialania programu
    //inaczej niz statycznie gdzie obiekty sa tworzone w z gory okreslony sposob (na etapie kompilacji)
    Osoba* adam = new Osoba; //wskaźnik na obiekt klasy Osoba

    //dostep do pol i metod z poziomu wskaźnika na obiekt następuje przy użyciu operatora -> (strzalki)
    adam->ustawImie("Adam");
    adam->ustawWiek(31);

    adam->wyswietlImie();

    //mozna tez uzyc operatora dereferencji
    (*adam).ustawImie("Adam123");
    (*adam).wyswietlImie();
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
