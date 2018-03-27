//
//  donnees.h
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef donnees_h
#define donnees_h

#include <stdio.h>
#include <string>

class Donnees{
public:
    Donnees(int d1, int d2, int d3, int d4, int d5);
    ~Donnees();
    int getD1(){return d1;}
    int getD2(){return d2;}
    int getD3(){return d3;}
    int getD4(){return d4;}
    int getD5(){return d5;}
    bool setD1(int _d1);
    bool setD2(int _d2);
    bool setD3(int _d3);
    bool setD4(int _d4);
    bool setD5(int _d5);
    std::string toString();
    bool valide();
    
private:
    int d1;
    int d2;
    int d3;
    int d4;
    int d5;
    
};

#endif /* donnees_h */
