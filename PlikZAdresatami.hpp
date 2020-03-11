//
//  PlikZAdresatami.hpp
//  ksiazka wlasna obiektowo
//
//  Created by Krystian Lewandowski on 05/03/2020.
//  Copyright © 2020 Krystian Lewandowski. All rights reserved.
//

#ifndef PlikZAdresatami_hpp
#define PlikZAdresatami_hpp
#include <vector>
#include <iostream>
#include <fstream>
#include "Adresat.hpp"
#include "MetodyPomocnicze.hpp"
using namespace std;
class PlikZAdresatami
{
    const string PLIK_Z_ADRESATAMI; 
    int idOstatniegoAdresata;
    
    bool czyPlikJestPusty(fstream &plikTekstowy);   
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
   
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami) : PLIK_Z_ADRESATAMI(nazwaPlikuZAdresatami){
        idOstatniegoAdresata = 0;
    };
    void dopiszAdresataDoPliku(Adresat adresat); 
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();

};



#endif /* PlikZAdresatami_hpp */