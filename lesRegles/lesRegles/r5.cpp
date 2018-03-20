//
//  r5.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "r5.h"
R5::~R5(){
    
}
void R5::executerRegleModification(){
    donnees->setD5(donnees->getD5()+donnees->getD4()+donnees->getD1());
}
