//
//  PlanTestControle.cpp
//  lesRegles
//
//  Created by Pereira Loann on 18/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include <stdio.h>
#include "PlanTestControle.h"

ConteneurRegles* PlanTestControle::chargerRegles(){
    ConteneurRegles* conteneur = new ConteneurRegles(new R3());
    conteneur->setSuivantPositif(new ConteneurRegles(new RegleDebut()));
    conteneur->setSuivantNegatif(new ConteneurRegles(new RegleFin()));
    conteneur->suivantPositif->setSuivantNegatif(PlanTestExtreme::chargerRegles());
    conteneur->suivantPositif->setSuivantPositif(PlanTestExtreme::chargerRegles());


    return conteneur;
}

PlanTestControle::~PlanTestControle(){
}
