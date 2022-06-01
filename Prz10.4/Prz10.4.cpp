// Prz10.4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

class Produkt
{
private:
    std::string nazwa;
    float cena;

public:
    //jezeli nie ma zadnych konstruktorow to kompilot tworzy konstruktor domyslny (bez argumentow)
    //jezeli natomiast zdefiniujemy jakis konstruktor to kompilator nie utworzy konstruktora domyslnego!!!
    Produkt() //konstruktor bezargumentowy
    {
        std::cout << "wywolano konstruktor bezargumentowy" << std::endl;
    }

    Produkt(std::string nazwa, float cena) //konstruktor nie ma typu zwracanego i nazwa taka sama jak nazwa klasy
    {
        this->nazwa = nazwa;
        this->cena = cena;

    }

    Produkt(std::string nazwa) //konstruktor mozna przeciazac
    {
        this->nazwa = nazwa;
        this->cena = 0.0;

    }

    ~Produkt()//destruktor sam z siebie obiektu nie niszczy. Jest on wywolywany kiedy system chce dany obiekt zniszczyc
    {
        std::cout << "wywolano destruktor, ktos chce zniszczyc obiekt: " << nazwa << std::endl;
    }

    void wyswietlInformacje()
    {
        std::cout << this->nazwa << "; " << cena << "\n";
    }

    void zmienCene(float cena)
    {
        this->cena = cena;
    }
};


int main()
{
    Produkt mydlo("mydlo", 3.0);
    Produkt czekolada = Produkt("czekoladaMleczna", 2.5);

    Produkt proszek("proszek");
    Produkt mleko = Produkt("mleko");
    
    Produkt smietana; //wywolujemy konstruktor bezargumentowy
    Produkt cukier = Produkt();

    Produkt czekolada2 = Produkt(czekolada); //konstruktor kopiujacy


    mydlo.wyswietlInformacje();
    proszek.wyswietlInformacje();
    czekolada2.wyswietlInformacje();
    czekolada2.zmienCene(3.5);
    czekolada2.wyswietlInformacje();
    czekolada.wyswietlInformacje();

    Produkt* cukierek = new Produkt("cukierekZelek", 0.25);

    (*cukierek).wyswietlInformacje();
    
    delete(cukierek); //usuwanie obiektu
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
