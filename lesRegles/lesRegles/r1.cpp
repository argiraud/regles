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
    return donnees->getD1()%2 == 0;
}

