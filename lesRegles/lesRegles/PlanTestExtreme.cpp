//
//  PlanTestExtreme.cpp
//  lesRegles
//
//  Created by Pereira Loann on 18/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include <stdio.h>
#include "PlanTestExtreme.h"
#include <iostream>
ConteneurRegles* PlanTestExtreme:: chargerRegles(){
    ConteneurRegles *conteneur = new ConteneurRegles(new R1(), new ConteneurRegles(new R4()), new ConteneurRegles(new R2(), new ConteneurRegles(new R5()), new ConteneurRegles(new R6())));
    
    return conteneur;
}

PlanTestExtreme::~PlanTestExtreme(){
    Resultat::nbDestructeurs ++;
}
