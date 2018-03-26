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
    Resultat(Donnees donnee);
    ~Resultat();
    void reussite(string id, string operation);
    void echec(string id, string operation);
    void info(string id, string operation);
    string getInformations(){return information;}
    void completerTest(Donnees donnee);
private:
    void ajouterInformation(string info);
    string information;
};
#endif /* resultat_h */
