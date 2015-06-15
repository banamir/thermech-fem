//
// Created by banamir on 15.06.15.
//

#ifndef THERMECH_FEM_VALUEAXIS_H
#define THERMECH_FEM_VALUEAXIS_H

#include "../material-init.h"

#include <vector>
#include <algorithm>
#include <functional>

namespace material {

    using namespace std;

    class ValueAxis : vector<Value> {
    //Type definition
    public:

        enum interpolationType {LINEAR,LOGARITHMIC};
        enum boundaryType {CUTOFF,EXTRAPOLATE};

    private:
        interpolationType intType;
        boundaryType  boundType;

    public:
        //Constructors
        ValueAxis(vector<Value> axisVals,intType = LINEAR,bountType = CUTOFF):
                vector(axisVals) {
            this->intType = intType;
            this->boundType =boundType;
        };

        ValueAxis(ValueAxis axis): ValueAxis(axis,axis.intType,axis.boundType){};

        ValueAxis(int range, intType = LINEAR,bountType = CUTOFF ):vector(range) {
            this->intType = intType;
            this->boundType = boundType;
        }

        //TODO:Implement operator =

        int find(Value val) {
            return find(begin(),end(), [val](Value v){ return v < val; } );
        }


    };

}

#endif //THERMECH_FEM_VALUEAXIS_H
