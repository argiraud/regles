//
//  resultat.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "resultat.h"
#include "time.h"

Resultat::Resultat(Donnees donnee){
    time_t now = time(0);
    ajouterInformation(asctime(localtime(&now)));
    ajouterInformation(donnee.toString());
}
Resultat::~Resultat(){
    
}
void Resultat::ajouterInformation(string info){
    information = information + info + "\n";
}

void Resultat::reussite(string id, string operation){
    ajouterInformation(id + " " + operation);
}

void Resultat::echec(string id, string operation){
    ajouterInformation(id + " " + operation);
}

void Resultat::info(string id, string operation){
    ajouterInformation(id + " "  + operation);
}

void Resultat::completerTest( Donnees  donnee){
   ajouterInformation(donnee.toString());
}

