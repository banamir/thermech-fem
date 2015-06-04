//
// Created by banamir on 04.06.15.
//

#ifndef THERMECH_FEM_LINKEDPROPERTY_H
#define THERMECH_FEM_LINKEDPROPERTY_H

#include "material.h"
#include "state.h"


class LinkedProperty: AbstractProperty {

    public:
       Value getValue(State);

};


#endif //THERMECH_FEM_LINKEDPROPERTY_H
