//
//  r5.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "r5.h"
R5::~R5(){
    Resultat::nbDestructeurs ++;
}
void R5::executerRegleModification(){
    if(donnees->setD5(donnees->getD5()+donnees->getD4()+donnees->getD1())){
          getResultat()->reussite("R5", "D5 est modifie :"+to_string(donnees->getD5()));
    }
}
