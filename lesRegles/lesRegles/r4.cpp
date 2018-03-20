//
//  r4.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "r4.h"
R4::~R4(){
    
}
void R4::executerRegleModification(){
    donnees->setD1(donnees->getD1()-3);
}
