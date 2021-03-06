//
//  resultat.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "resultat.h"
#include <iostream>
#include "time.h"
int Resultat::nbConstructeurs = 0;
int Resultat::nbDestructeurs = 0;
int Resultat::constr = 0;
int Resultat::dest = 0;
Resultat::Resultat(Donnees const& donnee){
    time_t now = time(0);
    ajouterInformation(asctime(localtime(&now)));
    ajouterInformation(donnee.toString());
    Resultat::nbConstructeurs ++;
    
}
Resultat::~Resultat(){
    Resultat::nbDestructeurs ++;
}
void Resultat::ajouterInformation(string info){
    information = information + info + '\n';
}

void Resultat::reussite(string id, string operation){
    ajouterInformation("REUSSITE - "+ id +" : " + operation);
}

void Resultat::echec(string id, string operation){
    ajouterInformation("ECHEC - "+ id +" : " + operation);
}

void Resultat::info(string id, string operation){
    ajouterInformation("INFO - "+ id +" : " + operation);
}

void Resultat::completerTest(Donnees const& donnee){
   ajouterInformation(donnee.toString());
}


ostream& operator<<(ostream& s, const Resultat& r){
    s << r.getInformations();
    return s;
}

