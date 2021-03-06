//
//  PlikZUzytkownikami.hpp
//  ksiazka wlasna obiektowo
//
//  Created by Krystian Lewandowski on 27/02/2020.
//  Copyright © 2020 Krystian Lewandowski. All rights reserved.
//

#ifndef PLIKZUZYTKOWNIKAMI_HPP
#define PLIKZUZYTKOWNIKAMI_HPP

#include <iostream>
#include <vector>
#include <fstream>

#include "uzytkownik.hpp"
#include "MetodyPomocnicze.hpp"
#include "PlikTekstowy.h"
using namespace std;

class PlikZUzytkownikami : PlikTekstowy
{

    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
    
public:

    PlikZUzytkownikami(string nazwaPlikuZUzytkownikami) : PlikTekstowy(nazwaPlikuZUzytkownikami){};
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);
};
#endif /* PlikZUzytkownikami_hpp */
    
