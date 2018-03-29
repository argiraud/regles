//
//  PlanTest.cpp
//  lesRegles
//
//  Created by Pereira Loann on 18/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "PlanTest.h"

PlanTest::PlanTest(){
    Resultat::nbConstructeurs ++;
}

PlanTest::~PlanTest(){
    delete resultat;
    delete conteneurRegleDepart;
    Resultat::nbDestructeurs ++;
}

Resultat* PlanTest::getResultat(){
    return this->resultat;
}

void PlanTest::initialiserRegles(){
    conteneurRegleDepart = chargerRegles();
}

ConteneurRegles* PlanTest::chargerRegles(){
    ConteneurRegles* conteneur = new ConteneurRegles(new R1(),new ConteneurRegles(new R4()), new ConteneurRegles(new R5()));

    return conteneur;
}

void PlanTest::appliquer(Donnees *donnees){
    bool test;
    if(resultat!= nullptr) delete resultat;
    resultat= new Resultat(*donnees);
    ConteneurRegles *conteneur = conteneurRegleDepart;
    while (conteneur != nullptr) {
        test=conteneur->courante->executer(donnees, resultat);
        if (test) {
            conteneur=conteneur->getSuivantPositif();
        }
        else
            conteneur=conteneur->getSuivantNegatif();
    }
    resultat->completerTest(*donnees);
}
