//
//  PlanTest.cpp
//  lesRegles
//
//  Created by Pereira Loann on 18/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include <stdio.h>
#include "PlanTest.h"




void PlanTest::initialiserRegles(){
    conteneurRegleDepart = chargerRegles();
}

ConteneurRegles PlanTest::*chargerRegles(){
    ConteneurRegles conteneur = *new ConteneurRegles(new R1());
    conteneur.setSuivantNegatif(*new ConteneurRegles(new R5()));
    conteneur.setSuivantPositif(*new ConteneurRegles(new R4()));
    return conteneur;
}