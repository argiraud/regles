//
//  ConteneurRegles.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 20/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "ConteneurRegles.h"

ConteneurRegles::ConteneurRegles(Regle *regle){
    courante = regle;
    Resultat::nbConstructeurs ++;
}

ConteneurRegles::~ConteneurRegles(){
    Resultat::nbDestructeurs ++;
}
