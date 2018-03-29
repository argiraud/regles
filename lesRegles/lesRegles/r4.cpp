//
//  r4.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "r4.h"
R4::~R4(){
    Resultat::nbDestructeurs ++;
}
void R4::executerRegleModification(){
    if(donnees->setD1(donnees->getD1()-3)){
        
         getResultat()->reussite("R4", "D1 est modifie :"+to_string(donnees->getD1()));
    }
    
    
    
}
