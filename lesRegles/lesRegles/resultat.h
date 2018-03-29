//
//  resultat.h
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef resultat_h
#define resultat_h
#include "donnees.h"
#include <stdio.h>
using namespace std;

class Resultat{
public:
    Resultat(Donnees const& donnee);
    ~Resultat();
    void reussite(string id, string operation);
    void echec(string id, string operation);
    void info(string id, string operation);
    string getInformations(){return information;}
    void completerTest(Donnees const& donnee);
    int static getNbConstructeurs(){return nbConstructeurs;}
    int static getNbDestructeurs(){return nbDestructeurs;}
    int static nbConstructeurs;
    int static nbDestructeurs;
private:
    void ajouterInformation(string info);
    string information;
};
#endif /* resultat_h */
