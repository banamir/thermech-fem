//
// Created by banamir on 04.06.15.
//

#ifndef THERMECH_FEM_ABSTRACTMATERIAL_H
#define THERMECH_FEM_ABSTRACTMATERIAL_H

#include<string>
#include "AbstractProperty.h"

class AbstractMaterial {

    public:
        virtual AbstractProperty getProperty(string name);
        virtual AbstractMaterial setProperty(string name, AbstractProperty prop);

};


#endif //THERMECH_FEM_ABSTRACTMATERIAL_H
