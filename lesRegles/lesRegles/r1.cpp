//
//  r1.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "r1.h"
R1::~R1(){
    
}
bool R1::executerRegle(){
    if(donnees->getD1()%2 == 0){
        getResultat()->reussite("R1", "D1 est pair :"+to_string(donnees->getD1()));
        return true;
    }
    else{
        getResultat()->echec("R1", "D1 est impair :"+to_string(donnees->getD1()));
        return false;
    }
}

