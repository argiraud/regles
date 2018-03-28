//
//  regleDebut.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "regleDebut.h"
RegleDebut::~RegleDebut(){
    Resultat::nbDestructeurs ++;
}
void RegleDebut::executerRegleModification(){
    donnees->setD1(min(donnees->getD1(),10));
}
