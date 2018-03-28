//
//  regleFin.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "regleFin.h"
RegleFin::~RegleFin(){
    Resultat::nbDestructeurs ++;
}
void RegleFin::executerRegleModification(){
    if(donnees->setD5(donnees->getD5()+10)){
          getResultat()->reussite("FIN", "D5 + 10 : "+to_string(donnees->getD5()));
    }
}
