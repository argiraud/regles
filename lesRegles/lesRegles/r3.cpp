//
//  r3.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "r3.h"
R3::~R3(){
    
}
bool R3::executerRegle(){
    if(donnees->getD1()%2 == 0 && donnees->getD3()%2 ==0){
        getResultat()->reussite("R3", "D1 et D3 sont pairs: "+to_string(donnees->getD1())+"/"+to_string(donnees->getD3()));
        return true;
    }
    else
        getResultat()->echec("R3", "D1 et D3 ne sont pas pairs: "+to_string(donnees->getD1())+"/"+to_string(donnees->getD3()));
    return false;
}
