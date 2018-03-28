//
//  regleModification.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "regleModification.h"
RegleModification::RegleModification(string id) : Regle(id){Resultat::nbConstructeurs ++;}
RegleModification::~RegleModification(){
    Resultat::nbDestructeurs ++;
    
}

bool RegleModification::executerRegle(){
    executerRegleModification();
    return true;
}





