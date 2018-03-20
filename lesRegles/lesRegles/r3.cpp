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
    return donnees->getD1()%2 == 0 && donnees->getD3()%2 ==0;
}
