//
//  r6.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "r6.h"
R6::~R6(){
    Resultat::nbDestructeurs ++;
}
void R6::executerRegleModification(){
    donnees->setD4(min(donnees->getD4()-10,donnees->getD2()));
}
