//
//  PlanTestExtreme.cpp
//  lesRegles
//
//  Created by Pereira Loann on 18/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include <stdio.h>
#include "PlanTestExtreme.h"

ConteneurRegles* PlanTestExtreme:: chargerRegles(){
    ConteneurRegles *conteneur1 = new ConteneurRegles(new R1());
    ConteneurRegles *conteneur2 = new ConteneurRegles(new R2());
    conteneur1->setSuivantPositif(new ConteneurRegles(new R4()));
    conteneur2->setSuivantNegatif(new ConteneurRegles(new R6()));
    conteneur2->setSuivantPositif(new ConteneurRegles(new R5()));
    conteneur1->setSuivantNegatif(conteneur2);
    return conteneur1;
}

PlanTestExtreme::~PlanTestExtreme(){
    
}
