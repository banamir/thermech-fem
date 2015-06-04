//
// Created by banamir on 04.06.15.
//

#ifndef THERMECH_FEM_ABSTRACTPROPERTY_H
#define THERMECH_FEM_ABSTRACTPROPERTY_H

#include <vector>
#include "material.h"
#include "LinkedProperty.h"

class AbstractProperty {
    public:
        virtual Value getValue(vector<Value> state);
        virtual LinkedProperty link(State);
};


#endif //THERMECH_FEM_ABSTRACTPROPERTY_H
