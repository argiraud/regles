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
    Resultat(Donnees const);
    ~Resultat();
    void reussite(string id, string operation);
    void echec(string id, string operation);
    void info(string id, string operation);
    string getInformations();
    void completerTest(Donnees const);
private:
    void ajouterInformation(string string);
    string information;
};
#endif /* resultat_h */
