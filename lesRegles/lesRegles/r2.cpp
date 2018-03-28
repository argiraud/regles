//
//  r2.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "r2.h"
R2::~R2(){
    
}
bool R2::executerRegle(){
    if((donnees->getD1()-donnees->getD4())%2 == 0){
        getResultat()->reussite("R2", "D1-D4 est pair :"+to_string(donnees->getD1()-donnees->getD4()));
        return true;
    }
    else{
        return false;
    }
}
