//
//  main.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 16/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include <iostream>
#include "ensembleDonnees1.h"
#include "ensembleDonnees2.h"
#include "PlanTest.h"
#include "PlanTestControle.h"
#include "PlanTestExtreme.h"
using namespace std;

int main() {
    Donnees** donnees = new Donnees*[2];
    donnees[0] = new EnsembleDonnees1();
    donnees[1] = new EnsembleDonnees2();
    PlanTest** plansTest = new PlanTest*[3];
    plansTest[0] = new PlanTest();
    plansTest[1] = new PlanTestExtreme();
    plansTest[2] = new PlanTestControle();
    
    for (int p=0; p < 3; p++){
        plansTest[p]->initialiserRegles();
    }

    for (int d = 0; d < 2; d++)
        for (int p = 0; p < 3; p++)
        {
            cout << "Plan de test " << p << " donnees " << d << endl;
            plansTest[p]->appliquer(donnees[d]);
            cout << plansTest[p]->getResultat()->getInformations() << endl;
            // Bonus #2 : Surcharge de l'opérateur << dans Resultat
             //cout << *(plansTest[p]->getResultat()) << endl;
        }
    for (int d = 0; d < 2; d++)
        delete donnees[d];
    delete donnees;
    for (int p = 0; p < 3; p++)
        delete plansTest[p];
    delete plansTest;
    // Bonus #1 : Gestion des constructeurs et des destructeurs
    cout << "Nombre Constructeurs Donnees: " << Resultat::getNbConstructeurs() << endl;
    cout << "Nombre Destructeurs Donnees: " << Resultat::getNbDestructeurs() << endl;
    return 0;
}
