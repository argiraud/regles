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
    return (donnees->getD1()-donnees->getD4())%2 == 0;
}
