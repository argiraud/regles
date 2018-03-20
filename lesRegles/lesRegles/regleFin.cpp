//
//  regleFin.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "regleFin.h"
RegleFin::~RegleFin(){
    
}
void RegleFin::executerRegleModification(){
    donnees->setD5(donnees->getD5()+10);
}
